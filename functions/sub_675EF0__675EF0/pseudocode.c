int __thiscall sub_675EF0(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // ecx
  int result; // eax
  _DWORD *v5; // edx

  if ( a2 > 6 ) /*0x675ef7*/
    return 0; /*0x675f30*/
  v3 = (_DWORD *)*(this + a2 + 0xA); /*0x675ef9*/
  result = 0; /*0x675efd*/
  if ( v3 ) /*0x675f01*/
  {
    if ( a3 ) /*0x675f0a*/
    {
      v5 = v3; /*0x675f15*/
      do /*0x675f2a*/
      {
        if ( !*v5 ) /*0x675f17*/
          break; /*0x675f1b*/
        if ( *(_DWORD *)(*v5 + 0xC) == a3 ) /*0x675f20*/
          ++result; /*0x675f22*/
        v5 = (_DWORD *)v5[1]; /*0x675f25*/
      }
      while ( v5 ); /*0x675f2a*/
    }
    else
    {
      return BSSimpleList_Count(v3); /*0x675f0c*/
    }
  }
  return result; /*0x675f12*/
}
