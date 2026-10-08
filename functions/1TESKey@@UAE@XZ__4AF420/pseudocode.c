void __thiscall TESKey::~TESKey(TESForm *this)
{
  this->vtbl = (TESFormVtbl *)&TESKey::`vftable'{for `TESKey'}; /*0x4af448*/
  *((_DWORD *)this + 9) = &TESKey::`vftable'{for `TESFullName'}; /*0x4af44e*/
  *((_DWORD *)this + 0xC) = &TESKey::`vftable'{for `TESModel'}; /*0x4af455*/
  *((_DWORD *)this + 0x12) = &TESKey::`vftable'{for `TESIcon'}; /*0x4af45c*/
  *((_DWORD *)this + 0x15) = &TESKey::`vftable'{for `TESScriptableForm'}; /*0x4af463*/
  *((_DWORD *)this + 0x18) = &TESKey::`vftable'{for `TESValueForm'}; /*0x4af46a*/
  *((_DWORD *)this + 0x1A) = &TESKey::`vftable'{for `TESWeightForm'}; /*0x4af471*/
  j_TESForm_ClearComponentReferences(this); /*0x4af480*/
  TESObjectMISC::~TESObjectMISC((TESObjectMISC *)this); /*0x4af48f*/
}
