TESObjectCLOT *__thiscall TESObjectCLOT::TESObjectCLOT(TESObjectCLOT *this)
{
  TESBoundObject_constr((TESForm *)this);
  *((_DWORD *)this + 9) = &TESFullName::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x16) = 0;
  *((_WORD *)this + 0x17) = 0;
  TESScriptableForm_constr((_DWORD *)this + 0xC);
  TESEnchantableForm_constr((_DWORD *)this + 0xF);
  TESValueForm_constr((_DWORD *)this + 0x13);
  TESWeightForm_constr((float *)this + 0x15);
  TESBipedModelForm_constr((_DWORD *)this + 0x17);
  *(_DWORD *)this = &TESObjectCLOT::`vftable'{for `TESObjectCLOT'};
  *((_DWORD *)this + 9) = &TESObjectCLOT::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectCLOT::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0xF) = &TESObjectCLOT::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x13) = &TESObjectCLOT::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x15) = &TESObjectCLOT::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x17) = &TESObjectCLOT::`vftable'{for `TESBipedModelForm'};
  *((_BYTE *)this + 4) = 0x16;
  j_TESForm_InitializeComponents((TESForm *)this);
  *((_DWORD *)this + 0x12) = 3;
  return this;
}
