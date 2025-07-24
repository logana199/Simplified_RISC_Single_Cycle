// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFETCH_UNIT_TB__SYMS_H_
#define VERILATED_VFETCH_UNIT_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfetch_unit_tb.h"

// INCLUDE MODULE CLASSES
#include "Vfetch_unit_tb___024root.h"
#include "Vfetch_unit_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vfetch_unit_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfetch_unit_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfetch_unit_tb___024root       TOP;
    Vfetch_unit_tb___024unit       TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_fetch_tb;

    // CONSTRUCTORS
    Vfetch_unit_tb__Syms(VerilatedContext* contextp, const char* namep, Vfetch_unit_tb* modelp);
    ~Vfetch_unit_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
