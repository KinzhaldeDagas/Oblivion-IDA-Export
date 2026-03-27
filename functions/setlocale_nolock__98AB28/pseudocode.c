char *__usercall _setlocale_nolock@<eax>(char *Str@<ecx>, UINT *a2@<edx>, const char *a3@<edi>, int a4)
{
  int v4; // ebx
  UINT *v5; // esi
  char *result; // eax
  char *v7; // eax
  char *v8; // ebx
  int v9; // eax
  const char **v10; // esi
  const char *v11; // ebx
  int v12; // edi
  errno_t v13; // eax
  int v14; // edx
  int v15; // ecx
  rsize_t v16; // [esp-Ch] [ebp-3Ch]
  _BYTE v17[12]; // [esp-4h] [ebp-34h]
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h]
  char Dst[132]; // [esp+1Ch] [ebp-14h] BYREF

  v4 = 0;
  v5 = a2;
  if ( a4 )
  {
    if ( Str )
      return (char *)_setlocale_set_cat(Str, a2, a4);
    else
      return (char *)a2[4 * a4 + 0x12];
  }
  v20 = 1;
  v22 = 0;
  if ( !Str )
    return (char *)_setlocale_get_all(a3, (int)v5);
  if ( *Str == 0x4C && Str[1] == 0x43 && Str[2] == 0x5F )
  {
    a3 = Str;
    do
    {
      v7 = strpbrk(a3, "=;");
      v8 = v7;
      if ( !v7 )
        return 0;
      v9 = v7 - a3;
      v21 = v9;
      if ( !v9 )
        return 0;
      if ( *v8 == 0x3B )
        return 0;
      v19 = 1;
      v10 = (const char **)&off_AA486C;
      while ( 1 )
      {
        *(_DWORD *)v17 = v9;
        if ( !strncmp(*v10, a3, *(size_t *)v17) && v21 == (unsigned int)strlen(*v10) )
          break;
        ++v19;
        v10 += 3;
        if ( (int)v10 > (int)off_AA489C )
          break;
        v9 = v21;
      }
      v11 = v8 + 1;
      v12 = strcspn(v11, ";");
      if ( !v12 && *v11 != 0x3B )
        return 0;
      if ( v19 <= 5 )
      {
        HIDWORD(v16) = v11;
        LODWORD(v16) = 0x83;
        v13 = strncpy_s(Dst, v16, (const char *)v12, *(rsize_t *)&v17[4]);
        if ( v13 )
          _invoke_watson(v13, v14, v15, (int)v11, v12, 0);
        Dst[v12] = 0;
        if ( _setlocale_set_cat(Dst, a2, v19) )
          ++v22;
      }
      a3 = &v11[v12];
      if ( !*a3 )
        break;
      ++a3;
    }
    while ( *a3 );
    result = 0;
    if ( !v22 )
      return result;
    v5 = a2;
    return (char *)_setlocale_get_all(a3, (int)v5);
  }
  result = _expandlocale(Str, Dst, 0x83u, 0);
  if ( result )
  {
    a3 = (const char *)(v5 + 0x12);
    do
    {
      if ( v4 )
      {
        if ( !strcmp(Dst, *(const char **)a3) || _setlocale_set_cat(Dst, v5, v4) )
          ++v22;
        else
          v20 = 0;
      }
      ++v4;
      a3 += 0x10;
    }
    while ( v4 <= 5 );
    result = 0;
    if ( v20 || v22 )
      return (char *)_setlocale_get_all(a3, (int)v5);
  }
  return result;
}
