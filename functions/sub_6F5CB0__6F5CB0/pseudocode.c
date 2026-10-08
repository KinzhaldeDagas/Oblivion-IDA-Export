signed int __cdecl sub_6F5CB0(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v6; // esi
  unsigned int v7; // eax
  unsigned __int8 *v8; // ecx
  unsigned __int8 *v9; // edx
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  signed int result; // eax

  v3 = a3; /*0x6f5cb0*/
  if ( a3 < 4 ) /*0x6f5cc1*/
  {
LABEL_4:
    if ( !v3 ) /*0x6f5cd9*/
      return 0; /*0x6f5d39*/
  }
  else
  {
    while ( *a1 == *a2 ) /*0x6f5cc7*/
    {
      v3 -= 4; /*0x6f5cc9*/
      ++a2; /*0x6f5ccc*/
      ++a1; /*0x6f5ccf*/
      if ( v3 < 4 ) /*0x6f5cd5*/
        goto LABEL_4; /*0x6f5cd5*/
    }
  }
  v6 = *(unsigned __int8 *)a1 - *(unsigned __int8 *)a2; /*0x6f5ce1*/
  if ( !v6 ) /*0x6f5ce3*/
  {
    v7 = v3 - 1; /*0x6f5ce5*/
    v8 = (unsigned __int8 *)a2 + 1; /*0x6f5ce8*/
    v9 = (unsigned __int8 *)a1 + 1; /*0x6f5ceb*/
    if ( !v7 ) /*0x6f5cf0*/
      return 0; /*0x6f5cf0*/
    v6 = *v9 - *v8; /*0x6f5cf8*/
    if ( !v6 ) /*0x6f5cfa*/
    {
      v10 = v7 - 1; /*0x6f5cfc*/
      v11 = v8 + 1; /*0x6f5cff*/
      v12 = v9 + 1; /*0x6f5d02*/
      if ( !v10 ) /*0x6f5d07*/
        return 0; /*0x6f5d07*/
      v6 = *v12 - *v11; /*0x6f5d0f*/
      if ( !v6 ) /*0x6f5d11*/
      {
        v13 = v11 + 1; /*0x6f5d16*/
        v14 = v12 + 1; /*0x6f5d19*/
        if ( v10 == 1 ) /*0x6f5d1e*/
          return 0; /*0x6f5d1e*/
        v6 = *v14 - *v13; /*0x6f5d26*/
        if ( !v6 ) /*0x6f5d28*/
          return 0; /*0x6f5d28*/
      }
    }
  }
  result = 1; /*0x6f5d2c*/
  if ( v6 <= 0 ) /*0x6f5d31*/
    return 0xFFFFFFFF; /*0x6f5d34*/
  return result; /*0x6f5d33*/
}
