unsigned int __usercall __crtsetenv@<eax>(int a1@<edi>, int a2@<esi>, const unsigned __int8 **a3, int a4)
{
  const unsigned __int8 *v5; // esi
  unsigned __int8 *v6; // eax
  bool v7; // zf
  char **v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // edi
  char *v14; // esi
  char *v15; // eax
  unsigned __int8 **v16; // ecx
  char *v17; // edi
  int v18; // eax
  errno_t v19; // eax
  int v20; // edx
  int v21; // ecx
  unsigned __int8 *v22; // eax
  char *v23; // [esp+8h] [ebp-14h]
  unsigned int v24; // [esp+Ch] [ebp-10h]
  unsigned __int8 *v25; // [esp+10h] [ebp-Ch]
  BOOL v26; // [esp+14h] [ebp-8h]
  unsigned __int8 *Str; // [esp+18h] [ebp-4h]

  v24 = 0;
  if ( !a3 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, a2);
    return 0xFFFFFFFF;
  }
  v5 = *a3;
  Str = (unsigned __int8 *)*a3;
  if ( !*a3 )
    goto LABEL_12;
  v6 = _mbschr(v5, 0x3Du);
  v25 = v6;
  if ( !v6 || v5 == v6 )
    goto LABEL_12;
  v7 = v6[1] == 0;
  v8 = (char **)dword_BA9DB4;
  v26 = v7;
  if ( dword_BA9DB4 == (void *)dword_BA9DB8 )
  {
    v8 = copy_environ(dword_BA9DB4);
    dword_BA9DB4 = v8;
  }
  if ( !v8 )
  {
    if ( a4 && dword_BA9DBC )
    {
      if ( __wtomb_environ() )
      {
LABEL_12:
        *_errno() = 0x16;
        return 0xFFFFFFFF;
      }
    }
    else
    {
      if ( v26 )
        return 0;
      v9 = (_DWORD *)unknown_libname_72();
      dword_BA9DB4 = v9;
      if ( !v9 )
        return 0xFFFFFFFF;
      *v9 = 0;
      if ( !dword_BA9DBC )
      {
        v10 = (_DWORD *)unknown_libname_72();
        dword_BA9DBC = (int)v10;
        if ( !v10 )
          return 0xFFFFFFFF;
        *v10 = 0;
      }
    }
  }
  v11 = dword_BA9DB4;
  v23 = (char *)dword_BA9DB4;
  if ( !dword_BA9DB4 )
    return 0xFFFFFFFF;
  v12 = findenv(v25 - Str, Str);
  v13 = v12;
  if ( v12 < 0 || !*v11 )
  {
    if ( !v26 )
    {
      if ( v12 < 0 )
        v13 = -v12;
      if ( v13 + 2 <= v13 )
        return 0xFFFFFFFF;
      if ( (unsigned int)(v13 + 2) >= 0x3FFFFFFF )
        return 0xFFFFFFFF;
      v15 = (char *)unknown_libname_78();
      if ( !v15 )
        return 0xFFFFFFFF;
      v16 = (unsigned __int8 **)&v15[4 * v13];
      *v16 = Str;
      v16[1] = 0;
      *a3 = 0;
LABEL_36:
      dword_BA9DB4 = v15;
      goto LABEL_37;
    }
    free(Str);
    *a3 = 0;
    return 0;
  }
  v14 = (char *)&v11[v12];
  free(*(void **)v14);
  if ( v26 )
  {
    while ( *(_DWORD *)v14 )
    {
      *(_DWORD *)v14 = *((_DWORD *)v14 + 1);
      ++v13;
      v14 = &v23[4 * v13];
    }
    if ( (unsigned int)v13 >= 0x3FFFFFFF )
      goto LABEL_37;
    v15 = (char *)unknown_libname_78();
    if ( !v15 )
      goto LABEL_37;
    goto LABEL_36;
  }
  *(_DWORD *)v14 = Str;
  *a3 = 0;
LABEL_37:
  if ( a4 )
  {
    strlen((const char *)Str);
    v17 = (char *)unknown_libname_74();
    if ( v17 )
    {
      v18 = strlen((const char *)Str);
      v19 = strcpy_s(v17, v18 + 2, (const char *)Str);
      if ( v19 )
        _invoke_watson(v19, v20, v21, 0, (int)v17, (int)Str);
      v22 = &v25[v17 - (char *)Str];
      *v22 = 0;
      if ( !SetEnvironmentVariableA(v17, !v26 ? (LPCSTR)v22 + 1 : 0) )
      {
        v24 = 0xFFFFFFFF;
        *_errno() = 0x2A;
      }
      free(v17);
    }
  }
  if ( v26 )
    free(Str);
  return v24;
}
