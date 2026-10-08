void __thiscall TESSigilStone::~TESSigilStone(TESForm *this)
{
  TESForm *v2; // edi
  TESForm *v3; // ecx

  v2 = (TESForm *)((char *)this + 0x70); /*0x4bb98b*/
  v3 = this + 5; /*0x4bb98e*/
  this->vtbl = (TESFormVtbl *)&TESSigilStone::`vftable'{for `TESSigilStone'}; /*0x4bb991*/
  *((_DWORD *)this + 9) = &TESSigilStone::`vftable'{for `TESFullName'}; /*0x4bb997*/
  *((_DWORD *)this + 0xC) = &TESSigilStone::`vftable'{for `TESModel'}; /*0x4bb99e*/
  *((_DWORD *)this + 0x12) = &TESSigilStone::`vftable'{for `TESIcon'}; /*0x4bb9a5*/
  *((_DWORD *)this + 0x15) = &TESSigilStone::`vftable'{for `TESScriptableForm'}; /*0x4bb9ac*/
  *((_DWORD *)this + 0x18) = &TESSigilStone::`vftable'{for `TESValueForm'}; /*0x4bb9b3*/
  *((_DWORD *)this + 0x1A) = &TESSigilStone::`vftable'{for `TESWeightForm'}; /*0x4bb9ba*/
  v2->vtbl = (TESFormVtbl *)&TESSigilStone::`vftable'{for `TESUsesForm'}; /*0x4bb9c1*/
  v3->vtbl = (TESFormVtbl *)&TESSigilStone::`vftable'{for `EffectItemList'}; /*0x4bb9c7*/
  EffectItemList_Clear(v3); /*0x4bb9d5*/
  j_TESForm_ClearComponentReferences(this); /*0x4bb9dc*/
  TESUsesForm_destr(v2); /*0x4bb9e8*/
  TESObjectMISC::~TESObjectMISC((TESObjectMISC *)this); /*0x4bb9f7*/
}
