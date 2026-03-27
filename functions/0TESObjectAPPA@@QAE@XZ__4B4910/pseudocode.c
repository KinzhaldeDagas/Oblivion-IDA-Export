TESObjectAPPA *__thiscall TESObjectAPPA::TESObjectAPPA(TESObjectAPPA *this)
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
  TESValueForm_constr((_DWORD *)this + 0x18);
  TESWeightForm_constr((float *)this + 0x1A);
  TESQualityForm_constr((float *)this + 0x1C);
  *(_DWORD *)this = &TESObjectAPPA::`vftable'{for `TESObjectAPPA'};
  *((_DWORD *)this + 9) = &TESObjectAPPA::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectAPPA::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESObjectAPPA::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESObjectAPPA::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESObjectAPPA::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1A) = &TESObjectAPPA::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x1C) = &TESObjectAPPA::`vftable'{for `TESQualityForm'};
  *((_BYTE *)this + 4) = 0x13;
  *((_BYTE *)this + 0x78) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
