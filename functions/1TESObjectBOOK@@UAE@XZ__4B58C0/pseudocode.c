void __thiscall TESObjectBOOK::~TESObjectBOOK(TESObjectBOOK *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30);
  v3 = (_DWORD *)((char *)this + 0x48);
  v4 = (TESTexture *)((char *)this + 0x70);
  *(_DWORD *)this = &TESObjectBOOK::`vftable'{for `TESObjectBOOK'};
  *((_DWORD *)this + 9) = &TESObjectBOOK::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectBOOK::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESObjectBOOK::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESObjectBOOK::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESObjectBOOK::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x1C) = &TESObjectBOOK::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1E) = &TESObjectBOOK::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x20) = &TESObjectBOOK::`vftable'{for `TESDescription'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
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
