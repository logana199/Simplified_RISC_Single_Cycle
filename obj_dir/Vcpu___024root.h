// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"


class Vcpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(halt_out,0,0);
    VL_OUT8(flags_out,3,0);
    CData/*0:0*/ __VactContinue;
    VL_IN16(IM_data_in,15,0);
    VL_OUT16(IM_address,15,0);
    VL_OUT16(IM_data,15,0);
    VL_OUT16(DM_address,15,0);
    VL_OUT16(DM_data_in,15,0);
    VL_OUT16(write_back,15,0);
    VL_OUT16(A_lu_A,15,0);
    VL_OUT16(B_lu_B,15,0);
    VL_OUT16(ALU_result,15,0);
    VL_OUT16(ALU_flags,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* v__name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
