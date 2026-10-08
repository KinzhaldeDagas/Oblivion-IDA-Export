unsigned int __thiscall sub_52BD00(int this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax

  if ( a2 > 8 ) /*0x52bd08*/
    return 0; /*0x52bd9e*/
  if ( a2 == 1 )
  {
    LOWORD(v2) = *(_WORD *)(this + 0x1CC); /*0x52bd14*/
    if ( (_WORD)v2 == 0xFFFF ) /*0x52bd1f*/
      v2 = strlen(*(const char **)(this + 0x1C8)); /*0x52bd27*/
    else
      v2 = (unsigned __int16)v2; /*0x52bd3d*/
    if ( !v2 ) /*0x52bd42*/
      return this + 0x1D0; /*0x52bd4c*/
  }
  else if ( a2 == 2 )
  {
    LOWORD(v4) = *(_WORD *)(this + 0x1D8); /*0x52bd54*/
    v4 = (_WORD)v4 == 0xFFFF ? strlen(*(const char **)(this + 0x1D4)) : (unsigned __int16)v4;
    if ( !v4 ) /*0x52bd82*/
      return this + 0x1C4; /*0x52bd8c*/
  }
  return this + 0xC * a2 + 0x1B8; /*0x52bd4b*/
}
