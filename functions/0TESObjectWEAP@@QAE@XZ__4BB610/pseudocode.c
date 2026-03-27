TESObjectWEAP *__thiscall TESObjectWEAP::TESObjectWEAP(TESObjectWEAP *this)
{
  TESBoundObject_constr((TESForm *)this);
  *((_DWORD *)this + 9) = &TESFullName::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x16) = 0;
  *((_WORD *)this + 0x17) = 0;
  TESModel::TESModel((TESModel *)this + 2);
  TESTexture_constr((TESTexture *)this + 6);
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable';
  TESScriptableForm_constr((_DWORD *)this + 0x15);
  TESEnchantableForm_constr((_DWORD *)this + 0x18);
  TESValueForm_constr((_DWORD *)this + 0x1C);
  TESWeightForm_constr((float *)this + 0x1E);
  TESHealthForm_constr((_DWORD *)this + 0x20);
  TESAttackDamageForm_constr((_WORD *)this + 0x44);
  *(_DWORD *)this = &TESObjectWEAP::`vftable'{for `TESObjectWEAP'};
  *((_DWORD *)this + 9) = &TESObjectWEAP::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectWEAP::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESObjectWEAP::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESObjectWEAP::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESObjectWEAP::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x1C) = &TESObjectWEAP::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1E) = &TESObjectWEAP::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x20) = &TESObjectWEAP::`vftable'{for `TESHealthForm'};
  *((_DWORD *)this + 0x22) = &TESObjectWEAP::`vftable'{for `TESAttackDamageForm'};
  *((_BYTE *)this + 4) = 0x21;
  *((_DWORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x26) = 0;
  *((_DWORD *)this + 0x27) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  *((_DWORD *)this + 0x1B) = 2;
  return this;
}
