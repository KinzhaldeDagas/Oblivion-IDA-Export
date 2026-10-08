signed int __thiscall sub_8DE6C0(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx
  int v5; // edx

  v2 = *(this + 0x15); /*0x8de6c1*/
  result = 0; /*0x8de6c4*/
  if ( v2 <= 0 ) /*0x8de6c9*/
  {
LABEL_5:
    result = 0xFFFFFFFF; /*0x8de6de*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x14); /*0x8de6cb*/
    while ( *v4 != a2 ) /*0x8de6d4*/
    {
      ++result; /*0x8de6d6*/
      ++v4; /*0x8de6d7*/
      if ( result >= v2 ) /*0x8de6dc*/
        goto LABEL_5; /*0x8de6dc*/
    }
  }
  v5 = *(this + 0x15) - 1; /*0x8de6e5*/
  for ( *(this + 0x15) = v5; result < *(this + 0x15); ++result ) /*0x8de6ec*/
    *(_DWORD *)(*(this + 0x14) + 4 * result) = *(_DWORD *)(*(this + 0x14) + 4 * result + 4); /*0x8de6fa*/
  return result; /*0x8de704*/
}
