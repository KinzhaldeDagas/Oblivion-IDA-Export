TESObjectLIGH *__thiscall TESObjectLIGH::TESObjectLIGH(TESObjectLIGH *this)
{
  TESBoundAnimObject_constr((TESForm *)this); /*0x4b1fbb*/
  *((_DWORD *)this + 9) = &TESFullName::`vftable'; /*0x4b1fc2*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b1fcd*/
  *((_WORD *)this + 0x16) = 0; /*0x4b1fd0*/
  *((_WORD *)this + 0x17) = 0; /*0x4b1fd4*/
  TESModel::TESModel((TESModel *)this + 2); /*0x4b1fe2*/
  TESTexture_constr((TESTexture *)this + 6); /*0x4b1ff1*/
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable'; /*0x4b1ff6*/
  TESScriptableForm_constr((_DWORD *)this + 0x15); /*0x4b2006*/
  TESWeightForm_constr((float *)this + 0x18); /*0x4b200e*/
  TESValueForm_constr((_DWORD *)this + 0x1A); /*0x4b201b*/
  *(_DWORD *)this = &TESObjectLIGH::`vftable'{for `TESObjectLIGH'}; /*0x4b2024*/
  *((_DWORD *)this + 9) = &TESObjectLIGH::`vftable'{for `TESFullName'}; /*0x4b202a*/
  *((_DWORD *)this + 0xC) = &TESObjectLIGH::`vftable'{for `TESModel'}; /*0x4b2031*/
  *((_DWORD *)this + 0x12) = &TESObjectLIGH::`vftable'{for `TESIcon'}; /*0x4b2037*/
  *((_DWORD *)this + 0x15) = &TESObjectLIGH::`vftable'{for `TESScriptableForm'}; /*0x4b203d*/
  *((_DWORD *)this + 0x18) = &TESObjectLIGH::`vftable'{for `TESWeightForm'}; /*0x4b2044*/
  *((_DWORD *)this + 0x1A) = &TESObjectLIGH::`vftable'{for `TESValueForm'}; /*0x4b204b*/
  *((_BYTE *)this + 4) = 0x1A; /*0x4b2052*/
  *((_DWORD *)this + 0x23) = 0; /*0x4b2056*/
  *((_DWORD *)this + 0x1C) = 0; /*0x4b205c*/
  *((_DWORD *)this + 0x1D) = 0; /*0x4b205f*/
  *((_DWORD *)this + 0x1E) = 0; /*0x4b2062*/
  *((_DWORD *)this + 0x1F) = 0; /*0x4b2065*/
  *((_DWORD *)this + 0x20) = 0;                 // TESObjectLIGH constructor clears DATA field +0x80; record load later normalizes a zero loaded value to 1.0. /*0x4b2068*/
  *((float *)this + 0x22) = 1.0; /*0x4b206e*/
  *((float *)this + 0x21) = flt_A430CC;         // TESObjectLIGH constructor initializes DATA field +0x84 to 90.0; attached-reference shadow registration copies this field as projector FOV. /*0x4b207c*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b2087*/
  return this; /*0x4b208e*/
}
