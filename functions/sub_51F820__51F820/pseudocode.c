TESForm *__thiscall sub_51F820(TESForm *this)
{
  TESForm_constr(this);
  *((_DWORD *)this + 6) = &TESFullName::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  sub_46E5E0((_DWORD *)this + 9);
  this->vtbl = (TESFormVtbl *)&TESFaction::`vftable'{for `TESFaction'};
  *((_DWORD *)this + 6) = &TESFaction::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 9) = &TESFaction::`vftable'{for `TESReactionForm'};
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_BYTE *)this + 0x34) = 0;
  *((float *)this + 0xE) = 1.0;
  j_TESForm_InitializeComponents(this);
  this->member.type = kFormType_Faction;
  return this;
}
