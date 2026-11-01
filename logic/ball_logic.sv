module ball_logic(
    
    input logic clk,
    input logic frame,
    input logic rst_n,
    input logic [7:0] paddle_pos_1,
    input logic [7:0] paddle_pos_2,
    output logic [7:0] pos_x,
    output logic [7:0] pos_y 
    output logic [7:0] vector_y,
    output logic [7:0] vector_x
);
    //look up verilog functions. 
    //params for bounds
    localparam int MAX_H = 100;
    localparam int MIN_H = 0;
    localparam int MIN_W = 0;
    localparam int MAX_W = 100;
    
    localparam int GOAL_BOUNDS = 20; //offset where it is considered goal

    //SAVE ME TAKE STUFF OUT OF THE ALWAYS FF BLOCK REMEBER THE ONES WE Lost
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n)
            pos_x <= MAX_W / 2;
            pos_y <= MAX_H / 2;
            vector_x <= -1;
            vector_y <= 0;
    end
    
endmodule