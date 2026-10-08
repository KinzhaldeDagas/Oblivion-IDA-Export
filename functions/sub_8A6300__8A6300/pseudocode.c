signed int __thiscall sub_8A6300(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x2C); /*0x8a6301*/
  result = 0; /*0x8a6307*/
  if ( v2 <= 0 ) /*0x8a630c*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x2B) - 4) = 0; /*0x8a6324*/
    return 0xFFFFFFFF; /*0x8a632b*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x2B); /*0x8a630e*/
    while ( *v4 != a2 ) /*0x8a631a*/
    {
      ++result; /*0x8a631c*/
      ++v4; /*0x8a631d*/
      if ( result >= v2 ) /*0x8a6322*/
        goto LABEL_5; /*0x8a6322*/
    }
    *(_DWORD *)(*(this + 0x2B) + 4 * result) = 0; /*0x8a6341*/
  }
  return result; /*0x8a632a*/
}
