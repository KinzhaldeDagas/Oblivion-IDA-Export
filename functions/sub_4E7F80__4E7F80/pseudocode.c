char __thiscall sub_4E7F80(_DWORD *this, int a2)
{
  char result; // al
  _DWORD *v3; // ecx

  result = 0; /*0x4e7f84*/
  if ( a2 ) /*0x4e7f88*/
  {
    v3 = this + 8; /*0x4e7f8a*/
    if ( v3 ) /*0x4e7f8d*/
    {
      while ( *v3 != a2 ) /*0x4e7f92*/
      {
        v3 = (_DWORD *)v3[1]; /*0x4e7f94*/
        if ( !v3 ) /*0x4e7f99*/
          return result; /*0x4e7f99*/
      }
      return 1; /*0x4e7f9e*/
    }
  }
  return result; /*0x4e7f9b*/
}
