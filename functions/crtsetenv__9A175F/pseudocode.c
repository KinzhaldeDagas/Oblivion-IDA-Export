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
  int v17; // eax
  char *v18; // edi
  int v19; // eax
  errno_t v20; // eax
  int v21; // edx
  int v22; // ecx
  unsigned __int8 *v23; // eax
  size_t v24; // [esp-Ch] [ebp-28h]
  char *v25; // [esp+8h] [ebp-14h]
  unsigned int v26; // [esp+Ch] [ebp-10h]
  unsigned __int8 *v27; // [esp+10h] [ebp-Ch]
  BOOL v28; // [esp+14h] [ebp-8h]
  unsigned __int8 *Str; // [esp+18h] [ebp-4h]

  v26 = 0; /*0x9a176e*/
  if ( !a3 ) /*0x9a1771*/
  {
    *_errno() = 0x16; /*0x9a177d*/
    _invalid_parameter(0, a1, a2); /*0x9a1783*/
    return 0xFFFFFFFF; /*0x9a178e*/
  }
  v5 = *a3; /*0x9a1791*/
  Str = (unsigned __int8 *)*a3; /*0x9a1795*/
  if ( !*a3 ) /*0x9a1795*/
    goto LABEL_12; /*0x9a1795*/
  v6 = _mbschr(v5, 0x3Du); /*0x9a179d*/
  v27 = v6; /*0x9a17a6*/
  if ( !v6 || v5 == v6 ) /*0x9a17ad*/
    goto LABEL_12; /*0x9a17ad*/
  v7 = v6[1] == 0; /*0x9a17b1*/
  v8 = (char **)unk_BA9DB4; /*0x9a17b4*/
  v28 = v7; /*0x9a17c2*/
  if ( unk_BA9DB4 == (void *)unk_BA9DB8 ) /*0x9a17c5*/
  {
    v8 = copy_environ((const char **)unk_BA9DB4); /*0x9a17c9*/
    unk_BA9DB4 = v8; /*0x9a17ce*/
  }
  if ( !v8 ) /*0x9a17d5*/
  {
    if ( a4 && unk_BA9DBC ) /*0x9a17e2*/
    {
      if ( __wtomb_environ() ) /*0x9a17e4*/
      {
LABEL_12:
        *_errno() = 0x16; /*0x9a17ed*/
        return 0xFFFFFFFF; /*0x9a17ff*/
      }
    }
    else
    {
      if ( v28 ) /*0x9a1803*/
        return 0; /*0x9a1803*/
      v9 = unknown_libname_72(4); /*0x9a180b*/
      unk_BA9DB4 = v9; /*0x9a1813*/
      if ( !v9 ) /*0x9a1818*/
        return 0xFFFFFFFF; /*0x9a1818*/
      *v9 = 0; /*0x9a181a*/
      if ( !unk_BA9DBC ) /*0x9a1822*/
      {
        v10 = unknown_libname_72(4); /*0x9a1826*/
        unk_BA9DBC = v10; /*0x9a182e*/
        if ( !v10 ) /*0x9a1833*/
          return 0xFFFFFFFF; /*0x9a1833*/
        *v10 = 0; /*0x9a1835*/
      }
    }
  }
  v11 = unk_BA9DB4; /*0x9a1837*/
  v25 = (char *)unk_BA9DB4; /*0x9a183f*/
  if ( !unk_BA9DB4 ) /*0x9a1842*/
    return 0xFFFFFFFF; /*0x9a1842*/
  v12 = findenv(v27 - Str, Str); /*0x9a184d*/
  v13 = v12; /*0x9a1852*/
  if ( v12 < 0 || !*v11 ) /*0x9a1859*/
  {
    if ( !v28 ) /*0x9a18ae*/
    {
      if ( v12 < 0 ) /*0x9a18b6*/
        v13 = -v12; /*0x9a18b8*/
      if ( v13 + 2 <= v13 ) /*0x9a18bf*/
        return 0xFFFFFFFF; /*0x9a18bf*/
      if ( (unsigned int)(v13 + 2) >= 0x3FFFFFFF ) /*0x9a18ca*/
        return 0xFFFFFFFF; /*0x9a18ca*/
      HIDWORD(v24) = v13 + 2; /*0x9a18d0*/
      LODWORD(v24) = 4; /*0x9a18d1*/
      v15 = (char *)unknown_libname_78(unk_BA9DB4, v24); /*0x9a18d9*/
      if ( !v15 ) /*0x9a18e3*/
        return 0xFFFFFFFF; /*0x9a18e3*/
      v16 = (unsigned __int8 **)&v15[4 * v13]; /*0x9a18ec*/
      *v16 = Str; /*0x9a18ef*/
      v16[1] = 0; /*0x9a18f1*/
      *a3 = 0; /*0x9a18f7*/
LABEL_36:
      unk_BA9DB4 = v15; /*0x9a18f9*/
      goto LABEL_37; /*0x9a18f9*/
    }
    free(Str); /*0x9a1994*/
    *a3 = 0; /*0x9a199d*/
    return 0; /*0x9a199f*/
  }
  v14 = (char *)&v11[v12]; /*0x9a185d*/
  free(*(void **)v14); /*0x9a1862*/
  if ( v28 ) /*0x9a186b*/
  {
    while ( *(_DWORD *)v14 ) /*0x9a188a*/
    {
      *(_DWORD *)v14 = *((_DWORD *)v14 + 1); /*0x9a187f*/
      ++v13; /*0x9a1884*/
      v14 = &v25[4 * v13]; /*0x9a1885*/
    }
    if ( (unsigned int)v13 >= 0x3FFFFFFF ) /*0x9a1892*/
      goto LABEL_37; /*0x9a1892*/
    v15 = (char *)unknown_libname_78(unk_BA9DB4, (unsigned int)v13 | 0x400000000LL); /*0x9a189d*/
    if ( !v15 ) /*0x9a18a7*/
      goto LABEL_37; /*0x9a18a7*/
    goto LABEL_36; /*0x9a18a7*/
  }
  *(_DWORD *)v14 = Str; /*0x9a1870*/
  *a3 = 0; /*0x9a1875*/
LABEL_37:
  if ( a4 )
  {
    v17 = strlen((const char *)Str); /*0x9a1909*/
    v18 = (char *)unknown_libname_74(v17 + 2, 1); /*0x9a1917*/
    if ( v18 )
    {
      v19 = strlen((const char *)Str); /*0x9a1921*/
      v20 = strcpy_s(v18, v19 + 2, (const char *)Str); /*0x9a192b*/
      if ( v20 ) /*0x9a1935*/
        _invoke_watson(v20, v21, v22, 0, (int)v18, (int)Str); /*0x9a193c*/
      v23 = &v27[v18 - (char *)Str]; /*0x9a194b*/
      *v23 = 0; /*0x9a194e*/
      if ( !SetEnvironmentVariableA(v18, !v28 ? (LPCSTR)v23 + 1 : 0) )
      {
        v26 = 0xFFFFFFFF; /*0x9a1965*/
        *_errno() = 0x2A; /*0x9a196e*/
      }
      free(v18); /*0x9a1975*/
    }
  }
  if ( v28 ) /*0x9a197e*/
    free(Str); /*0x9a1983*/
  return v26; /*0x9a17fc*/
}
