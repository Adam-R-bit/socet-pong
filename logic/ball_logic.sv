module ball_logic(
    
    input logic clk,
    input logic frame,
    input logic rst_n,
    input logic paddle_pos_1[7:0],
    input logic paddle_pos_2[7:0],
    output logic [7:0] pos, // the next position of the paddle
    output logic [7:0] vector
);
    //params for bounds
    localparam int MAX_H = 100;
    localparam int MIN_H = 0;
    localparam int MIN_W = 0;
    localparam int MAX_W = 100;

    localparam int GOAL_BOUNDS = 20; //offset where it is considered goal


    always_ff @(posedge clk or negedge rst_n) begin

    end

endmodule