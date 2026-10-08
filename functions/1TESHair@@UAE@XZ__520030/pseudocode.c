void __thiscall TESHair::~TESHair(TESHair *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx

  v2 = (TESModel *)((char *)this + 0x24); /*0x52005c*/
  v3 = (_DWORD *)((char *)this + 0x3C); /*0x52005f*/
  *(_DWORD *)this = &TESHair::`vftable'{for `TESHair'}; /*0x520062*/
  *((_DWORD *)this + 6) = &TESHair::`vftable'{for `TESFullName'}; /*0x520068*/
  *((_DWORD *)this + 9) = &TESHair::`vftable'{for `TESModel'}; /*0x52006f*/
  *((_DWORD *)this + 0xF) = &TESHair::`vftable'{for `TESTexture'}; /*0x520075*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x520083*/
  TESTexture_destr(v3); /*0x52008f*/
  TESModel::~TESModel(v2); /*0x52009b*/
  FormHeapFree(*((_DWORD *)this + 7)); /*0x5200a4*/
  *((_DWORD *)this + 7) = 0; /*0x5200b0*/
  *((_WORD *)this + 0x11) = 0; /*0x5200b3*/
  *((_WORD *)this + 0x10) = 0; /*0x5200b7*/
  TESForm_destr((TESForm *)this); /*0x5200c3*/
}
