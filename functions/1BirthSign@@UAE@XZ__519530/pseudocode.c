void __thiscall BirthSign::~BirthSign(BirthSign *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebx

  v2 = (_DWORD *)((char *)this + 0x24); /*0x51955c*/
  v3 = (_DWORD *)((char *)this + 0x38); /*0x51955f*/
  *(_DWORD *)this = &BirthSign::`vftable'{for `BirthSign'}; /*0x519562*/
  *((_DWORD *)this + 6) = &BirthSign::`vftable'{for `TESFullName'}; /*0x519568*/
  *((_DWORD *)this + 9) = &BirthSign::`vftable'{for `TESTexture'}; /*0x51956f*/
  *((_DWORD *)this + 0xC) = &BirthSign::`vftable'{for `TESDescription'}; /*0x519575*/
  *((_DWORD *)this + 0xE) = &BirthSign::`vftable'{for `TESSpellList'}; /*0x51957c*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x51958a*/
  TESSpellList_destr_(v3); /*0x519596*/
  TESTexture_destr(v2); /*0x5195a2*/
  FormHeapFree(*((_DWORD *)this + 7)); /*0x5195ab*/
  *((_DWORD *)this + 7) = 0; /*0x5195b7*/
  *((_WORD *)this + 0x11) = 0; /*0x5195ba*/
  *((_WORD *)this + 0x10) = 0; /*0x5195be*/
  TESForm_destr((TESForm *)this); /*0x5195ca*/
}
