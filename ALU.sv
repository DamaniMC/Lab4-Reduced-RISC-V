module ALU #(parameter DATA_WIDTH=32)(
    input logic [DATA_WIDTH-1:0] op1, 
    input logic [DATA_WIDTH-1:0] op2,
    input logic [2:0] ctrl,
    output logic [DATA_WIDTH-1:0] sum,
    output logic eq
);

always_comb begin
    case (ctrl)
    3'b000: sum = op1 + op2;
    3'b001: sum = op1 - op2;
    3'b010: sum = op1 & op2;
    3'b011: sum = op1 | op2;
        
    endcase

    assign eq= (op1 == op2);
   
end

endmodule
