int __cdecl _fptostr(unsigned int a1, unsigned int a2, int a3, int a4)
{
  int v4; // ecx
  char *v5; // edi
  int v6; // esi
  int v8; // edx
  int v9; // eax
  char *v10; // eax
  char v11; // cl
  int v12; // eax

  v4 = a4;
  v5 = *(char **)(a4 + 0xC);
  if ( !a1 || !a2 )
  {
    v6 = 0x16;
    *_errno() = 0x16;
LABEL_3:
    _invalid_parameter(0, (int)v5, v6);
    return v6;
  }
  v8 = a3;
  *(_BYTE *)a1 = 0;
  if ( a3 <= 0 )
    v9 = 0;
  else
    v9 = a3;
  if ( a2 <= v9 + 1 )
  {
    *_errno() = 0x22;
    v6 = 0x22;
    goto LABEL_3;
  }
  *(_BYTE *)a1 = 0x30;
  v10 = (char *)(a1 + 1);
  if ( a3 > 0 )
  {
    do
    {
      v11 = *v5;
      if ( *v5 )
        ++v5;
      else
        v11 = 0x30;
      *v10++ = v11;
      --v8;
    }
    while ( v8 > 0 );
    v4 = a4;
  }
  *v10 = 0;
  if ( v8 >= 0 && *v5 >= 0x35 )
  {
    while ( *--v10 == 0x39 )
      *v10 = 0x30;
    ++*v10;
  }
  if ( *(_BYTE *)a1 == 0x31 )
  {
    ++*(_DWORD *)(v4 + 4);
  }
  else
  {
    v12 = strlen((const char *)(a1 + 1));
    unknown_libname_16(a1, a1 + 1, v12 + 1);
  }
  return 0;
}
