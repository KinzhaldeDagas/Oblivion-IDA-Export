void __thiscall TESObjectAPPA::~TESObjectAPPA(TESObjectAPPA *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30); /*0x4b481d*/
  v3 = (_DWORD *)((char *)this + 0x48); /*0x4b4820*/
  v4 = (TESTexture *)((char *)this + 0x60); /*0x4b4823*/
  *(_DWORD *)this = &TESObjectAPPA::`vftable'{for `TESObjectAPPA'}; /*0x4b4826*/
  *((_DWORD *)this + 9) = &TESObjectAPPA::`vftable'{for `TESFullName'}; /*0x4b482c*/
  *((_DWORD *)this + 0xC) = &TESObjectAPPA::`vftable'{for `TESModel'}; /*0x4b4833*/
  *((_DWORD *)this + 0x12) = &TESObjectAPPA::`vftable'{for `TESIcon'}; /*0x4b4839*/
  *((_DWORD *)this + 0x15) = &TESObjectAPPA::`vftable'{for `TESScriptableForm'}; /*0x4b483f*/
  *((_DWORD *)this + 0x18) = &TESObjectAPPA::`vftable'{for `TESValueForm'}; /*0x4b4846*/
  *((_DWORD *)this + 0x1A) = &TESObjectAPPA::`vftable'{for `TESWeightForm'}; /*0x4b484d*/
  *((_DWORD *)this + 0x1C) = &TESObjectAPPA::`vftable'{for `TESQualityForm'}; /*0x4b4854*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b4863*/
  TESQualityForm_destr((_DWORD *)this + 0x1C); /*0x4b4870*/
  TESWeightForm_destr((_DWORD *)this + 0x1A); /*0x4b487d*/
  TESValueForm_destr(v4); /*0x4b4889*/
  TESTexture_destr(v3); /*0x4b4895*/
  TESModel::~TESModel(v2); /*0x4b48a1*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x4b48aa*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b48b6*/
  *((_WORD *)this + 0x17) = 0; /*0x4b48b9*/
  *((_WORD *)this + 0x16) = 0; /*0x4b48bd*/
  TESObject_destr((TESForm *)this); /*0x4b48c9*/
}
