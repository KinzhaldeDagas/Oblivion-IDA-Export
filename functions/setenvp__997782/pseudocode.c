unsigned int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  int v5; // eax
  UInt32 v6; // ebp
  char *v7; // eax
  errno_t v8; // eax
  int v9; // edx
  int v10; // ecx

  if ( !unk_BABC14 ) /*0x99778d*/
    __initmbctable(); /*0x99778f*/
  v0 = unk_BA9DF8; /*0x997794*/
  v1 = 0; /*0x99779a*/
  if ( !unk_BA9DF8 ) /*0x99779e*/
    return 0xFFFFFFFF; /*0x99779e*/
  while ( *v0 ) /*0x9977bc*/
  {
    if ( *v0 != 0x3D ) /*0x9977aa*/
      ++v1; /*0x9977ac*/
    v0 += strlen(v0) + 1; /*0x9977b4*/
  }
  v3 = (char **)unknown_libname_74(v1 + 1, 4); /*0x9977c7*/
  unk_BA9DB4 = v3; /*0x9977cd*/
  if ( !v3 ) /*0x9977d3*/
    return 0xFFFFFFFF; /*0x9977a3*/
  for ( i = unk_BA9DF8; ; i += v6 ) /*0x9977d5*/
  {
    if ( !*i ) /*0x99781e*/
    {
      free(unk_BA9DF8); /*0x997828*/
      unk_BA9DF8 = 0; /*0x99782d*/
      *v3 = 0; /*0x997833*/
      unk_BABC08 = 1; /*0x997835*/
      return 0; /*0x997846*/
    }
    v5 = strlen(i); /*0x9977df*/
    v6 = v5 + 1; /*0x9977e6*/
    if ( *i != 0x3D ) /*0x9977eb*/
      break; /*0x9977eb*/
LABEL_16:
    ; /*0x99781c*/
  }
  v7 = (char *)unknown_libname_74(v5 + 1, 1); /*0x9977f0*/
  *v3 = v7; /*0x9977f9*/
  if ( v7 ) /*0x9977fb*/
  {
    v8 = strcpy_s(v7, v6, i); /*0x997800*/
    if ( v8 ) /*0x99780a*/
      _invoke_watson(v8, v9, v10, 0, (int)v3, (int)i); /*0x997811*/
    ++v3; /*0x997819*/
    goto LABEL_16; /*0x997819*/
  }
  free(unk_BA9DB4); /*0x99784d*/
  unk_BA9DB4 = 0; /*0x997852*/
  return 0xFFFFFFFF; /*0x997843*/
}
