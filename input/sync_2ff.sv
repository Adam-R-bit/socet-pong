`timescale 1ns / 1ps

// 2-flop synchronizer
// into the clk domain and resolves metastability before it is used.
module sync_2ff #(
    parameter logic RESET_VAL = 1'b0  // value both flops take in reset
)(
    input  logic clk,
    input  logic rst_n,
    input  logic async_in,
    output logic sync_out
);
    logic meta;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            meta     <= RESET_VAL;
            sync_out <= RESET_VAL;
        end
        else begin
            meta     <= async_in;
            sync_out <= meta;
        end
    end

endmodule
