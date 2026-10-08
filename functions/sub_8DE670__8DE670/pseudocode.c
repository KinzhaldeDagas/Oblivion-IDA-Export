signed int __thiscall sub_8DE670(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx
  int v5; // edx

  v2 = *(this + 0x18); /*0x8de671*/
  result = 0; /*0x8de674*/
  if ( v2 <= 0 ) /*0x8de679*/
  {
LABEL_5:
    result = 0xFFFFFFFF; /*0x8de68e*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x17); /*0x8de67b*/
    while ( *v4 != a2 ) /*0x8de684*/
    {
      ++result; /*0x8de686*/
      ++v4; /*0x8de687*/
      if ( result >= v2 ) /*0x8de68c*/
        goto LABEL_5; /*0x8de68c*/
    }
  }
  v5 = *(this + 0x18) - 1; /*0x8de695*/
  for ( *(this + 0x18) = v5; result < *(this + 0x18); ++result ) /*0x8de69c*/
    *(_DWORD *)(*(this + 0x17) + 4 * result) = *(_DWORD *)(*(this + 0x17) + 4 * result + 4); /*0x8de6aa*/
  return result; /*0x8de6b4*/
}
