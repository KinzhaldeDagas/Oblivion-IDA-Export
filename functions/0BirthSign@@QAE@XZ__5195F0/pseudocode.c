BirthSign *__thiscall BirthSign::BirthSign(BirthSign *this)
{
  TESForm_constr((TESForm *)this); /*0x51961b*/
  *((_DWORD *)this + 6) = &TESFullName::`vftable'; /*0x519622*/
  *((_DWORD *)this + 7) = 0; /*0x51962d*/
  *((_WORD *)this + 0x10) = 0; /*0x519630*/
  *((_WORD *)this + 0x11) = 0; /*0x519634*/
  TESTexture_constr((TESTexture *)this + 3); /*0x519642*/
  TESDescription_constr((_DWORD *)this + 0xC); /*0x519651*/
  TESSpellList_constr((_DWORD *)this + 0xE); /*0x51965b*/
  *(_DWORD *)this = &BirthSign::`vftable'{for `BirthSign'}; /*0x519669*/
  *((_DWORD *)this + 6) = &BirthSign::`vftable'{for `TESFullName'}; /*0x51966f*/
  *((_DWORD *)this + 9) = &BirthSign::`vftable'{for `TESTexture'}; /*0x519676*/
  *((_DWORD *)this + 0xC) = &BirthSign::`vftable'{for `TESDescription'}; /*0x51967c*/
  *((_DWORD *)this + 0xE) = &BirthSign::`vftable'{for `TESSpellList'}; /*0x519682*/
  *((_BYTE *)this + 4) = 0x11; /*0x519689*/
  TESForm_SetIsLinked((TESForm *)this, 1); /*0x51968d*/
  return this; /*0x519694*/
}
