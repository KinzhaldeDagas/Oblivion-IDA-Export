TESFlora *__thiscall TESFlora::TESFlora(TESFlora *this)
{
  sub_46E0B0(this); /*0x4adfe9*/
  TESObjectACTI::TESObjectACTI((TESObjectACTI *)((char *)this + 0xC)); /*0x4adff3*/
  *(_DWORD *)this = &TESFlora::`vftable'{for `TESFlora'}; /*0x4ae004*/
  *((_DWORD *)this + 3) = &TESFlora::`vftable'{for `TESObjectACTI'}; /*0x4ae00a*/
  *((_DWORD *)this + 0xC) = &TESFlora::`vftable'{for `TESFullName'}; /*0x4ae010*/
  *((_DWORD *)this + 0xF) = &TESFlora::`vftable'{for `TESModel'}; /*0x4ae017*/
  *((_DWORD *)this + 0x15) = &TESFlora::`vftable'{for `TESScriptableForm'}; /*0x4ae01e*/
  *((_BYTE *)this + 0x10) = 0x1F; /*0x4ae025*/
  TESForm_SetIsLinked((TESForm *)((char *)this + 0xC), 1); /*0x4ae029*/
  return this; /*0x4ae030*/
}
