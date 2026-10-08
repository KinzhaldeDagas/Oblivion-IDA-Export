int __cdecl _fptostr(_BYTE *a1, unsigned int a2, int a3, int a4)
{
  int v4; // ecx
  char *v5; // edi
  int v6; // esi
  int v8; // edx
  int v9; // eax
  char *v10; // eax
  char v11; // cl
  int v12; // eax

  v4 = a4; /*0x99e090*/
  v5 = *(char **)(a4 + 0xC); /*0x99e09d*/
  if ( !a1 || !a2 ) /*0x99e0c3*/
  {
    v6 = 0x16; /*0x99e0a9*/
    *_errno() = 0x16; /*0x99e0aa*/
LABEL_3:
    _invalid_parameter(0, (int)v5, v6); /*0x99e0ac*/
    return v6; /*0x99e0bb*/
  }
  v8 = a3; /*0x99e0c5*/
  *a1 = 0; /*0x99e0ca*/
  if ( a3 <= 0 ) /*0x99e0cc*/
    v9 = 0; /*0x99e0d2*/
  else
    v9 = a3; /*0x99e0ce*/
  if ( a2 <= v9 + 1 ) /*0x99e0d8*/
  {
    *_errno() = 0x22; /*0x99e0e2*/
    v6 = 0x22; /*0x99e0e4*/
    goto LABEL_3; /*0x99e0e6*/
  }
  *a1 = 0x30; /*0x99e0ea*/
  v10 = a1 + 1; /*0x99e0ed*/
  if ( a3 > 0 ) /*0x99e0f0*/
  {
    do /*0x99e107*/
    {
      v11 = *v5; /*0x99e0f2*/
      if ( *v5 ) /*0x99e0f2*/
        ++v5; /*0x99e0fb*/
      else
        v11 = 0x30; /*0x99e100*/
      *v10++ = v11; /*0x99e101*/
      --v8; /*0x99e104*/
    }
    while ( v8 > 0 ); /*0x99e107*/
    v4 = a4; /*0x99e109*/
  }
  *v10 = 0; /*0x99e10e*/
  if ( v8 >= 0 && *v5 >= 0x35 ) /*0x99e115*/
  {
    while ( *--v10 == 0x39 ) /*0x99e11c*/
      *v10 = 0x30; /*0x99e119*/
    ++*v10; /*0x99e122*/
  }
  if ( *a1 == 0x31 ) /*0x99e127*/
  {
    ++*(_DWORD *)(v4 + 4); /*0x99e129*/
  }
  else
  {
    v12 = strlen(a1 + 1); /*0x99e132*/
    unknown_libname_16((unsigned int)a1, (unsigned int)(a1 + 1), v12 + 1); /*0x99e13b*/
  }
  return 0; /*0x99e145*/
}
