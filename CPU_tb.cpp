
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VCPU.h"
#include"vbuddy.cpp"

#define CYCLES 500
#define ADDRESS_WIDTH 8
#define ROM_SIZE 256
int main(int argc, char **argv, char **ldv){
    int i;
    int clk;

    Verilated::commandArgs(argc,argv);
    VCPU* top= new VCPU;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace (tfp, 99);
    tfp->open("CPU.vcd");

    if(vbdOpen()!=1) return(-1);
    vbdHeader("Lab 4: DEATH");

    top->clk = 1;
    top->rst = 0;

 

     // run the simulation over 300 clk cycles
    for (i = 0; i<CYCLES; i++) {

        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }
        vbdHex(4,(int(top->a0)>>16)& 0xF);
        vbdHex(3,(int(top->a0)>>8)& 0xF);
        vbdHex(2,(int(top->a0)>>4)& 0xF);
        vbdHex(1,(int(top->a0))& 0xF);
        // Sldd count value to Vbuddy
      
        vbdCycle(i+1);
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
            exit(0);    
    }
    vbdClose();     // ++++
  tfp->close(); 
  printf("Exiting\n");
  exit(0);

    
}