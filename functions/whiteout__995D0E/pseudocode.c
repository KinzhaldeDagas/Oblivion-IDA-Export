int __usercall _whiteout@<eax>(int a1@<ecx>, _DWORD *a2@<esi>, FILE *a3)
{
  int v3; // ebx
  int v4; // eax
  int v6; // [esp-4h] [ebp-8h]

  do /*0x995d2d*/
  {
    ++*a2; /*0x995d13*/
    v3 = _inc(a1, a3); /*0x995d1a*/
    if ( v3 == 0xFFFFFFFF ) /*0x995d1f*/
      break; /*0x995d1f*/
    v4 = isspace((unsigned __int8)v3); /*0x995d25*/
    a1 = v6; /*0x995d2c*/
  }
  while ( v4 ); /*0x995d2d*/
  return v3; /*0x995d31*/
}
