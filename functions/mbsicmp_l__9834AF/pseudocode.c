int __usercall _mbsicmp_l@<eax>(int a1@<ebx>, int a2@<edi>, char *Str1, char *Str2, struct localeinfo_struct *a5)
{
  char *v5; // edx
  int result; // eax
  char *v7; // ebx
  pthreadmbcinfo mbcinfo; // eax
  unsigned __int16 v9; // cx
  char *v10; // edx
  unsigned __int16 v11; // si
  int v12; // eax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // dx
  char *v15; // ecx
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // cx
  int v18; // eax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // dx
  char *v21; // ecx
  struct localeinfo_struct Locale; // [esp+4h] [ebp-14h] BYREF
  int v23; // [esp+Ch] [ebp-Ch]
  char v24; // [esp+10h] [ebp-8h]
  unsigned __int8 v25; // [esp+14h] [ebp-4h] BYREF
  unsigned __int8 v26; // [esp+15h] [ebp-3h]
  char *Str1a; // [esp+20h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a5); /*0x9834bc*/
  v5 = Str1; /*0x9834c1*/
  if ( !Str1 ) /*0x9834c8*/
  {
    *_errno() = 0x16; /*0x9834d4*/
    _invalid_parameter(a1, a2, 0); /*0x9834da*/
    if ( v24 ) /*0x9834e6*/
      *(_DWORD *)(v23 + 0x70) &= ~2u; /*0x9834eb*/
    return 0x7FFFFFFF; /*0x9834f4*/
  }
  v7 = Str2; /*0x9834fa*/
  if ( !Str2 ) /*0x9834ff*/
  {
    *_errno() = 0x16; /*0x98350b*/
    _invalid_parameter(0, a2, 0); /*0x983511*/
    if ( v24 ) /*0x98351d*/
      *(_DWORD *)(v23 + 0x70) &= ~2u; /*0x983522*/
    return 0x7FFFFFFF; /*0x98352b*/
  }
  mbcinfo = Locale.mbcinfo; /*0x983530*/
  if ( !Locale.mbcinfo->ismbcodepage ) /*0x983533*/
  {
    result = _stricmp_l(Str1, Str2, (_locale_t)&Locale); /*0x98353e*/
    if ( v24 ) /*0x98354a*/
      *(_DWORD *)(v23 + 0x70) &= ~2u; /*0x983553*/
    return result; /*0x983557*/
  }
  while ( 1 )
  {
    v9 = (unsigned __int8)*v5; /*0x983566*/
    v10 = v5 + 1; /*0x98356c*/
    Str1a = v10; /*0x983572*/
    if ( (mbcinfo->mbctype[(unsigned __int8)v9 + 1] & 4) != 0 )
    {
      if ( *v10 ) /*0x983577*/
      {
        v12 = __crtLCMapStringA( /*0x983597*/
                &Locale,
                mbcinfo->mblcid,
                0x200u,
                v10 + 0xFFFFFFFF,
                2,
                (int)&v25,
                2,
                mbcinfo->mbcodepage);
        if ( v12 == 1 ) /*0x9835a2*/
        {
          v13 = v25; /*0x9835a4*/
        }
        else
        {
          if ( v12 != 2 ) /*0x9835ae*/
            goto LABEL_37; /*0x9835ae*/
          v13 = v26 + (v25 << 8); /*0x9835c2*/
        }
        ++Str1a; /*0x9835c5*/
        v11 = v13; /*0x9835c8*/
        mbcinfo = Locale.mbcinfo; /*0x9835cb*/
      }
      else
      {
        v11 = 0; /*0x98357c*/
      }
    }
    else
    {
      v14 = v9; /*0x9835d0*/
      v15 = (char *)mbcinfo + v9; /*0x9835d3*/
      v11 = (v15[0x1D] & 0x10) != 0 ? (unsigned __int8)v15[0x11D] : v14;
    }
    v16 = (unsigned __int8)*v7++; /*0x9835f0*/
    if ( (mbcinfo->mbctype[(unsigned __int8)v16 + 1] & 4) != 0 ) /*0x9835fc*/
      break; /*0x9835fc*/
    v20 = v16; /*0x983653*/
    v21 = (char *)mbcinfo + v16; /*0x983656*/
    if ( (v21[0x1D] & 0x10) != 0 ) /*0x98365d*/
      v17 = (unsigned __int8)v21[0x11D]; /*0x983667*/
    else
      v17 = v20; /*0x98366c*/
LABEL_34:
    if ( v17 != v11 )
    {
      result = v17 < v11 ? 1 : 0xFFFFFFFF;
      if ( v24 ) /*0x9836aa*/
        *(_DWORD *)(v23 + 0x70) &= ~2u; /*0x9836af*/
      return result; /*0x9836b3*/
    }
    if ( !v11 ) /*0x983677*/
    {
      if ( v24 ) /*0x9836b9*/
        *(_DWORD *)(v23 + 0x70) &= ~2u; /*0x9836be*/
      return 0; /*0x9836c2*/
    }
    v5 = Str1a; /*0x983679*/
  }
  if ( !*v7 ) /*0x9835fe*/
  {
    v17 = 0; /*0x983603*/
    goto LABEL_34; /*0x983605*/
  }
  v18 = __crtLCMapStringA(&Locale, mbcinfo->mblcid, 0x200u, v7 + 0xFFFFFFFF, 2, (int)&v25, 2, mbcinfo->mbcodepage); /*0x983620*/
  if ( v18 == 1 ) /*0x98362b*/
  {
    v19 = v25; /*0x98362d*/
LABEL_30:
    v17 = v19; /*0x98364a*/
    mbcinfo = Locale.mbcinfo; /*0x98364d*/
    ++v7; /*0x983650*/
    goto LABEL_34; /*0x983651*/
  }
  if ( v18 == 2 ) /*0x983637*/
  {
    v19 = v26 + (v25 << 8); /*0x983647*/
    goto LABEL_30; /*0x983647*/
  }
LABEL_37:
  *_errno() = 0x16; /*0x983681*/
  if ( v24 ) /*0x983690*/
    *(_DWORD *)(v23 + 0x70) &= ~2u; /*0x983695*/
  return 0x7FFFFFFF; /*0x9836c6*/
}
