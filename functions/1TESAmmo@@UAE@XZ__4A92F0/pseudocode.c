void __thiscall TESAmmo::~TESAmmo(TESAmmo *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30);
  v3 = (_DWORD *)((char *)this + 0x48);
  v4 = (TESTexture *)((char *)this + 0x64);
  *(_DWORD *)this = &TESAmmo::`vftable'{for `TESAmmo'};
  *((_DWORD *)this + 9) = &TESAmmo::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESAmmo::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESAmmo::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESAmmo::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x19) = &TESAmmo::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1B) = &TESAmmo::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x1D) = &TESAmmo::`vftable'{for `TESAttackDamageForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESAttackDamageForm_destr((_DWORD *)this + 0x1D);
  TESWeightForm_destr((_DWORD *)this + 0x1B);
  TESValueForm_destr(v4);
  TESTexture_destr(v3);
  TESModel::~TESModel(v2);
  FormHeapFree(*((_DWORD *)this + 0xA));
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x16) = 0;
  TESObject_destr((TESForm *)this);
}
