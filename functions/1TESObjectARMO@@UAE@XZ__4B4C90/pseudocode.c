void __thiscall TESObjectARMO::~TESObjectARMO(TESObjectARMO *this)
{
  TESTexture *v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp

  v2 = (TESTexture *)((char *)this + 0x4C); /*0x4b4cbd*/
  v3 = (_DWORD *)((char *)this + 0x54); /*0x4b4cc0*/
  v4 = (_DWORD *)((char *)this + 0x5C); /*0x4b4cc3*/
  *(_DWORD *)this = &TESObjectARMO::`vftable'{for `TESObjectARMO'}; /*0x4b4cc6*/
  *((_DWORD *)this + 9) = &TESObjectARMO::`vftable'{for `TESFullName'}; /*0x4b4ccc*/
  *((_DWORD *)this + 0xC) = &TESObjectARMO::`vftable'{for `TESScriptableForm'}; /*0x4b4cd3*/
  *((_DWORD *)this + 0xF) = &TESObjectARMO::`vftable'{for `TESEnchantableForm'}; /*0x4b4cda*/
  *((_DWORD *)this + 0x13) = &TESObjectARMO::`vftable'{for `TESValueForm'}; /*0x4b4ce1*/
  *((_DWORD *)this + 0x15) = &TESObjectARMO::`vftable'{for `TESWeightForm'}; /*0x4b4ce7*/
  *((_DWORD *)this + 0x17) = &TESObjectARMO::`vftable'{for `TESHealthForm'}; /*0x4b4ced*/
  *((_DWORD *)this + 0x19) = &TESObjectARMO::`vftable'{for `TESBipedModelForm'}; /*0x4b4cf4*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b4d03*/
  TESBipedModelForm_destr((char *)this + 0x64); /*0x4b4d10*/
  TESHealthForm_destr(v4); /*0x4b4d1c*/
  TESWeightForm_destr(v3); /*0x4b4d28*/
  TESValueForm_destr(v2); /*0x4b4d34*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x4b4d3d*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b4d49*/
  *((_WORD *)this + 0x17) = 0; /*0x4b4d4c*/
  *((_WORD *)this + 0x16) = 0; /*0x4b4d50*/
  TESObject_destr((TESForm *)this); /*0x4b4d5c*/
}
