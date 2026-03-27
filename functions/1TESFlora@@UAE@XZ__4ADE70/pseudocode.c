void __thiscall TESFlora::~TESFlora(TESFlora *this)
{
  TESObjectACTI *v1; // esi

  v1 = (TESObjectACTI *)((char *)this + 0xC);
  *(_DWORD *)this = &TESFlora::`vftable'{for `TESFlora'};
  *((_DWORD *)this + 3) = &TESFlora::`vftable'{for `TESObjectACTI'};
  *((_DWORD *)this + 0xC) = &TESFlora::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xF) = &TESFlora::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x15) = &TESFlora::`vftable'{for `TESScriptableForm'};
  j_TESForm_ClearComponentReferences((TESForm *)((char *)this + 0xC));
  TESObjectACTI::~TESObjectACTI(v1);
}
