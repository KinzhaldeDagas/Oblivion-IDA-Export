TESObjectARMO *__thiscall TESObjectARMO::TESObjectARMO(TESObjectARMO *this)
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
  TESHealthForm_constr((_DWORD *)this + 0x17);
  TESBipedModelForm_constr((_DWORD *)this + 0x19);
  *(_DWORD *)this = &TESObjectARMO::`vftable'{for `TESObjectARMO'};
  *((_DWORD *)this + 9) = &TESObjectARMO::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectARMO::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0xF) = &TESObjectARMO::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x13) = &TESObjectARMO::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x15) = &TESObjectARMO::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x17) = &TESObjectARMO::`vftable'{for `TESHealthForm'};
  *((_DWORD *)this + 0x19) = &TESObjectARMO::`vftable'{for `TESBipedModelForm'};
  *((_BYTE *)this + 4) = 0x14;
  *((_WORD *)this + 0x72) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  *((_DWORD *)this + 0x12) = 3;
  return this;
}
