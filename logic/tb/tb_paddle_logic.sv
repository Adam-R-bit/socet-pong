module tb_ball_logic;
    `timescale 1ns / 1ps

    localparam int DELAY = 10;

    logic frame;
    logic movement_up;
    logic movement_down;
    logic nRST;
    logic CLK = 0;

    logic [7:0] next_pos;

    int test_number;
    int num_passed;
    int i;

    paddle_logic dut (
        .clk           (CLK),
        .frame         (frame),
        .movement_up   (movement_up),
        .movement_down (movement_down),
        .rst_n         (nRST),
        .next_pos      (next_pos)
    );
    task reset();
    begin
        nRST = 1'b0;
        repeat(2) @(posedge CLK);
        // Release reset
        @(posedge CLK);
        nRST = 1'b1;
        @(posedge CLK);
        #(1);
    end
    endtask

    task apply_movements(
        input enable,
        input rst,
        input up,
        input down
    );
    movement_up = up;
    movement_down = down;
    nRST = rst;
    frame = enable;

    @(posedge CLK);
    #1;

    endtask
    
    task checkMatch(
        input [7:0] expected_pos
    );
    test_number += 1;
    if(expected_pos != next_pos) begin
        $display("[Time %0t]: Expected %8d, got %8d\n", $time, expected_pos, next_pos);
    end else begin
        num_passed += 1;
    end
    endtask

    always #5 CLK = ~CLK; // making clock

        task holdDown(
        input direction,
        input int times
        );
        
        if(direction) begin
            for (int i = 0; i < times; i = i + 1) begin
                apply_movements(1, 1, 1, 0);
            end
        end
        else begin
            for (int i = 0; i < times; i = i + 1) begin
                apply_movements(1, 1, 0, 1);
            end
        end
    endtask

    initial begin
        // set up waveform dump. This isn't necessary when working
        // with a simulator that does wave simulation by default,
        // but works with any simulator.
        $dumpfile("waveform.fst"); // output waves to 'waveform.vcd'
        $dumpvars;                 // dump all variables

        CLK = 0;
        frame = 0;
        movement_up = 0;
        movement_down = 0;
        nRST = 1;
    
        test_number = 0;
        num_passed = 0;

        reset();

        //task apply_movements(enable,rst,up,down)

        apply_movements(1, 1, 0, 0);
        checkMatch(8'd50);
        holdDown(1,2);

        checkMatch(8'd56);
        holdDown(1,30);
        checkMatch(8'd100);
        holdDown(0,60);
        checkMatch(8'd3);//what ever the width of the paddle is
        //apply_movements(1, 0, 1, 0, 8'd52);

        $display("Passed %0d/%0d tests.", num_passed, test_number);

        // End simulation
        $finish();
    end

endmodule