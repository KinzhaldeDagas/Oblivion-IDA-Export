int __thiscall sub_91C720(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx
  int v5; // edx

  v2 = *(this + 3); /*0x91c721*/
  result = 0; /*0x91c724*/
  if ( v2 > 0 ) /*0x91c728*/
  {
    for ( i = (_DWORD *)*(this + 2); *i != a2; ++i ) /*0x91c72a*/
    {
      if ( ++result >= v2 ) /*0x91c73c*/
        return result; /*0x91c73c*/
    }
    if ( result >= 0 ) /*0x91c745*/
    {
      v5 = *(this + 3) - 1; /*0x91c74a*/
      *(this + 3) = v5; /*0x91c74b*/
      *(_DWORD *)(*(this + 2) + 4 * result) = *(_DWORD *)(*(this + 2) + 4 * v5); /*0x91c754*/
    }
  }
  return result; /*0x91c73f*/
}
