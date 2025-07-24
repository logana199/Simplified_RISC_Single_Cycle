// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_tb.h for the primary calling header

#include "VALU_tb__pch.h"
#include "VALU_tb__Syms.h"
#include "VALU_tb___024root.h"

void VALU_tb___024root___ctor_var_reset(VALU_tb___024root* vlSelf);

VALU_tb___024root::VALU_tb___024root(VALU_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU_tb___024root___ctor_var_reset(this);
}

void VALU_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU_tb___024root::~VALU_tb___024root() {
}
