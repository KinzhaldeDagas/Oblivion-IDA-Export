int __cdecl _mbsicmp_l(char *Str1, char *Str2, struct localeinfo_struct *a3)
{
  char *v3; // edx
  int result; // eax
  char *v5; // ebx
  pthreadmbcinfo mbcinfo; // eax
  unsigned __int16 v7; // cx
  char *v8; // edx
  unsigned __int16 v9; // si
  int v10; // eax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // dx
  char *v13; // ecx
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // cx
  int v16; // eax
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  char *v19; // ecx
  struct localeinfo_struct Locale; // [esp+4h] [ebp-14h] BYREF
  int v21; // [esp+Ch] [ebp-Ch]
  char v22; // [esp+10h] [ebp-8h]
  unsigned __int8 v23; // [esp+14h] [ebp-4h] BYREF
  unsigned __int8 v24; // [esp+15h] [ebp-3h]
  char *Str1a; // [esp+20h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  v3 = Str1;
  if ( !Str1 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    if ( v22 )
      *(_DWORD *)(v21 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  v5 = Str2;
  if ( !Str2 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    if ( v22 )
      *(_DWORD *)(v21 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  mbcinfo = Locale.mbcinfo;
  if ( !Locale.mbcinfo->ismbcodepage )
  {
    result = _stricmp_l(Str1, Str2, (_locale_t)&Locale);
    if ( v22 )
      *(_DWORD *)(v21 + 0x70) &= ~2u;
    return result;
  }
  while ( 1 )
  {
    v7 = (unsigned __int8)*v3;
    v8 = v3 + 1;
    Str1a = v8;
    if ( (mbcinfo->mbctype[(unsigned __int8)v7 + 1] & 4) != 0 )
    {
      if ( *v8 )
      {
        v10 = __crtLCMapStringA(
                &Locale,
                mbcinfo->mblcid,
                0x200u,
                (int)(v8 + 0xFFFFFFFF),
                2,
                (int)&v23,
                2,
                mbcinfo->mbcodepage,
                1);
        if ( v10 == 1 )
        {
          v11 = v23;
        }
        else
        {
          if ( v10 != 2 )
            goto LABEL_37;
          v11 = v24 + (v23 << 8);
        }
        ++Str1a;
        v9 = v11;
        mbcinfo = Locale.mbcinfo;
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v12 = v7;
      v13 = (char *)mbcinfo + v7;
      v9 = (v13[0x1D] & 0x10) != 0 ? (unsigned __int8)v13[0x11D] : v12;
    }
    v14 = (unsigned __int8)*v5++;
    if ( (mbcinfo->mbctype[(unsigned __int8)v14 + 1] & 4) != 0 )
      break;
    v18 = v14;
    v19 = (char *)mbcinfo + v14;
    if ( (v19[0x1D] & 0x10) != 0 )
      v15 = (unsigned __int8)v19[0x11D];
    else
      v15 = v18;
LABEL_34:
    if ( v15 != v9 )
    {
      result = v15 < v9 ? 1 : 0xFFFFFFFF;
      if ( v22 )
        *(_DWORD *)(v21 + 0x70) &= ~2u;
      return result;
    }
    if ( !v9 )
    {
      if ( v22 )
        *(_DWORD *)(v21 + 0x70) &= ~2u;
      return 0;
    }
    v3 = Str1a;
  }
  if ( !*v5 )
  {
    v15 = 0;
    goto LABEL_34;
  }
  v16 = __crtLCMapStringA(
          &Locale,
          mbcinfo->mblcid,
          0x200u,
          (int)(v5 + 0xFFFFFFFF),
          2,
          (int)&v23,
          2,
          mbcinfo->mbcodepage,
          1);
  if ( v16 == 1 )
  {
    v17 = v23;
LABEL_30:
    v15 = v17;
    mbcinfo = Locale.mbcinfo;
    ++v5;
    goto LABEL_34;
  }
  if ( v16 == 2 )
  {
    v17 = v24 + (v23 << 8);
    goto LABEL_30;
  }
LABEL_37:
  *_errno() = 0x16;
  if ( v22 )
    *(_DWORD *)(v21 + 0x70) &= ~2u;
  return 0x7FFFFFFF;
}
