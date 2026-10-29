module paddle_logic(
    
    input logic clk,
    input logic frame, //like an enable
    input logic movement_up, 
    input logic movement_down, 
    input logic rst_n,
    output logic [7:0] next_pos // the next position of the paddle
);
    //params for bounds
    localparam int MAX_H = 100;
    localparam int MIN_H = 0;

    //still need to find where 0,0 is based on the cord system.

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            next_pos <= MAX_H / 2;
        else if (movement_up && next_pos < MAX_H && frame)
            next_pos <= next_pos + 1;
        else if (movement_down && next_pos > MIN_H && frame)
            next_pos <= next_pos - 1;
    end

endmodule