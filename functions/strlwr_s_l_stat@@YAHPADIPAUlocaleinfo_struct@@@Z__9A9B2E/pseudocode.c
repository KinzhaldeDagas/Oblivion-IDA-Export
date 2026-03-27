errno_t __cdecl _strlwr_s_l_stat(char *Str, size_t MaxCount)
{
  int *v2; // eax
  errno_t v3; // esi
  int v4; // eax
  LCID v5; // ecx
  char *i; // ecx
  char v7; // al
  int v9; // eax
  int v10; // ecx
  char *v11; // eax
  size_t v12[2]; // [esp-4h] [ebp-1Ch] BYREF
  int v13; // [esp+Ch] [ebp-Ch]
  char *Src; // [esp+10h] [ebp-8h]

  if ( !Str )
    goto LABEL_2;
  LODWORD(v12[0]) = MaxCount;
  if ( (unsigned int)strnlen(Str, v12[0]) >= (unsigned int)MaxCount )
  {
    *Str = 0;
LABEL_2:
    v2 = _errno();
    LODWORD(v12[0]) = 0x16;
LABEL_3:
    v3 = v12[0];
    LODWORD(v12[0]) = 0;
    *v2 = v3;
    _invalid_parameter(0, (int)Str, v3);
    return v3;
  }
  v4 = *(_DWORD *)HIDWORD(MaxCount);
  v5 = *(_DWORD *)(*(_DWORD *)HIDWORD(MaxCount) + 0x14);
  if ( v5 )
  {
    LODWORD(v12[0]) = 1;
    v9 = __crtLCMapStringA(
           (struct localeinfo_struct *)HIDWORD(MaxCount),
           v5,
           0x100u,
           Str,
           0xFFFFFFFF,
           0,
           0,
           *(_DWORD *)(v4 + 4));
    v10 = v9;
    v13 = v9;
    if ( !v9 )
    {
      *_errno() = 0x2A;
      return *_errno();
    }
    if ( (unsigned int)MaxCount < v9 )
    {
      *Str = 0;
      v2 = _errno();
      LODWORD(v12[0]) = 0x22;
      goto LABEL_3;
    }
    if ( v9 <= 0 || !(0xFFFFFFE0 / v9) )
    {
      Src = 0;
      goto LABEL_28;
    }
    if ( (unsigned int)(v9 + 8) > 0x400 )
    {
      LODWORD(v12[0]) = v9 + 8;
      v11 = (char *)malloc(v12[0]);
      if ( v11 )
      {
        *(_DWORD *)v11 = 0xDDDD;
        goto LABEL_25;
      }
    }
    else
    {
      _alloca_(SHIDWORD(v12[0]));
      v11 = (char *)v12 + 4;
      if ( v12 != (size_t *)0xFFFFFFFC )
      {
        HIDWORD(v12[0]) = 0xCCCC;
LABEL_25:
        v11 += 8;
      }
    }
    v10 = v13;
    Src = v11;
LABEL_28:
    if ( Src )
    {
      LODWORD(v12[0]) = 1;
      if ( __crtLCMapStringA(
             (struct localeinfo_struct *)HIDWORD(MaxCount),
             *(_DWORD *)(*(_DWORD *)HIDWORD(MaxCount) + 0x14),
             0x100u,
             Str,
             0xFFFFFFFF,
             (int)Src,
             v10,
             *(_DWORD *)(*(_DWORD *)HIDWORD(MaxCount) + 4)) )
      {
        v3 = strcpy_s(Str, MaxCount, Src);
      }
      else
      {
        *_errno() = 0x2A;
        v3 = 0x2A;
      }
      _freea(Src);
      return v3;
    }
    *_errno() = 0xC;
    return *_errno();
  }
  for ( i = Str; *i; ++i )
  {
    v7 = *i;
    if ( *i >= 0x41 && v7 <= 0x5A )
      *i = v7 + 0x20;
  }
  return 0;
}
