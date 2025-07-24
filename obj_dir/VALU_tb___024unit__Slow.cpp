// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_tb.h for the primary calling header

#include "VALU_tb__pch.h"
#include "VALU_tb__Syms.h"
#include "VALU_tb___024unit.h"

void VALU_tb___024unit___ctor_var_reset(VALU_tb___024unit* vlSelf);

VALU_tb___024unit::VALU_tb___024unit(VALU_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU_tb___024unit___ctor_var_reset(this);
}

void VALU_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU_tb___024unit::~VALU_tb___024unit() {
}
