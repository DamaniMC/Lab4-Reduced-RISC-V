// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"

#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU___024root___initial__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Loading rom...\n");
    VL_READMEM_N(true, 32, 256, 0, std::string{"test.mem"}
                 ,  &(vlSelf->CPU__DOT__controlPath__DOT__instrMem__DOT__rom_array)
                 , 0, ~0ULL);
    vlSelf->CPU__DOT__PC = 0U;
}

VL_ATTR_COLD void VCPU___024root___settle__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray
        [0xaU];
    vlSelf->CPU__DOT__controlPath__DOT__Instr = vlSelf->CPU__DOT__controlPath__DOT__instrMem__DOT__rom_array
        [vlSelf->CPU__DOT__PC];
    vlSelf->CPU__DOT__dataPath__DOT__ALUop1 = vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray
        [(0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                   >> 0xfU))];
    if ((0x13U == (0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr))) {
        vlSelf->CPU__DOT__RegWrite = 1U;
        if ((0U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                          >> 0xcU)))) {
            vlSelf->CPU__DOT__ALUctrl = 0U;
        } else if ((2U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__ALUctrl = 5U;
        } else if ((6U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__ALUctrl = 3U;
        } else if ((7U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__ALUctrl = 2U;
        }
        vlSelf->CPU__DOT__ALUsrc = 1U;
        vlSelf->CPU__DOT__controlPath__DOT__ImmSrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr))) {
        vlSelf->CPU__DOT__RegWrite = 0U;
        vlSelf->CPU__DOT__ALUctrl = 1U;
        vlSelf->CPU__DOT__controlPath__DOT__ImmSrc = 2U;
    }
    if ((0U == (IData)(vlSelf->CPU__DOT__controlPath__DOT__ImmSrc))) {
        vlSelf->CPU__DOT__ImmOp = (((- (IData)((vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                >> 0x14U));
    } else if ((1U == (IData)(vlSelf->CPU__DOT__controlPath__DOT__ImmSrc))) {
        vlSelf->CPU__DOT__ImmOp = (((- (IData)((vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                      >> 7U))));
    } else if ((2U == (IData)(vlSelf->CPU__DOT__controlPath__DOT__ImmSrc))) {
        vlSelf->CPU__DOT__ImmOp = (((- (IData)((vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                         >> 7U)))));
    }
    vlSelf->CPU__DOT__dataPath__DOT__ALUop2 = ((IData)(vlSelf->CPU__DOT__ALUsrc)
                                                ? vlSelf->CPU__DOT__ImmOp
                                                : vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray
                                               [(0x1fU 
                                                 & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                    >> 0x14U))]);
    if ((0U == (IData)(vlSelf->CPU__DOT__ALUctrl))) {
        vlSelf->CPU__DOT__dataPath__DOT__ALUout = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                                                   + vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    } else if ((1U == (IData)(vlSelf->CPU__DOT__ALUctrl))) {
        vlSelf->CPU__DOT__dataPath__DOT__ALUout = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                                                   - vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    } else if ((2U == (IData)(vlSelf->CPU__DOT__ALUctrl))) {
        vlSelf->CPU__DOT__dataPath__DOT__ALUout = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                                                   & vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    } else if ((3U == (IData)(vlSelf->CPU__DOT__ALUctrl))) {
        vlSelf->CPU__DOT__dataPath__DOT__ALUout = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                                                   | vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    }
    vlSelf->CPU__DOT__EQ = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                            == vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    if ((0x13U == (0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr))) {
        vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch = 0U;
        vlSelf->CPU__DOT__PCsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr))) {
        vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch = 1U;
        if ((0U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                          >> 0xcU)))) {
            vlSelf->CPU__DOT__PCsrc = ((IData)(vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch) 
                                       & (IData)(vlSelf->CPU__DOT__EQ));
        } else if ((1U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__PCsrc = ((IData)(vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch) 
                                       & (~ (IData)(vlSelf->CPU__DOT__EQ)));
        }
    }
    vlSelf->CPU__DOT__dataPath__DOT__next_PC = (0xffU 
                                                & ((IData)(vlSelf->CPU__DOT__PCsrc)
                                                    ? 
                                                   ((IData)(vlSelf->CPU__DOT__PC) 
                                                    + vlSelf->CPU__DOT__ImmOp)
                                                    : 
                                                   ((IData)(4U) 
                                                    + (IData)(vlSelf->CPU__DOT__PC))));
}

VL_ATTR_COLD void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    // Body
    VCPU___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    // Body
    VCPU___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VCPU___024root___final(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___final\n"); );
}

VL_ATTR_COLD void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__PC = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__dataPath__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__dataPath__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__dataPath__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__dataPath__DOT__next_PC = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CPU__DOT__controlPath__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__controlPath__DOT__Instr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->CPU__DOT__controlPath__DOT__instrMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
