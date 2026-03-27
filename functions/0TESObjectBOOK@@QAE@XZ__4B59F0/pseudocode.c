TESObjectBOOK *__thiscall TESObjectBOOK::TESObjectBOOK(TESObjectBOOK *this)
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
  TESDescription_constr((_DWORD *)this + 0x20);
  *((_DWORD *)this + 0x12) = &TESObjectBOOK::`vftable'{for `TESIcon'};
  *(_DWORD *)this = &TESObjectBOOK::`vftable'{for `TESObjectBOOK'};
  *((_DWORD *)this + 9) = &TESObjectBOOK::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectBOOK::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x15) = &TESObjectBOOK::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESObjectBOOK::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x1C) = &TESObjectBOOK::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1E) = &TESObjectBOOK::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x20) = &TESObjectBOOK::`vftable'{for `TESDescription'};
  *((_BYTE *)this + 4) = 0x15;
  *((_WORD *)this + 0x44) = 0;
  *((_BYTE *)this + 0x89) = 0xFF;
  j_TESForm_InitializeComponents((TESForm *)this);
  *((_DWORD *)this + 0x1B) = 0;
  return this;
}
