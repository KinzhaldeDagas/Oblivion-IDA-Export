int __thiscall sub_91B2A0(int *this, int a2)
{
  int v2; // edx
  int *v3; // ecx
  int result; // eax
  _DWORD **i; // esi

  v2 = *(this + 5); /*0x91b2a0*/
  v3 = this + 0xFFFFFFF8; /*0x91b2a3*/
  result = 0; /*0x91b2a6*/
  if ( v2 > 0 ) /*0x91b2aa*/
  {
    for ( i = (_DWORD **)v3[0xC]; **i != a2; ++i ) /*0x91b2ad*/
    {
      if ( ++result >= v2 ) /*0x91b2c2*/
        return result; /*0x91b2c2*/
    }
    if ( result >= 0 ) /*0x91b2cc*/
      return sub_91B160(v3, result); /*0x91b2d5*/
  }
  return result; /*0x91b2c7*/
}
