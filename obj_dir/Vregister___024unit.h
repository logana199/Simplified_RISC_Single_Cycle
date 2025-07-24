// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024UNIT_H_
#define VERILATED_VREGISTER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregister__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vregister__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister___024unit(Vregister__Syms* symsp, const char* v__name);
    ~Vregister___024unit();
    VL_UNCOPYABLE(Vregister___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
