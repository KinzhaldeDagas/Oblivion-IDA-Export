int __thiscall sub_494E90(unsigned int *this, int a2)
{
  int result; // eax
  unsigned int v3; // esi
  int v4; // edx
  _DWORD *i; // ecx

  result = 0xFFFFFFFF; /*0x494e95*/
  if ( a2 ) /*0x494e9a*/
  {
    v3 = *(this + 3); /*0x494e9d*/
    if ( v3 ) /*0x494ea2*/
    {
      v4 = 0; /*0x494ea4*/
      for ( i = (_DWORD *)*(this + 1); *i != a2; ++i ) /*0x494eaa*/
      {
        if ( ++v4 >= v3 ) /*0x494ebc*/
          return result; /*0x494ebc*/
      }
      return v4; /*0x494ec3*/
    }
  }
  return result; /*0x494ebf*/
}
