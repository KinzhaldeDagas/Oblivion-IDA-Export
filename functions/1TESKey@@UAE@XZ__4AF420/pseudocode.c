void __thiscall TESKey::~TESKey(TESForm *this)
{
  this->vtbl = (TESFormVtbl *)&TESKey::`vftable'{for `TESKey'};
  *((_DWORD *)this + 9) = &TESKey::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESKey::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESKey::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESKey::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESKey::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1A) = &TESKey::`vftable'{for `TESWeightForm'};
  j_TESForm_ClearComponentReferences(this);
  TESObjectMISC::~TESObjectMISC((TESObjectMISC *)this);
}
