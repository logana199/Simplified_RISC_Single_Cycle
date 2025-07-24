// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfetch_unit_tb.h for the primary calling header

#include "Vfetch_unit_tb__pch.h"
#include "Vfetch_unit_tb__Syms.h"
#include "Vfetch_unit_tb___024root.h"

void Vfetch_unit_tb___024root___ctor_var_reset(Vfetch_unit_tb___024root* vlSelf);

Vfetch_unit_tb___024root::Vfetch_unit_tb___024root(Vfetch_unit_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfetch_unit_tb___024root___ctor_var_reset(this);
}

void Vfetch_unit_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfetch_unit_tb___024root::~Vfetch_unit_tb___024root() {
}
