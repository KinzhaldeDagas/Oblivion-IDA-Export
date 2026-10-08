void __thiscall TESFlora::~TESFlora(TESFlora *this)
{
  TESObjectACTI *v1; // esi

  v1 = (TESObjectACTI *)((char *)this + 0xC); /*0x4ade98*/
  *(_DWORD *)this = &TESFlora::`vftable'{for `TESFlora'}; /*0x4ade9b*/
  *((_DWORD *)this + 3) = &TESFlora::`vftable'{for `TESObjectACTI'}; /*0x4adea1*/
  *((_DWORD *)this + 0xC) = &TESFlora::`vftable'{for `TESFullName'}; /*0x4adea7*/
  *((_DWORD *)this + 0xF) = &TESFlora::`vftable'{for `TESModel'}; /*0x4adeae*/
  *((_DWORD *)this + 0x15) = &TESFlora::`vftable'{for `TESScriptableForm'}; /*0x4adeb5*/
  j_TESForm_ClearComponentReferences((TESForm *)((char *)this + 0xC)); /*0x4adec6*/
  TESObjectACTI::~TESObjectACTI(v1); /*0x4aded5*/
}
