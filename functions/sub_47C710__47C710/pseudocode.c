unsigned __int16 __thiscall sub_47C710(int this, int a2)
{
  unsigned __int16 v2; // dx
  unsigned __int16 result; // ax
  int v4; // ecx

  v2 = *(_WORD *)(this + 0x44); /*0x47c710*/
  result = 0; /*0x47c715*/
  if ( !v2 ) /*0x47c71b*/
    return word_A7A160; /*0x47c734*/
  v4 = *(_DWORD *)(this + 0x40); /*0x47c71d*/
  while ( *(_DWORD *)(v4 + 4 * result) != a2 ) /*0x47c72a*/
  {
    if ( ++result >= v2 ) /*0x47c732*/
      return word_A7A160; /*0x47c732*/
  }
  return result; /*0x47c73a*/
}
