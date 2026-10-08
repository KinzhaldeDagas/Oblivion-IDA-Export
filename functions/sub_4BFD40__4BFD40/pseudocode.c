_DWORD *__cdecl sub_4BFD40(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x20u); /*0x4bfd42*/
  if ( !result ) /*0x4bfd4e*/
    return 0; /*0x4bfd8d*/
  *result = 0; /*0x4bfd54*/
  result[1] = 0; /*0x4bfd56*/
  result[2] = 0; /*0x4bfd59*/
  result[3] = 0; /*0x4bfd5c*/
  result[5] = 0; /*0x4bfd5f*/
  result[4] = 0; /*0x4bfd62*/
  result[6] = 0; /*0x4bfd65*/
  result[7] = 0; /*0x4bfd68*/
  *result = a5; /*0x4bfd6b*/
  result[1] = a1; /*0x4bfd71*/
  result[2] = a2; /*0x4bfd78*/
  result[3] = a3; /*0x4bfd7f*/
  result[5] = a4; /*0x4bfd86*/
  result[4] = 0; /*0x4bfd89*/
  return result; /*0x4bfd8c*/
}
