TESForm *__thiscall TESActorBase_constr(TESForm *this)
{
  TESBoundAnimObject_constr(this); /*0x51e58b*/
  TESActorBaseData_constr((TESActorBaseDataVtbl **)this + 9); /*0x51e59d*/
  TESContainer_constr((TESContainer *)((char *)this + 0x44)); /*0x51e5ac*/
  TESSpellList_constr((_DWORD *)this + 0x15); /*0x51e5bb*/
  TESAIForm_constr((_DWORD *)this + 0x1A); /*0x51e5c8*/
  TESHealthForm_constr((_DWORD *)this + 0x20); /*0x51e5d8*/
  TESAttributes_constr((_DWORD *)this + 0x22); /*0x51e5e8*/
  TESAnimation_constr((_DWORD *)this + 0x25); /*0x51e5f8*/
  *((_DWORD *)this + 0x28) = &TESFullName::`vftable'; /*0x51e5ff*/
  *((_DWORD *)this + 0x29) = 0; /*0x51e609*/
  *((_WORD *)this + 0x54) = 0; /*0x51e60f*/
  *((_WORD *)this + 0x55) = 0; /*0x51e616*/
  TESModel::TESModel((TESModel *)((char *)this + 0xAC)); /*0x51e628*/
  TESScriptableForm_constr((_DWORD *)this + 0x31); /*0x51e638*/
  this->vtbl = (TESFormVtbl *)&TESActorBase::`vftable'{for `TESActorBase'}; /*0x51e643*/
  *((_DWORD *)this + 9) = &TESActorBase::`vftable'{for `TESActorBaseData'}; /*0x51e649*/
  *((_DWORD *)this + 0x11) = &TESActorBase::`vftable'{for `TESContainer'}; /*0x51e64f*/
  *((_DWORD *)this + 0x15) = &TESActorBase::`vftable'{for `TESSpellList'}; /*0x51e655*/
  *((_DWORD *)this + 0x1A) = &TESActorBase::`vftable'{for `TESAIForm'}; /*0x51e65c*/
  *((_DWORD *)this + 0x20) = &TESActorBase::`vftable'{for `TESHealthForm'}; /*0x51e663*/
  *((_DWORD *)this + 0x22) = &TESActorBase::`vftable'{for `TESAttributes'}; /*0x51e66d*/
  *((_DWORD *)this + 0x25) = &TESActorBase::`vftable'{for `TESAnimation'}; /*0x51e677*/
  *((_DWORD *)this + 0x28) = &TESActorBase::`vftable'{for `TESFullName'}; /*0x51e681*/
  *((_DWORD *)this + 0x2B) = &TESActorBase::`vftable'{for `TESModel'}; /*0x51e68b*/
  *((_DWORD *)this + 0x31) = &TESActorBase::`vftable'{for `TESScriptableForm'}; /*0x51e695*/
  AVCollection_Constr((AVCollection *)((char *)this + 0xD0)); /*0x51e69f*/
  return this; /*0x51e6a6*/
}
