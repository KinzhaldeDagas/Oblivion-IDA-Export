void __thiscall TESObjectWEAP::~TESObjectWEAP(TESObjectWEAP *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30);
  v3 = (_DWORD *)((char *)this + 0x48);
  v4 = (TESTexture *)((char *)this + 0x70);
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
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESAttackDamageForm_destr((_DWORD *)this + 0x22);
  TESHealthForm_destr((_DWORD *)this + 0x20);
  TESWeightForm_destr((_DWORD *)this + 0x1E);
  TESValueForm_destr(v4);
  TESTexture_destr(v3);
  TESModel::~TESModel(v2);
  FormHeapFree(*((_DWORD *)this + 0xA));
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x16) = 0;
  TESObject_destr((TESForm *)this);
}
