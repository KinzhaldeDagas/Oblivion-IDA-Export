TESKey *__thiscall TESKey::TESKey(TESKey *this)
{
  TESObjectMISC::TESObjectMISC(this);
  *(_DWORD *)this = &TESKey::`vftable'{for `TESKey'};
  *((_DWORD *)this + 9) = &TESKey::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESKey::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESKey::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESKey::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESKey::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1A) = &TESKey::`vftable'{for `TESWeightForm'};
  *((_BYTE *)this + 4) = 0x27;
  TESForm_SetIsLinked((TESForm *)this, 1);
  return this;
}
