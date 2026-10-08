TESSigilStone *__thiscall TESSigilStone::TESSigilStone(TESSigilStone *this)
{
  TESObjectMISC::TESObjectMISC(this); /*0x4bb8ca*/
  TESUsesForm_constr((_BYTE *)this + 0x70); /*0x4bb8dc*/
  EffectItemList_constr((_DWORD *)this + 0x1E); /*0x4bb8eb*/
  *(_DWORD *)this = &TESSigilStone::`vftable'{for `TESSigilStone'}; /*0x4bb8f2*/
  *((_DWORD *)this + 9) = &TESSigilStone::`vftable'{for `TESFullName'}; /*0x4bb8f8*/
  *((_DWORD *)this + 0xC) = &TESSigilStone::`vftable'{for `TESModel'}; /*0x4bb8ff*/
  *((_DWORD *)this + 0x12) = &TESSigilStone::`vftable'{for `TESIcon'}; /*0x4bb906*/
  *((_DWORD *)this + 0x15) = &TESSigilStone::`vftable'{for `TESScriptableForm'}; /*0x4bb90d*/
  *((_DWORD *)this + 0x18) = &TESSigilStone::`vftable'{for `TESValueForm'}; /*0x4bb914*/
  *((_DWORD *)this + 0x1A) = &TESSigilStone::`vftable'{for `TESWeightForm'}; /*0x4bb91b*/
  *((_DWORD *)this + 0x1C) = &TESSigilStone::`vftable'{for `TESUsesForm'}; /*0x4bb922*/
  *((_DWORD *)this + 0x1E) = &TESSigilStone::`vftable'{for `EffectItemList'}; /*0x4bb928*/
  *((_BYTE *)this + 4) = 0x2A; /*0x4bb92e*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4bb932*/
  return this; /*0x4bb939*/
}
