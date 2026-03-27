TESFlora *__thiscall TESFlora::TESFlora(TESFlora *this)
{
  sub_46E0B0(this);
  TESObjectACTI::TESObjectACTI((TESObjectACTI *)((char *)this + 0xC));
  *(_DWORD *)this = &TESFlora::`vftable'{for `TESFlora'};
  *((_DWORD *)this + 3) = &TESFlora::`vftable'{for `TESObjectACTI'};
  *((_DWORD *)this + 0xC) = &TESFlora::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xF) = &TESFlora::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x15) = &TESFlora::`vftable'{for `TESScriptableForm'};
  *((_BYTE *)this + 0x10) = 0x1F;
  TESForm_SetIsLinked((TESForm *)((char *)this + 0xC), 1);
  return this;
}
