TESSkill *__thiscall TESSkill::TESSkill(TESSkill *this)
{
  _DWORD *v2; // edi
  int i; // ebx

  TESForm_constr((TESForm *)this); /*0x52ebaa*/
  TESDescription_constr((_DWORD *)this + 6); /*0x52ebbc*/
  TESTexture_constr((TESTexture *)((char *)this + 0x20)); /*0x52ebc6*/
  *((_DWORD *)this + 6) = &TESSkill::`vftable'{for `TESDescription'}; /*0x52ebcb*/
  *((_DWORD *)this + 8) = &TESSkill::`vftable'{for `TESTexture'}; /*0x52ebd1*/
  *(_DWORD *)this = &TESSkill::`vftable'{for `TESSkill'}; /*0x52ebdc*/
  v2 = (_DWORD *)((char *)this + 0x40); /*0x52ebe2*/
  for ( i = 3; i >= 0; --i ) /*0x52ebe5*/
  {
    TESDescription_constr(v2); /*0x52ebf2*/
    v2 += 2; /*0x52ebf7*/
  }
  *((_BYTE *)this + 4) = 0xB; /*0x52ec01*/
  TESSkill_ClearDataAndComponents(this); /*0x52ec05*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x52ec0c*/
  return this; /*0x52ec13*/
}
