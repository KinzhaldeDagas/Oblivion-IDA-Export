void __thiscall TESSigilStone::~TESSigilStone(TESForm *this)
{
  TESForm *v2; // edi
  _DWORD *v3; // ecx

  v2 = (TESForm *)((char *)this + 0x70);
  v3 = this + 5;
  this->vtbl = (TESFormVtbl *)&TESSigilStone::`vftable'{for `TESSigilStone'};
  *((_DWORD *)this + 9) = &TESSigilStone::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESSigilStone::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESSigilStone::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESSigilStone::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESSigilStone::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1A) = &TESSigilStone::`vftable'{for `TESWeightForm'};
  v2->vtbl = (TESFormVtbl *)&TESSigilStone::`vftable'{for `TESUsesForm'};
  *v3 = &TESSigilStone::`vftable'{for `EffectItemList'};
  EffectItemList_Clear(v3);
  j_TESForm_ClearComponentReferences(this);
  TESUsesForm_destr(v2);
  TESObjectMISC::~TESObjectMISC((TESObjectMISC *)this);
}
