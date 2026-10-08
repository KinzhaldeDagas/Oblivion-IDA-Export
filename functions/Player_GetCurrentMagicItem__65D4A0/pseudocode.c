int __thiscall Player_GetCurrentMagicItem(_DWORD *this)
{
  int result; // eax
  int DefaultPlayerSpell; // eax

  result = *(this + 0x189); /*0x65d4a0*/
  if ( !result ) /*0x65d4a8*/
  {
    DefaultPlayerSpell = Magic_GetDefaultPlayerSpell(); /*0x65d4aa*/
    if ( DefaultPlayerSpell ) /*0x65d4b1*/
      return DefaultPlayerSpell + 0x18; /*0x65d4b3*/
    else
      return 0; /*0x65d4b7*/
  }
  return result; /*0x65d4b6*/
}
