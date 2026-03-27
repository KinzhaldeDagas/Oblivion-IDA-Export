TESForm *__thiscall TESActorBase_constr(TESForm *this)
{
  TESBoundAnimObject_constr(this);
  TESActorBaseData_constr((_DWORD *)this + 9);
  TESContainer_constr((TESContainer *)((char *)this + 0x44));
  TESSpellList_constr((_DWORD *)this + 0x15);
  TESAIForm_constr((_DWORD *)this + 0x1A);
  TESHealthForm_constr((_DWORD *)this + 0x20);
  TESAttributes_constr((_DWORD *)this + 0x22);
  TESAnimation_constr((_DWORD *)this + 0x25);
  *((_DWORD *)this + 0x28) = &TESFullName::`vftable';
  *((_DWORD *)this + 0x29) = 0;
  *((_WORD *)this + 0x54) = 0;
  *((_WORD *)this + 0x55) = 0;
  TESModel::TESModel((TESModel *)((char *)this + 0xAC));
  TESScriptableForm_constr((_DWORD *)this + 0x31);
  this->vtbl = (TESFormVtbl *)&TESActorBase::`vftable'{for `TESActorBase'};
  *((_DWORD *)this + 9) = &TESActorBase::`vftable'{for `TESActorBaseData'};
  *((_DWORD *)this + 0x11) = &TESActorBase::`vftable'{for `TESContainer'};
  *((_DWORD *)this + 0x15) = &TESActorBase::`vftable'{for `TESSpellList'};
  *((_DWORD *)this + 0x1A) = &TESActorBase::`vftable'{for `TESAIForm'};
  *((_DWORD *)this + 0x20) = &TESActorBase::`vftable'{for `TESHealthForm'};
  *((_DWORD *)this + 0x22) = &TESActorBase::`vftable'{for `TESAttributes'};
  *((_DWORD *)this + 0x25) = &TESActorBase::`vftable'{for `TESAnimation'};
  *((_DWORD *)this + 0x28) = &TESActorBase::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0x2B) = &TESActorBase::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x31) = &TESActorBase::`vftable'{for `TESScriptableForm'};
  AVCollection_Constr((_DWORD *)this + 0x34);
  return this;
}
