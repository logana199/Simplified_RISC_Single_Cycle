// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfetch_unit_tb.h for the primary calling header

#ifndef VERILATED_VFETCH_UNIT_TB___024UNIT_H_
#define VERILATED_VFETCH_UNIT_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfetch_unit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfetch_unit_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vfetch_unit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfetch_unit_tb___024unit(Vfetch_unit_tb__Syms* symsp, const char* v__name);
    ~Vfetch_unit_tb___024unit();
    VL_UNCOPYABLE(Vfetch_unit_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
