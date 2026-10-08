TESForm *__thiscall sub_51F820(TESForm *this)
{
  TESForm_constr(this); /*0x51f84a*/
  *((_DWORD *)this + 6) = &TESFullName::`vftable'; /*0x51f851*/
  *((_DWORD *)this + 7) = 0; /*0x51f85c*/
  *((_DWORD *)this + 8) = 0; /*0x51f85f*/
  sub_46E5E0((_DWORD *)this + 9); /*0x51f871*/
  this->vtbl = (TESFormVtbl *)&TESFaction::`vftable'{for `TESFaction'}; /*0x51f878*/
  *((_DWORD *)this + 6) = &TESFaction::`vftable'{for `TESFullName'}; /*0x51f87e*/
  *((_DWORD *)this + 9) = &TESFaction::`vftable'{for `TESReactionForm'}; /*0x51f885*/
  *((_DWORD *)this + 0xF) = 0; /*0x51f88b*/
  *((_DWORD *)this + 0x10) = 0; /*0x51f88e*/
  *((_BYTE *)this + 0x34) = 0; /*0x51f891*/
  *((float *)this + 0xE) = 1.0; /*0x51f894*/
  j_TESForm_InitializeComponents(this); /*0x51f89e*/
  this->member.type = kFormType_Faction; /*0x51f8a3*/
  return this; /*0x51f8a9*/
}
