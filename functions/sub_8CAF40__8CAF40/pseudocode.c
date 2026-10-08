int __thiscall sub_8CAF40(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx
  int v5; // edx

  v2 = *(this + 0x1B); /*0x8caf41*/
  result = 0; /*0x8caf44*/
  if ( v2 > 0 ) /*0x8caf48*/
  {
    for ( i = (_DWORD *)*(this + 0x1A); *i != a2; ++i ) /*0x8caf4a*/
    {
      if ( ++result >= v2 ) /*0x8caf5c*/
        return result; /*0x8caf5c*/
    }
    if ( result >= 0 ) /*0x8caf65*/
    {
      v5 = *(this + 0x1B) - 1; /*0x8caf6a*/
      *(this + 0x1B) = v5; /*0x8caf6b*/
      *(_DWORD *)(*(this + 0x1A) + 4 * result) = *(_DWORD *)(*(this + 0x1A) + 4 * v5); /*0x8caf74*/
    }
  }
  return result; /*0x8caf5f*/
}
