// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"

#include "VCPU__Syms.h"
#include "VCPU___024root.h"

void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf);

VCPU___024root::VCPU___024root(VCPU__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU___024root___ctor_var_reset(this);
}

void VCPU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCPU___024root::~VCPU___024root() {
}
