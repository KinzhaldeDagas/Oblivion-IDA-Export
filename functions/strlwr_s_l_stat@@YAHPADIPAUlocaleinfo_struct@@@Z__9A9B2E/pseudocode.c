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
  int v11; // eax
  char *v12; // eax
  size_t v13[2]; // [esp-4h] [ebp-1Ch] BYREF
  int v14; // [esp+Ch] [ebp-Ch]
  char *Src; // [esp+10h] [ebp-8h]

  if ( !Str ) /*0x9a9b48*/
    goto LABEL_2; /*0x9a9b48*/
  LODWORD(v13[0]) = MaxCount; /*0x9a9b66*/
  if ( (unsigned int)strnlen(Str, v13[0]) >= (unsigned int)MaxCount ) /*0x9a9b74*/
  {
    *Str = 0; /*0x9a9b76*/
LABEL_2:
    v2 = _errno(); /*0x9a9b4a*/
    LODWORD(v13[0]) = 0x16; /*0x9a9b4f*/
LABEL_3:
    v3 = v13[0]; /*0x9a9b51*/
    LODWORD(v13[0]) = 0; /*0x9a9b52*/
    *v2 = v3; /*0x9a9b57*/
    _invalid_parameter(0, (int)Str, v3); /*0x9a9b59*/
    return v3; /*0x9a9c9b*/
  }
  v4 = *(_DWORD *)HIDWORD(MaxCount); /*0x9a9b7d*/
  v5 = *(_DWORD *)(*(_DWORD *)HIDWORD(MaxCount) + 0x14); /*0x9a9b7f*/
  if ( v5 ) /*0x9a9b84*/
  {
    LODWORD(v13[0]) = 1; /*0x9a9ba6*/
    v9 = __crtLCMapStringA( /*0x9a9bb8*/
           (struct localeinfo_struct *)HIDWORD(MaxCount),
           v5,
           0x100u,
           Str,
           0xFFFFFFFF,
           0,
           0,
           *(_DWORD *)(v4 + 4));
    v10 = v9; /*0x9a9bbd*/
    v14 = v9; /*0x9a9bc4*/
    if ( !v9 ) /*0x9a9bc7*/
    {
      *_errno() = 0x2A; /*0x9a9bce*/
      return *_errno(); /*0x9a9bce*/
    }
    if ( (unsigned int)MaxCount < v9 ) /*0x9a9be3*/
    {
      *Str = 0; /*0x9a9be5*/
      v2 = _errno(); /*0x9a9be7*/
      LODWORD(v13[0]) = 0x22; /*0x9a9bec*/
      goto LABEL_3; /*0x9a9bee*/
    }
    if ( v9 <= 0 || !(0xFFFFFFE0 / v9) ) /*0x9a9bfc*/
    {
      Src = 0; /*0x9a9c3c*/
      goto LABEL_28; /*0x9a9c3c*/
    }
    v11 = v9 + 8; /*0x9a9c03*/
    if ( (unsigned int)(v10 + 8) > 0x400 ) /*0x9a9c0b*/
    {
      LODWORD(v13[0]) = v10 + 8; /*0x9a9c20*/
      v12 = (char *)malloc(v13[0]); /*0x9a9c21*/
      if ( v12 ) /*0x9a9c29*/
      {
        *(_DWORD *)v12 = 0xDDDD; /*0x9a9c2b*/
        goto LABEL_25; /*0x9a9c2b*/
      }
    }
    else
    {
      _alloca_(v11); /*0x9a9c0d*/
      v12 = (char *)v13 + 4; /*0x9a9c12*/
      if ( v13 != (size_t *)0xFFFFFFFC ) /*0x9a9c16*/
      {
        HIDWORD(v13[0]) = 0xCCCC; /*0x9a9c18*/
LABEL_25:
        v12 += 8; /*0x9a9c31*/
      }
    }
    v10 = v14; /*0x9a9c34*/
    Src = v12; /*0x9a9c37*/
LABEL_28:
    if ( Src ) /*0x9a9c42*/
    {
      LODWORD(v13[0]) = 1; /*0x9a9c56*/
      if ( __crtLCMapStringA( /*0x9a9c67*/
             (struct localeinfo_struct *)HIDWORD(MaxCount),
             *(_DWORD *)(*(_DWORD *)HIDWORD(MaxCount) + 0x14),
             0x100u,
             Str,
             0xFFFFFFFF,
             Src,
             v10,
             *(_DWORD *)(*(_DWORD *)HIDWORD(MaxCount) + 4)) )
      {
        v3 = strcpy_s(Str, MaxCount, Src); /*0x9a9c82*/
      }
      else
      {
        *_errno() = 0x2A; /*0x9a9c8e*/
        v3 = 0x2A; /*0x9a9c90*/
      }
      _freea(Src); /*0x9a9c95*/
      return v3; /*0x9a9c95*/
    }
    *_errno() = 0xC; /*0x9a9c49*/
    return *_errno(); /*0x9a9bdb*/
  }
  for ( i = Str; *i; ++i ) /*0x9a9b86*/
  {
    v7 = *i; /*0x9a9b8c*/
    if ( *i >= 0x41 && v7 <= 0x5A ) /*0x9a9b94*/
      *i = v7 + 0x20; /*0x9a9b98*/
  }
  return 0; /*0x9a9ca0*/
}
