signed int __usercall sub_7283F0@<eax>(int a1@<eax>, float *a2@<ecx>, unsigned int a3@<edi>)
{
  unsigned int v3; // edx
  int v4; // esi

  v3 = 0; /*0x7283f0*/
  if ( !a3 ) /*0x7283f5*/
    return 0; /*0x728426*/
  v4 = a1 - (_DWORD)a2; /*0x7283f9*/
  while ( 1 ) /*0x728400*/
  {
    if ( *a2 > (double)*(float *)((char *)a2 + v4) ) /*0x72840c*/
      return 0xFFFFFFFF; /*0x72842e*/
    if ( *a2 < (double)*(float *)((char *)a2 + v4) ) /*0x72841a*/
      break; /*0x72841a*/
    ++v3; /*0x72841c*/
    ++a2; /*0x72841f*/
    if ( v3 >= a3 ) /*0x728424*/
      return 0; /*0x728424*/
  }
  return 1; /*0x728428*/
}
