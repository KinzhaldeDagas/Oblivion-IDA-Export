unsigned int __thiscall sub_52BC50(int this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax

  if ( a2 > 8 ) /*0x52bc58*/
    return 0; /*0x52bcee*/
  if ( a2 == 1 )
  {
    LOWORD(v2) = *(_WORD *)(this + 0x100); /*0x52bc64*/
    if ( (_WORD)v2 == 0xFFFF ) /*0x52bc6f*/
      v2 = strlen(*(const char **)(this + 0xFC)); /*0x52bc77*/
    else
      v2 = (unsigned __int16)v2; /*0x52bc8d*/
    if ( !v2 ) /*0x52bc92*/
      return this + 0x110; /*0x52bc9c*/
  }
  else if ( a2 == 2 )
  {
    LOWORD(v4) = *(_WORD *)(this + 0x118); /*0x52bca4*/
    v4 = (_WORD)v4 == 0xFFFF ? strlen(*(const char **)(this + 0x114)) : (unsigned __int16)v4;
    if ( !v4 ) /*0x52bcd2*/
      return this + 0xF8; /*0x52bcdc*/
  }
  return this + 0x18 * a2 + 0xE0; /*0x52bc9b*/
}
