const void *__usercall sub_941B90@<eax>(int a1@<ecx>, const void **a2@<edi>)
{
  char *v2; // esi
  char *v3; // ebx
  signed int v4; // eax
  char *v5; // eax
  char *i; // eax
  const void *v7; // eax
  const void *result; // eax

  v2 = (char *)a2[1] + a1 + 1; /*0x941b95*/
  v3 = (char *)a2[1]; /*0x941b99*/
  if ( (int)v2 > (int)v3 ) /*0x941b9d*/
  {
    v4 = (unsigned int)a2[2] & 0x3FFFFFFF; /*0x941ba2*/
    if ( v4 < (int)v2 ) /*0x941ba9*/
    {
      v5 = (char *)(2 * v4); /*0x941bab*/
      if ( (int)v2 >= (int)v5 ) /*0x941baf*/
        v5 = (char *)a2[1] + a1 + 1; /*0x941bb1*/
      sub_8A6E40(a2, (int)v5, 1); /*0x941bb7*/
    }
    for ( i = v3; (int)i < (int)v2; ++i ) /*0x941bc3*/
      *((_BYTE *)*a2 + (_DWORD)i) = 9; /*0x941bc7*/
  }
  v7 = *a2; /*0x941bd0*/
  a2[1] = v2; /*0x941bd2*/
  v2[(_DWORD)v7 - 1] = 0; /*0x941bd5*/
  result = (char *)a2[1] + 0xFFFFFFFF; /*0x941bdd*/
  a2[1] = result; /*0x941bdf*/
  return result; /*0x941bde*/
}
