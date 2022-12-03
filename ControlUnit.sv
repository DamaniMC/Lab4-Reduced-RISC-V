module ControlUnit #(
    parameter DATA_WIDTH=32
)(
    input logic[DATA_WIDTH-1:0] Instr,
    input logic EQ,
    output logic [1:0] ImmSrc,
    output logic PCsrc,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic RegWrite
); 

logic [6:0] op= Instr[6:0];
logic [2:0] funct3 = Instr[14:12];
logic [6:0] funct7 = Instr[31:25];
logic Branch;


always_comb begin
    case (op)
        // 7'd3: begin
        //   ALUctrl=3'b000;
        //   ImmSrc=2'b00;
        //   RegWrite=1;
        //   ALUsrc=1;
        //   Branch=0;
        // end
   
        
        7'd19: begin
            case (funct3) 
                    3'b000: 
                            ALUctrl=3'b000;
                    3'b010: ALUctrl=3'b101;
                    3'b110: ALUctrl=3'b011;
                    3'b111: ALUctrl=3'b010;
            
            endcase
            Branch=0;
            ALUsrc=1;
            RegWrite=1;
            ImmSrc=2'b00;
            PCsrc=0;
        end
        // 7'd51:
        //        case (funct3) 
        //             3'b000: 
        //                 if ({op[5],funct7[5]}==2'b11)
        //                     ALUctrl=3'b001;
        //                 else
        //                     ALUctrl=3'b000;
        //             3'b010: ALUctrl=3'b101;
        //             3'b110: ALUctrl=3'b011;
        //             3'b111: ALUctrl=3'b010;
            
        //     endcase
        //     Branch=0;
        //     ALUsrc=0;
        //     RegWrite=1;
        // 7'd35:
        7'd99:   begin
            ALUctrl=3'b001;
            ImmSrc=2'b10;
            Branch=1;
            case (funct3)
             3'b000: PCsrc=(Branch&EQ);
             3'b001: PCsrc=(Branch&!EQ);
            endcase
            RegWrite=0;
        end
    endcase
    
end
endmodule
