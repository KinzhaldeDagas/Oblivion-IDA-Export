int __thiscall sub_91BA00(int *this, int a2)
{
  int v2; // edx
  int *v3; // ecx
  int result; // eax
  _DWORD **i; // esi

  v2 = *(this + 5); /*0x91ba00*/
  v3 = this + 0xFFFFFFF8; /*0x91ba03*/
  result = 0; /*0x91ba06*/
  if ( v2 > 0 ) /*0x91ba0a*/
  {
    for ( i = (_DWORD **)v3[0xC]; **i != a2; ++i ) /*0x91ba0d*/
    {
      if ( ++result >= v2 ) /*0x91ba22*/
        return result; /*0x91ba22*/
    }
    if ( result >= 0 ) /*0x91ba2c*/
      return sub_91B8C0(v3, result); /*0x91ba35*/
  }
  return result; /*0x91ba27*/
}
