// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__Conv__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("Conv", VerilatedTracePrefixType::SCOPE_MODULE);
    VTestbench___024root__trace_init_sub__TOP__Conv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("Testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+4,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+6,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+12,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+92,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+96,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+14,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+15,0,"seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+24,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("conv_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+4,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+12,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+92,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+96,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("shifted_data", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+97,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+99,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+101,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+103,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+105,0,"temp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"temp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("conv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+4,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+97,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+99,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+101,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+103,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+105,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+92,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+96,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"VECTOR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("vector_stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+126,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+130,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+131,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+135,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+136,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+140,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+141,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+145,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("vector_stage2", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+92,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+107,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+108,0,"mul_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mul_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+16,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+108,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+25,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+29,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"PRODUCT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+30,0,"multiplicand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+25,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+154,0,"CNT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"CNT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"fsm_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+146,0,"work_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+29,0,"finish_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+32,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+18,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+113,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+108,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+35,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+39,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"PRODUCT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+40,0,"multiplicand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+35,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+154,0,"CNT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"CNT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"fsm_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"work_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+39,0,"finish_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+42,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+20,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+108,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+45,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+49,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"PRODUCT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+50,0,"multiplicand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+45,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+154,0,"CNT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"CNT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"fsm_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"work_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+49,0,"finish_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+52,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+22,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+119,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+108,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+55,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+59,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"PRODUCT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+60,0,"multiplicand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+55,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+154,0,"CNT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"CNT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"fsm_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+149,0,"work_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+59,0,"finish_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+62,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shift", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+12,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+97,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+99,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+101,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+103,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+105,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+156+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+125,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("judge", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+4,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+12,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+92,0,"result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+96,0,"out_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+66+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+82,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+86,0,"simulate_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+90,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__Conv__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__Conv__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+153,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VTestbench___024root__trace_init_top(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_top\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTestbench___024root__trace_register(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_register\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_const_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_const_0_sub_0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+151,(1U));
    bufp->fullIData(oldp+152,(0x80U),32);
    bufp->fullIData(oldp+153,(0x40U),32);
    bufp->fullIData(oldp+154,(6U),32);
    bufp->fullIData(oldp+155,(0x3fU),32);
    bufp->fullQData(oldp+156,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__data_reg[0]),64);
    bufp->fullQData(oldp+158,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__data_reg[1]),64);
    bufp->fullQData(oldp+160,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__data_reg[2]),64);
    bufp->fullQData(oldp+162,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__data_reg[3]),64);
    bufp->fullIData(oldp+164,(4U),32);
}

VL_ATTR_COLD void VTestbench___024root__trace_full_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_full_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestbench___024root__trace_full_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_full_0_sub_0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.Testbench__DOT__rst));
    bufp->fullQData(oldp+2,(vlSelfRef.Testbench__DOT__in_data),64);
    bufp->fullQData(oldp+4,(vlSelfRef.Testbench__DOT__kernel
                            .__PVT__data[0U]),64);
    bufp->fullQData(oldp+6,(vlSelfRef.Testbench__DOT__kernel
                            .__PVT__data[1U]),64);
    bufp->fullQData(oldp+8,(vlSelfRef.Testbench__DOT__kernel
                            .__PVT__data[2U]),64);
    bufp->fullQData(oldp+10,(vlSelfRef.Testbench__DOT__kernel
                             .__PVT__data[3U]),64);
    bufp->fullBit(oldp+12,(vlSelfRef.Testbench__DOT__in_valid));
    bufp->fullIData(oldp+13,(vlSelfRef.Testbench__DOT__i),32);
    bufp->fullIData(oldp+14,(vlSelfRef.Testbench__DOT__j),32);
    bufp->fullIData(oldp+15,(vlSelfRef.Testbench__DOT__seed),32);
    bufp->fullQData(oldp+16,(vlSelfRef.Testbench__DOT__kernel
                             .__PVT__data[0U]),64);
    bufp->fullQData(oldp+18,(vlSelfRef.Testbench__DOT__kernel
                             .__PVT__data[1U]),64);
    bufp->fullQData(oldp+20,(vlSelfRef.Testbench__DOT__kernel
                             .__PVT__data[2U]),64);
    bufp->fullQData(oldp+22,(vlSelfRef.Testbench__DOT__kernel
                             .__PVT__data[3U]),64);
    bufp->fullBit(oldp+24,(vlSelfRef.Testbench__DOT__error));
    bufp->fullWData(oldp+25,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg),128);
    bufp->fullBit(oldp+29,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg));
    bufp->fullQData(oldp+30,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg),64);
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U]))) 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_3[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg 
                             >> 0x20U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_5[0U] = __Vtemp_4[0U];
    __Vtemp_5[1U] = __Vtemp_4[1U];
    __Vtemp_5[2U] = (1U & __Vtemp_4[2U]);
    bufp->fullWData(oldp+32,(__Vtemp_5),65);
    bufp->fullWData(oldp+35,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg),128);
    bufp->fullBit(oldp+39,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg));
    bufp->fullQData(oldp+40,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg),64);
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_7[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U]))) 
                             >> 0x20U));
    __Vtemp_7[2U] = 0U;
    __Vtemp_8[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_8[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg 
                             >> 0x20U));
    __Vtemp_8[2U] = 0U;
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    __Vtemp_10[0U] = __Vtemp_9[0U];
    __Vtemp_10[1U] = __Vtemp_9[1U];
    __Vtemp_10[2U] = (1U & __Vtemp_9[2U]);
    bufp->fullWData(oldp+42,(__Vtemp_10),65);
    bufp->fullWData(oldp+45,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg),128);
    bufp->fullBit(oldp+49,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg));
    bufp->fullQData(oldp+50,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg),64);
    __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_12[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U]))) 
                              >> 0x20U));
    __Vtemp_12[2U] = 0U;
    __Vtemp_13[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_13[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg 
                              >> 0x20U));
    __Vtemp_13[2U] = 0U;
    VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
    __Vtemp_15[0U] = __Vtemp_14[0U];
    __Vtemp_15[1U] = __Vtemp_14[1U];
    __Vtemp_15[2U] = (1U & __Vtemp_14[2U]);
    bufp->fullWData(oldp+52,(__Vtemp_15),65);
    bufp->fullWData(oldp+55,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg),128);
    bufp->fullBit(oldp+59,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg));
    bufp->fullQData(oldp+60,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg),64);
    __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_17[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U]))) 
                              >> 0x20U));
    __Vtemp_17[2U] = 0U;
    __Vtemp_18[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_18[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg 
                              >> 0x20U));
    __Vtemp_18[2U] = 0U;
    VL_ADD_W(3, __Vtemp_19, __Vtemp_17, __Vtemp_18);
    __Vtemp_20[0U] = __Vtemp_19[0U];
    __Vtemp_20[1U] = __Vtemp_19[1U];
    __Vtemp_20[2U] = (1U & __Vtemp_19[2U]);
    bufp->fullWData(oldp+62,(__Vtemp_20),65);
    bufp->fullBit(oldp+65,(vlSelfRef.Testbench__DOT__judge__DOT__request));
    bufp->fullWData(oldp+66,(vlSelfRef.Testbench__DOT__judge__DOT__mid[0]),128);
    bufp->fullWData(oldp+70,(vlSelfRef.Testbench__DOT__judge__DOT__mid[1]),128);
    bufp->fullWData(oldp+74,(vlSelfRef.Testbench__DOT__judge__DOT__mid[2]),128);
    bufp->fullWData(oldp+78,(vlSelfRef.Testbench__DOT__judge__DOT__mid[3]),128);
    bufp->fullWData(oldp+82,(vlSelfRef.Testbench__DOT__judge__DOT__sum),128);
    bufp->fullWData(oldp+86,(vlSelfRef.Testbench__DOT__judge__DOT__simulate_result),128);
    bufp->fullIData(oldp+90,(vlSelfRef.Testbench__DOT__judge__DOT__i),32);
    bufp->fullBit(oldp+91,(vlSelfRef.Testbench__DOT__in_ready));
    bufp->fullWData(oldp+92,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                             .__PVT__data),128);
    bufp->fullBit(oldp+96,(vlSelfRef.Testbench__DOT__out_valid));
    bufp->fullQData(oldp+97,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                             .__PVT__data[0U]),64);
    bufp->fullQData(oldp+99,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                             .__PVT__data[1U]),64);
    bufp->fullQData(oldp+101,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                              .__PVT__data[2U]),64);
    bufp->fullQData(oldp+103,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                              .__PVT__data[3U]),64);
    bufp->fullBit(oldp+105,(vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_valid));
    bufp->fullBit(oldp+106,(vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready));
    bufp->fullBit(oldp+107,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                            .__PVT__valid));
    bufp->fullBit(oldp+108,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start));
    bufp->fullCData(oldp+109,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg),2);
    bufp->fullQData(oldp+110,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                              .__PVT__data[0U]),64);
    bufp->fullCData(oldp+112,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg),2);
    bufp->fullQData(oldp+113,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                              .__PVT__data[1U]),64);
    bufp->fullCData(oldp+115,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg),2);
    bufp->fullQData(oldp+116,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                              .__PVT__data[2U]),64);
    bufp->fullCData(oldp+118,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg),2);
    bufp->fullQData(oldp+119,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                              .__PVT__data[3U]),64);
    bufp->fullCData(oldp+121,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg),2);
    bufp->fullIData(oldp+122,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+123,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__unnamedblk2__DOT__m),32);
    bufp->fullBit(oldp+124,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg));
    bufp->fullIData(oldp+125,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__i),32);
    bufp->fullWData(oldp+126,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                              [0U].__PVT__data),128);
    bufp->fullBit(oldp+130,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [0U].__PVT__valid));
    bufp->fullWData(oldp+131,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                              [1U].__PVT__data),128);
    bufp->fullBit(oldp+135,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [1U].__PVT__valid));
    bufp->fullWData(oldp+136,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                              [2U].__PVT__data),128);
    bufp->fullBit(oldp+140,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [2U].__PVT__valid));
    bufp->fullWData(oldp+141,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                              [3U].__PVT__data),128);
    bufp->fullBit(oldp+145,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [3U].__PVT__valid));
    bufp->fullCData(oldp+146,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt),6);
    bufp->fullCData(oldp+147,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt),6);
    bufp->fullCData(oldp+148,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt),6);
    bufp->fullCData(oldp+149,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt),6);
    bufp->fullBit(oldp+150,(vlSelfRef.Testbench__DOT__clk));
}
