// 0x4F1E00: WRLD/SNAM runtime default verified 2026-10-01: TESWorldSpace::SetDefault explicitly sets music field unk084[4]=0 at0x4F1E53. The TESWorldSpace constructor0x4F2A10 calls SetDefault0x4F1E00 at0x4F2BD7. TESWorldSpace::Load later assigns each reached SNAM candidate at0x4F210C; full absent SNAM is therefore known music enum0 (Default), not unknown.
//
// 0x4F1E53: Oblivion WRLD default music proof: TESWorldSpace::SetDefault writes dword0 to unk084[4], the SNAM U32, here. Constructor0x4F2A10 invokes SetDefault at0x4F2BD7. A full non-partial WRLD without SNAM therefore has effective enum value0 (Default).
void __thiscall TESWorldSpace::SetDefault(TESWorldSpace *this)
{
  this->parentWorldspace = 0; /*0x4f1e06*/
  LOBYTE(this->worldFlags) = 0; /*0x4f1e09*/
  if ( !TESForm_HasBuiltinFormID(this) ) /*0x4f1e0c*/
    LOBYTE(this->worldFlags) |= 1u; /*0x4f1e15*/
  this->climate = 0; /*0x4f1e19*/
  this->WaterForm = 0; /*0x4f1e1c*/
  FormHeapFree((unsigned int)this->texture.path.m_data); /*0x4f1e26*/
  this->texture.path.m_data = 0; /*0x4f1e2b*/
  this->texture.path.m_bufLen = 0; /*0x4f1e2e*/
  this->texture.path.m_dataLen = 0; /*0x4f1e32*/
  this->unk084[0] = 0;                          // Authoritative full-WRLD MNAM initial state: SetDefault zeroes the five unk084 dwords; the first four are the 16-byte MNAM field. Short MNAM prefix overlays are therefore exactly reconstructible for a fresh non-partial form, while partial override records inherit prior field bytes. /*0x4f1e3b*/
  this->unk084[1] = 0; /*0x4f1e41*/
  this->unk084[2] = 0; /*0x4f1e47*/
  this->unk084[3] = 0; /*0x4f1e4d*/
  this->unk084[4] = 0; /*0x4f1e53*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4f1e5d*/
}
