int __thiscall Player_GetCurrentMagicItem(_DWORD *this)
{
  int result; // eax
  int DefaultPlayerSpell; // eax

  result = *(this + 0x189);
  if ( !result )
  {
    DefaultPlayerSpell = Magic_GetDefaultPlayerSpell();
    if ( DefaultPlayerSpell )
      return DefaultPlayerSpell + 0x18;
    else
      return 0;
  }
  return result;
}
