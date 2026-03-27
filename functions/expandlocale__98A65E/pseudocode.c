char *__cdecl _expandlocale(char *Str, char *a2, rsize_t SizeInBytes, _DWORD *a4)
{
  CHAR *v4; // esi
  int v5; // eax
  unsigned __int16 *v6; // ebx
  errno_t v7; // eax
  int v8; // edx
  int v9; // ecx
  unsigned int v11; // eax
  errno_t v12; // eax
  int v13; // edx
  int v14; // ecx
  errno_t v15; // eax
  int v16; // edx
  int v17; // ecx
  rsize_t v18; // [esp-Ch] [ebp-6Ch]
  rsize_t v19; // [esp-8h] [ebp-68h]
  _BYTE v20[12]; // [esp-4h] [ebp-64h]
  unsigned int v21; // [esp+10h] [ebp-50h]
  _DWORD *Src; // [esp+14h] [ebp-4Ch]
  char *v23; // [esp+18h] [ebp-48h]
  char *Str1; // [esp+28h] [ebp-38h]
  char v25[144]; // [esp+2Ch] [ebp-34h] BYREF

  v4 = Str;
  v5 = _getptd() + 0x9C;
  Src = (_DWORD *)(v5 + 0x28);
  v6 = (unsigned __int16 *)(v5 + 0x20);
  v23 = (char *)(v5 + 0x2C);
  Str1 = (char *)(v5 + 0xAF);
  if ( !Str || !a2 || !(_DWORD)SizeInBytes )
    return 0;
  if ( *Str == 0x43 && !Str[1] )
  {
    v7 = strcpy_s(a2, SizeInBytes, "C");
    if ( v7 )
      _invoke_watson(v7, v8, v9, (int)v6, SHIDWORD(SizeInBytes), 0);
    if ( HIDWORD(SizeInBytes) )
    {
      *(_DWORD *)HIDWORD(SizeInBytes) = 0;
      *(_WORD *)(HIDWORD(SizeInBytes) + 4) = 0;
    }
    if ( a4 )
      *a4 = 0;
    return a2;
  }
  v21 = strlen(Str);
  if ( v21 >= 0x83 || strcmp(Str1, Str) && strcmp(v23, Str) )
  {
    if ( !__lc_strtolc(v25, Str) && __get_qualified_locale((int)v25, (int)v6, v25) )
    {
      *Src = v6[2];
      HIDWORD(v19) = v25;
      LODWORD(v19) = 0x83;
      __lc_lctostr(0x83, Str1, v19);
      if ( !*Str || (v11 = v21, v21 >= 0x83) )
      {
        v11 = 0;
        v4 = EmptyString;
      }
      HIDWORD(v18) = v4;
      LODWORD(v18) = 0x83;
      v12 = strncpy_s(v23, v18, (const char *)(v11 + 1), *(rsize_t *)&v20[4]);
      if ( v12 )
        _invoke_watson(v12, v13, v14, (int)v6, 0x83, 0);
      goto LABEL_23;
    }
    return 0;
  }
LABEL_23:
  if ( HIDWORD(SizeInBytes) )
  {
    *(_DWORD *)v20 = 6;
    memcpy((void *)HIDWORD(SizeInBytes), v6, *(size_t *)v20);
  }
  if ( a4 )
  {
    *(_DWORD *)v20 = 4;
    memcpy(a4, Src, *(size_t *)v20);
  }
  v15 = strcpy_s(a2, SizeInBytes, Str1);
  if ( v15 )
    _invoke_watson(v15, v16, v17, (int)v6, 0x83, 0);
  return Str1;
}
