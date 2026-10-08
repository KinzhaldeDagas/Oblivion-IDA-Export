TESKey *__thiscall TESKey::TESKey(TESKey *this)
{
  TESObjectMISC::TESObjectMISC(this); /*0x4af508*/
  *(_DWORD *)this = &TESKey::`vftable'{for `TESKey'}; /*0x4af519*/
  *((_DWORD *)this + 9) = &TESKey::`vftable'{for `TESFullName'}; /*0x4af51f*/
  *((_DWORD *)this + 0xC) = &TESKey::`vftable'{for `TESModel'}; /*0x4af526*/
  *((_DWORD *)this + 0x12) = &TESKey::`vftable'{for `TESIcon'}; /*0x4af52d*/
  *((_DWORD *)this + 0x15) = &TESKey::`vftable'{for `TESScriptableForm'}; /*0x4af534*/
  *((_DWORD *)this + 0x18) = &TESKey::`vftable'{for `TESValueForm'}; /*0x4af53b*/
  *((_DWORD *)this + 0x1A) = &TESKey::`vftable'{for `TESWeightForm'}; /*0x4af542*/
  *((_BYTE *)this + 4) = 0x27; /*0x4af549*/
  TESForm_SetIsLinked((TESForm *)this, 1); /*0x4af54d*/
  return this; /*0x4af554*/
}
