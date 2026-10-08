void __thiscall TESObjectCLOT::~TESObjectCLOT(TESObjectCLOT *this)
{
  TESTexture *v2; // edi
  _DWORD *v3; // ebx
  char *v4; // ebp

  v2 = (TESTexture *)((char *)this + 0x4C); /*0x4b5cdd*/
  v3 = (_DWORD *)((char *)this + 0x54); /*0x4b5ce0*/
  v4 = (char *)this + 0x5C; /*0x4b5ce3*/
  *(_DWORD *)this = &TESObjectCLOT::`vftable'{for `TESObjectCLOT'}; /*0x4b5ce6*/
  *((_DWORD *)this + 9) = &TESObjectCLOT::`vftable'{for `TESFullName'}; /*0x4b5cec*/
  *((_DWORD *)this + 0xC) = &TESObjectCLOT::`vftable'{for `TESScriptableForm'}; /*0x4b5cf3*/
  *((_DWORD *)this + 0xF) = &TESObjectCLOT::`vftable'{for `TESEnchantableForm'}; /*0x4b5cfa*/
  *((_DWORD *)this + 0x13) = &TESObjectCLOT::`vftable'{for `TESValueForm'}; /*0x4b5d01*/
  *((_DWORD *)this + 0x15) = &TESObjectCLOT::`vftable'{for `TESWeightForm'}; /*0x4b5d07*/
  *((_DWORD *)this + 0x17) = &TESObjectCLOT::`vftable'{for `TESBipedModelForm'}; /*0x4b5d0d*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b5d1c*/
  TESBipedModelForm_destr(v4); /*0x4b5d28*/
  TESWeightForm_destr(v3); /*0x4b5d34*/
  TESValueForm_destr(v2); /*0x4b5d40*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x4b5d49*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b5d55*/
  *((_WORD *)this + 0x17) = 0; /*0x4b5d58*/
  *((_WORD *)this + 0x16) = 0; /*0x4b5d5c*/
  TESObject_destr((TESForm *)this); /*0x4b5d68*/
}
