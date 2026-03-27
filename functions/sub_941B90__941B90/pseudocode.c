const void *__usercall sub_941B90@<eax>(int a1@<ecx>, const void **a2@<edi>)
{
  char *v2; // esi
  char *v3; // ebx
  signed int v4; // eax
  char *v5; // eax
  char *i; // eax
  const void *v7; // eax
  const void *result; // eax

  v2 = (char *)a2[1] + a1 + 1;
  v3 = (char *)a2[1];
  if ( (int)v2 > (int)v3 )
  {
    v4 = (unsigned int)a2[2] & 0x3FFFFFFF;
    if ( v4 < (int)v2 )
    {
      v5 = (char *)(2 * v4);
      if ( (int)v2 >= (int)v5 )
        v5 = (char *)a2[1] + a1 + 1;
      sub_8A6E40(a2, (int)v5, 1);
    }
    for ( i = v3; (int)i < (int)v2; ++i )
      *((_BYTE *)*a2 + (_DWORD)i) = 9;
  }
  v7 = *a2;
  a2[1] = v2;
  v2[(_DWORD)v7 - 1] = 0;
  result = (char *)a2[1] + 0xFFFFFFFF;
  a2[1] = result;
  return result;
}
