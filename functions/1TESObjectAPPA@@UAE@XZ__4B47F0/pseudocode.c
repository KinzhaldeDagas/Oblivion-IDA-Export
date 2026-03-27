void __thiscall TESObjectAPPA::~TESObjectAPPA(TESObjectAPPA *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30);
  v3 = (_DWORD *)((char *)this + 0x48);
  v4 = (TESTexture *)((char *)this + 0x60);
  *(_DWORD *)this = &TESObjectAPPA::`vftable'{for `TESObjectAPPA'};
  *((_DWORD *)this + 9) = &TESObjectAPPA::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectAPPA::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESObjectAPPA::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESObjectAPPA::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESObjectAPPA::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1A) = &TESObjectAPPA::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x1C) = &TESObjectAPPA::`vftable'{for `TESQualityForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESQualityForm_destr((_DWORD *)this + 0x1C);
  TESWeightForm_destr((_DWORD *)this + 0x1A);
  TESValueForm_destr(v4);
  TESTexture_destr(v3);
  TESModel::~TESModel(v2);
  FormHeapFree(*((_DWORD *)this + 0xA));
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x16) = 0;
  TESObject_destr((TESForm *)this);
}
