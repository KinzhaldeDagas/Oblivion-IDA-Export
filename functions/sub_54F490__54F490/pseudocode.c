int __cdecl sub_54F490(char *Str2, _DWORD *a2)
{
  int i; // esi
  const char *v4; // eax
  int j; // esi
  const char *v6; // eax
  int k; // esi
  const char *v8; // eax
  int v9; // esi
  const char *v10; // eax

  *a2 = 0xFFFFFFFF; /*0x54f49c*/
  if ( !Str2 ) /*0x54f4a2*/
    return 0xFFFFFFFF; /*0x54f4a5*/
  for ( i = 0; i < 0xD; ++i ) /*0x54f4ab*/
  {
    v4 = *(const char **)(4 * i + 0xB11FF0); /*0x54f4b0*/
    if ( v4 && !CRT_StricmpLocaleDispatch(v4, Str2) ) /*0x54f4c7*/
    {
      *a2 = 1; /*0x54f55c*/
      return i; /*0x54f563*/
    }
  }
  for ( j = 0; j < 0x11; ++j ) /*0x54f4d5*/
  {
    v6 = *(const char **)(4 * j + 0xB12028); /*0x54f4e0*/
    if ( v6 && !CRT_StricmpLocaleDispatch(v6, Str2) ) /*0x54f4f7*/
    {
      *a2 = 2; /*0x54f568*/
      return j; /*0x54f56f*/
    }
  }
  for ( k = 0; k < 0x10; ++k ) /*0x54f501*/
  {
    v8 = *(const char **)(4 * k + 0xB12070); /*0x54f503*/
    if ( v8 && !CRT_StricmpLocaleDispatch(v8, Str2) ) /*0x54f51a*/
    {
      *a2 = 0; /*0x54f574*/
      return k; /*0x54f57b*/
    }
  }
  v9 = 0; /*0x54f524*/
  while ( 1 ) /*0x54f530*/
  {
    v10 = *(const char **)(4 * v9 + 0xB12024); /*0x54f530*/
    if ( v10 ) /*0x54f539*/
    {
      if ( !CRT_StricmpLocaleDispatch(v10, Str2) ) /*0x54f53d*/
        break; /*0x54f53d*/
    }
    if ( ++v9 >= 1 ) /*0x54f54f*/
      return 0xFFFFFFFF; /*0x54f557*/
  }
  *a2 = 3; /*0x54f580*/
  return v9; /*0x54f4a4*/
}
