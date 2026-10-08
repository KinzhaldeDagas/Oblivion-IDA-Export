char __thiscall sub_72CDF0(unsigned int *this, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // edi
  bool v5; // zf
  _WORD *v6; // edx

  v2 = 0; /*0x72cdf7*/
  v3 = 0; /*0x72cdf9*/
  if ( !a2[2] ) /*0x72cdfb*/
    return 1; /*0x72ce41*/
  v4 = *(this + 2); /*0x72ce01*/
  while ( 1 ) /*0x72ce04*/
  {
    v5 = v2 == v4; /*0x72ce04*/
    if ( v2 < v4 ) /*0x72ce06*/
    {
      v6 = (_WORD *)(*this + 2 * v2); /*0x72ce11*/
      do /*0x72ce21*/
      {
        if ( *v6 >= *(_WORD *)(*a2 + 2 * v3) ) /*0x72ce17*/
          break; /*0x72ce17*/
        ++v2; /*0x72ce19*/
        ++v6; /*0x72ce1c*/
      }
      while ( v2 < v4 ); /*0x72ce21*/
      v5 = v2 == v4; /*0x72ce23*/
    }
    if ( v5 || *(_WORD *)(*this + 2 * v2) != *(_WORD *)(*a2 + 2 * v3) ) /*0x72ce34*/
      break; /*0x72ce34*/
    ++v3; /*0x72ce36*/
    ++v2; /*0x72ce39*/
    if ( v3 >= a2[2] ) /*0x72ce3f*/
      return 1; /*0x72ce3f*/
  }
  return 0; /*0x72ce41*/
}
