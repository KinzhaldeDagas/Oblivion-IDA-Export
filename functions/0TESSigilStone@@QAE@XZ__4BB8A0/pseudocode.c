TESSigilStone *__thiscall TESSigilStone::TESSigilStone(TESSigilStone *this)
{
  TESObjectMISC::TESObjectMISC(this);
  TESUsesForm_constr((_BYTE *)this + 0x70);
  EffectItemList_constr((_DWORD *)this + 0x1E);
  *(_DWORD *)this = &TESSigilStone::`vftable'{for `TESSigilStone'};
  *((_DWORD *)this + 9) = &TESSigilStone::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESSigilStone::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESSigilStone::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESSigilStone::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESSigilStone::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1A) = &TESSigilStone::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x1C) = &TESSigilStone::`vftable'{for `TESUsesForm'};
  *((_DWORD *)this + 0x1E) = &TESSigilStone::`vftable'{for `EffectItemList'};
  *((_BYTE *)this + 4) = 0x2A;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
