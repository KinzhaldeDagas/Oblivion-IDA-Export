TESObjectAPPA *__thiscall TESObjectAPPA::TESObjectAPPA(TESObjectAPPA *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4b493b*/
  *((_DWORD *)this + 9) = &TESFullName::`vftable'; /*0x4b4942*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b494d*/
  *((_WORD *)this + 0x16) = 0; /*0x4b4950*/
  *((_WORD *)this + 0x17) = 0; /*0x4b4954*/
  TESModel::TESModel((TESModel *)this + 2); /*0x4b4962*/
  TESTexture_constr((TESTexture *)this + 6); /*0x4b4971*/
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable'; /*0x4b4976*/
  TESScriptableForm_constr((_DWORD *)this + 0x15); /*0x4b4986*/
  TESValueForm_constr((_DWORD *)this + 0x18); /*0x4b498e*/
  TESWeightForm_constr((float *)this + 0x1A); /*0x4b499b*/
  TESQualityForm_constr((float *)this + 0x1C); /*0x4b49a8*/
  *(_DWORD *)this = &TESObjectAPPA::`vftable'{for `TESObjectAPPA'}; /*0x4b49ad*/
  *((_DWORD *)this + 9) = &TESObjectAPPA::`vftable'{for `TESFullName'}; /*0x4b49b3*/
  *((_DWORD *)this + 0xC) = &TESObjectAPPA::`vftable'{for `TESModel'}; /*0x4b49ba*/
  *((_DWORD *)this + 0x12) = &TESObjectAPPA::`vftable'{for `TESIcon'}; /*0x4b49c1*/
  *((_DWORD *)this + 0x15) = &TESObjectAPPA::`vftable'{for `TESScriptableForm'}; /*0x4b49c7*/
  *((_DWORD *)this + 0x18) = &TESObjectAPPA::`vftable'{for `TESValueForm'}; /*0x4b49cd*/
  *((_DWORD *)this + 0x1A) = &TESObjectAPPA::`vftable'{for `TESWeightForm'}; /*0x4b49d4*/
  *((_DWORD *)this + 0x1C) = &TESObjectAPPA::`vftable'{for `TESQualityForm'}; /*0x4b49db*/
  *((_BYTE *)this + 4) = 0x13; /*0x4b49e2*/
  *((_BYTE *)this + 0x78) = 0; /*0x4b49ed*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b49f1*/
  return this; /*0x4b49f8*/
}
