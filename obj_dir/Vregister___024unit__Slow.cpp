// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "Vregister__pch.h"
#include "Vregister__Syms.h"
#include "Vregister___024unit.h"

void Vregister___024unit___ctor_var_reset(Vregister___024unit* vlSelf);

Vregister___024unit::Vregister___024unit(Vregister__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregister___024unit___ctor_var_reset(this);
}

void Vregister___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vregister___024unit::~Vregister___024unit() {
}
