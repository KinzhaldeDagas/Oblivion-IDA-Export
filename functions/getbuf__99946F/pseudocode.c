int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_BA9E10[1]; /*0x99946f*/
  v1 = unknown_libname_72(0x1000); /*0x99947a*/
  a1[2] = v1; /*0x999486*/
  if ( v1 ) /*0x999489*/
  {
    a1[3] |= 8u; /*0x99948b*/
    a1[6] = 0x1000; /*0x99948f*/
  }
  else
  {
    a1[3] |= 4u; /*0x999498*/
    a1[2] = a1 + 5; /*0x99949f*/
    a1[6] = 2; /*0x9994a2*/
  }
  result = a1[2]; /*0x9994a9*/
  a1[1] = 0; /*0x9994ac*/
  *a1 = result; /*0x9994b0*/
  return result; /*0x9994b2*/
}
