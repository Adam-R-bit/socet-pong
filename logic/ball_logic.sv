module ball_logic(
    input logic clk,
    input logic frame,
    input logic rst_n,
    input logic [7:0] paddle_pos_1,
    input logic [7:0] paddle_pos_2, // Measures from top of paddle
    output logic [7:0] pos_x,
    output logic [7:0] pos_y,
    output logic [7:0] vector_y,
    output logic [7:0] vector_x,
    output logic right_goal,
    output logic left_goal
);
    //bounds
    localparam int MAX_H = 100;
    localparam int MIN_H = 0;
    localparam int MIN_W = 0;
    localparam int MAX_W = 100;

    localparam int GOAL_BOUNDS = 20;

    logic reset_ball;
    logic [7:0] next_pos_x;
    logic [7:0] next_pos_y;
    logic [7:0] next_vector_y;
    logic [7:0] next_vector_x;

    // Returns:
    // 0 = no goal
    // 1 = left side goal
    // 2 = right side goal
    function [1:0] checkGoal(
        input logic [7:0] x);
        begin
            if (x <= GOAL_BOUNDS)
                checkGoal = 2'b1;
            else if (x >= MAX_W - GOAL_BOUNDS)
                checkGoal = 2'b2;
            else
                checkGoal = 2'b0;
        end
    endfunction

    always_comb begin
        left_goal = 1'b0;
        right_goal = 1'b0;
        reset_ball = 1'b0;

        if (checkGoal(pos_x) == 2'b01) begin
            left_goal = 1'b1;
            reset_ball = 1'b1;
        end
        else if (checkGoal(pos_x) == 2'b10) begin
            right_goal = 1'b1;
            reset_ball = 1'b1;
        end
    end
    
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            pos_x <= MAX_W / 2;
            pos_y <= MAX_H / 2;
            vector_x <= 8'hFF;
            vector_y <= 0;
        end
        else if (reset_ball) begin
            pos_x <= MAX_W / 2;
            pos_y <= MAX_H / 2;
            vector_x <= 8'hFF;
            vector_y <= 0;
        end
        else begin
            next_pos_x <= pos_x;
            next_pos_y <= pos_y;
            next_vector_x <= vector_x;
            next_vector_y <= vector_y;

    end
    
endmodule