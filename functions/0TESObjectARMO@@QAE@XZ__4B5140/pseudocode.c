TESObjectARMO *__thiscall TESObjectARMO::TESObjectARMO(TESObjectARMO *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4b516b*/
  *((_DWORD *)this + 9) = &TESFullName::`vftable'; /*0x4b5172*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b517d*/
  *((_WORD *)this + 0x16) = 0; /*0x4b5180*/
  *((_WORD *)this + 0x17) = 0; /*0x4b5184*/
  TESScriptableForm_constr((_DWORD *)this + 0xC); /*0x4b5192*/
  TESEnchantableForm_constr((_DWORD *)this + 0xF); /*0x4b519c*/
  TESValueForm_constr((_DWORD *)this + 0x13); /*0x4b51a6*/
  TESWeightForm_constr((float *)this + 0x15); /*0x4b51b3*/
  TESHealthForm_constr((_DWORD *)this + 0x17); /*0x4b51c0*/
  TESBipedModelForm_constr((char *)this + 0x64); /*0x4b51cd*/
  *(_DWORD *)this = &TESObjectARMO::`vftable'{for `TESObjectARMO'}; /*0x4b51d2*/
  *((_DWORD *)this + 9) = &TESObjectARMO::`vftable'{for `TESFullName'}; /*0x4b51d8*/
  *((_DWORD *)this + 0xC) = &TESObjectARMO::`vftable'{for `TESScriptableForm'}; /*0x4b51df*/
  *((_DWORD *)this + 0xF) = &TESObjectARMO::`vftable'{for `TESEnchantableForm'}; /*0x4b51e5*/
  *((_DWORD *)this + 0x13) = &TESObjectARMO::`vftable'{for `TESValueForm'}; /*0x4b51ec*/
  *((_DWORD *)this + 0x15) = &TESObjectARMO::`vftable'{for `TESWeightForm'}; /*0x4b51f2*/
  *((_DWORD *)this + 0x17) = &TESObjectARMO::`vftable'{for `TESHealthForm'}; /*0x4b51f9*/
  *((_DWORD *)this + 0x19) = &TESObjectARMO::`vftable'{for `TESBipedModelForm'}; /*0x4b5200*/
  *((_BYTE *)this + 4) = 0x14; /*0x4b5207*/
  *((_WORD *)this + 0x72) = 0; /*0x4b5212*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b521b*/
  *((_DWORD *)this + 0x12) = 3; /*0x4b5220*/
  return this; /*0x4b5229*/
}
