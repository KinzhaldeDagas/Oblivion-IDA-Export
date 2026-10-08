void __thiscall TESObjectLIGH::~TESObjectLIGH(TESObjectLIGH *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30); /*0x4b143d*/
  v3 = (_DWORD *)((char *)this + 0x48); /*0x4b1440*/
  v4 = (_DWORD *)((char *)this + 0x60); /*0x4b1443*/
  *(_DWORD *)this = &TESObjectLIGH::`vftable'{for `TESObjectLIGH'}; /*0x4b1446*/
  *((_DWORD *)this + 9) = &TESObjectLIGH::`vftable'{for `TESFullName'}; /*0x4b144c*/
  *((_DWORD *)this + 0xC) = &TESObjectLIGH::`vftable'{for `TESModel'}; /*0x4b1453*/
  *((_DWORD *)this + 0x12) = &TESObjectLIGH::`vftable'{for `TESIcon'}; /*0x4b1459*/
  *((_DWORD *)this + 0x15) = &TESObjectLIGH::`vftable'{for `TESScriptableForm'}; /*0x4b145f*/
  *((_DWORD *)this + 0x18) = &TESObjectLIGH::`vftable'{for `TESWeightForm'}; /*0x4b1466*/
  *((_DWORD *)this + 0x1A) = &TESObjectLIGH::`vftable'{for `TESValueForm'}; /*0x4b146d*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b147c*/
  TESValueForm_destr((TESTexture *)((char *)this + 0x68)); /*0x4b1489*/
  TESWeightForm_destr(v4); /*0x4b1495*/
  TESTexture_destr(v3); /*0x4b14a1*/
  TESModel::~TESModel(v2); /*0x4b14ad*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x4b14b6*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b14c2*/
  *((_WORD *)this + 0x17) = 0; /*0x4b14c5*/
  *((_WORD *)this + 0x16) = 0; /*0x4b14c9*/
  TESObject_destr((TESForm *)this); /*0x4b14d5*/
}
