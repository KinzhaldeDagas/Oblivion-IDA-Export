TESAmmo *__thiscall TESAmmo::TESAmmo(TESAmmo *this)
{
  TESBoundObject_constr((TESForm *)this);
  *((_DWORD *)this + 9) = &TESFullName::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x16) = 0;
  *((_WORD *)this + 0x17) = 0;
  TESModel::TESModel((TESModel *)this + 2);
  TESTexture_constr((TESTexture *)this + 6);
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable';
  TESEnchantableForm_constr((_DWORD *)this + 0x15);
  TESValueForm_constr((_DWORD *)this + 0x19);
  TESWeightForm_constr((float *)this + 0x1B);
  TESAttackDamageForm_constr((_WORD *)this + 0x3A);
  *(_DWORD *)this = &TESAmmo::`vftable'{for `TESAmmo'};
  *((_DWORD *)this + 9) = &TESAmmo::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESAmmo::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESAmmo::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESAmmo::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x19) = &TESAmmo::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1B) = &TESAmmo::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x1D) = &TESAmmo::`vftable'{for `TESAttackDamageForm'};
  *((_BYTE *)this + 4) = 0x22;
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x20) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  *((_DWORD *)this + 0x18) = 2;
  return this;
}
