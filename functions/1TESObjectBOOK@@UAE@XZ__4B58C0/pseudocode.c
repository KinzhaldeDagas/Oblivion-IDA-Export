void __thiscall TESObjectBOOK::~TESObjectBOOK(TESObjectBOOK *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30); /*0x4b58ed*/
  v3 = (_DWORD *)((char *)this + 0x48); /*0x4b58f0*/
  v4 = (TESTexture *)((char *)this + 0x70); /*0x4b58f3*/
  *(_DWORD *)this = &TESObjectBOOK::`vftable'{for `TESObjectBOOK'}; /*0x4b58f6*/
  *((_DWORD *)this + 9) = &TESObjectBOOK::`vftable'{for `TESFullName'}; /*0x4b58fc*/
  *((_DWORD *)this + 0xC) = &TESObjectBOOK::`vftable'{for `TESModel'}; /*0x4b5903*/
  *((_DWORD *)this + 0x12) = &TESObjectBOOK::`vftable'{for `TESIcon'}; /*0x4b5909*/
  *((_DWORD *)this + 0x15) = &TESObjectBOOK::`vftable'{for `TESScriptableForm'}; /*0x4b590f*/
  *((_DWORD *)this + 0x18) = &TESObjectBOOK::`vftable'{for `TESEnchantableForm'}; /*0x4b5916*/
  *((_DWORD *)this + 0x1C) = &TESObjectBOOK::`vftable'{for `TESValueForm'}; /*0x4b591d*/
  *((_DWORD *)this + 0x1E) = &TESObjectBOOK::`vftable'{for `TESWeightForm'}; /*0x4b5924*/
  *((_DWORD *)this + 0x20) = &TESObjectBOOK::`vftable'{for `TESDescription'}; /*0x4b592b*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b593d*/
  TESWeightForm_destr((_DWORD *)this + 0x1E); /*0x4b594a*/
  TESValueForm_destr(v4); /*0x4b5956*/
  TESTexture_destr(v3); /*0x4b5962*/
  TESModel::~TESModel(v2); /*0x4b596e*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x4b5977*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b5983*/
  *((_WORD *)this + 0x17) = 0; /*0x4b5986*/
  *((_WORD *)this + 0x16) = 0; /*0x4b598a*/
  TESObject_destr((TESForm *)this); /*0x4b5996*/
}
