module SignExtend #(parameter INSTR_WIDTH = 32)(
    input logic [INSTR_WIDTH-1:0] Instr,
    input logic [1:0] ImmSrc,
    output logic [INSTR_WIDTH-1:0] ImmOp 
);

always_comb 
    case (ImmSrc)
        2'b00 : ImmOp={{20{Instr[31]}},Instr[31:20]};
        2'b01 : ImmOp={{20{Instr[31]}},Instr[31:25],Instr[11:7]};
        2'b10 : ImmOp={{20{Instr[31]}},Instr[7],Instr[30:25],Instr[11:8],1'b0};
    endcase

    
endmodule
