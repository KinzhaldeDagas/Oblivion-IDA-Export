int __thiscall sub_91C5B0(int *this, int a2)
{
  int v2; // edx
  int *v3; // ecx
  int result; // eax
  _DWORD **i; // esi

  v2 = *(this + 5); /*0x91c5b0*/
  v3 = this + 0xFFFFFFF8; /*0x91c5b3*/
  result = 0; /*0x91c5b6*/
  if ( v2 > 0 ) /*0x91c5ba*/
  {
    for ( i = (_DWORD **)v3[0xC]; **i != a2; ++i ) /*0x91c5bd*/
    {
      if ( ++result >= v2 ) /*0x91c5d2*/
        return result; /*0x91c5d2*/
    }
    if ( result >= 0 ) /*0x91c5dc*/
      return sub_91C470(v3, result); /*0x91c5e5*/
  }
  return result; /*0x91c5d7*/
}
