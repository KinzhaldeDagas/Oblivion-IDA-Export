void __thiscall TESSkill::~TESSkill(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x20); /*0x52e68b*/
  this->vtbl = (TESFormVtbl *)&TESSkill::`vftable'{for `TESSkill'}; /*0x52e68e*/
  *((_DWORD *)this + 6) = &TESSkill::`vftable'{for `TESDescription'}; /*0x52e694*/
  *((_DWORD *)this + 8) = &TESSkill::`vftable'{for `TESTexture'}; /*0x52e69b*/
  j_TESForm_ClearComponentReferences(this); /*0x52e6a9*/
  TESTexture_destr(v2); /*0x52e6b5*/
  TESForm_destr(this); /*0x52e6c4*/
}
