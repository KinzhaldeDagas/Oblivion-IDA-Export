signed int __thiscall sub_898990(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x3B); /*0x898991*/
  result = 0; /*0x898997*/
  if ( v2 <= 0 ) /*0x89899c*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x3A) - 4) = 0; /*0x8989b4*/
    return 0xFFFFFFFF; /*0x8989bb*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x3A); /*0x89899e*/
    while ( *v4 != a2 ) /*0x8989aa*/
    {
      ++result; /*0x8989ac*/
      ++v4; /*0x8989ad*/
      if ( result >= v2 ) /*0x8989b2*/
        goto LABEL_5; /*0x8989b2*/
    }
    *(_DWORD *)(*(this + 0x3A) + 4 * result) = 0; /*0x8989d1*/
  }
  return result; /*0x8989ba*/
}
