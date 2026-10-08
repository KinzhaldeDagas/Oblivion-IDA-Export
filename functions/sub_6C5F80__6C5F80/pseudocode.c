unsigned __int16 __thiscall sub_6C5F80(int this, int a2)
{
  unsigned __int16 v2; // dx
  unsigned __int16 result; // ax
  int v4; // ecx

  v2 = *(_WORD *)(this + 0x44); /*0x6c5f80*/
  result = 0; /*0x6c5f84*/
  if ( !v2 ) /*0x6c5f8a*/
    return word_A7A160; /*0x6c5fa1*/
  v4 = *(_DWORD *)(this + 0x40); /*0x6c5f8c*/
  while ( *(_DWORD *)(v4 + 4 * result) ) /*0x6c5f97*/
  {
    if ( ++result >= v2 ) /*0x6c5f9f*/
      return word_A7A160; /*0x6c5f9f*/
  }
  *(_DWORD *)(v4 + 4 * result) = a2; /*0x6c5fb2*/
  return result; /*0x6c5fa7*/
}
