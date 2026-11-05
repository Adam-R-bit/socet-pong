module paddle_logic(
    
    input logic clk,
    input logic frame, //like an enable
    input logic movement_up, 
    input logic movement_down, 
    input logic rst_n,
    output logic [7:0] next_pos // the next position of the paddle measures from top of paddle
);
    //params for bounds
    localparam int MAX_H = 100;
    localparam int MIN_H = 0;
    localparam int SPEED = 2;
    logic [7:0] pos;  

    //still need to find where 0,0 is based on the cord system.
    
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            pos <= MAX_H / 2;
        else
            pos <= next_pos;
    end

    always_comb begin
        next_pos = pos;                

        if (frame) begin
            if (movement_up && !movement_down) begin
                if (pos + SPEED > MAX_H) 
                next_pos = MAX_H;   //clamping
                else                     
                next_pos = pos + SPEED;
            end
            else if (movement_down && !movement_up) begin
                if (pos < MIN_H + SPEED) 
                next_pos = MIN_H;   //clamping
                else
                next_pos = pos - SPEED;
            end
        end
    end

endmodule