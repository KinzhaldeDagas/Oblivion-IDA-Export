unsigned int __cdecl strtoxl(struct localeinfo_struct *a1, const char *a2, const char **a3, unsigned int a4, int a5)
{
  pthreadlocinfo locinfo; // ecx
  char v7; // bl
  const char *i; // edi
  int v9; // eax
  _BYTE *v10; // edi
  const unsigned __int16 *pctype; // esi
  unsigned int v12; // eax
  unsigned __int16 v13; // cx
  unsigned int v14; // ecx
  int v15; // ecx
  const char *v16; // edi
  struct localeinfo_struct Locale; // [esp+8h] [ebp-14h] BYREF
  int v18; // [esp+10h] [ebp-Ch]
  char v19; // [esp+14h] [ebp-8h]
  unsigned int v20; // [esp+18h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a1);
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && ((int)a4 < 2 || (int)a4 > 0x24) )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    if ( v19 )
      *(_DWORD *)(v18 + 0x70) &= ~2u;
    return 0;
  }
  locinfo = Locale.locinfo;
  v7 = *a2;
  v20 = 0;
  for ( i = a2 + 1; ; ++i )
  {
    if ( locinfo->mb_cur_max <= 1 )
    {
      v9 = locinfo->pctype[(unsigned __int8)v7] & 8;
    }
    else
    {
      v9 = _isctype_l((unsigned __int8)v7, 8, (_locale_t)&Locale);
      locinfo = Locale.locinfo;
    }
    if ( !v9 )
      break;
    v7 = *i;
  }
  if ( v7 == 0x2D )
  {
    a5 |= 2u;
  }
  else if ( v7 != 0x2B )
  {
    goto LABEL_20;
  }
  v7 = *i++;
LABEL_20:
  if ( !a4 )
  {
    if ( v7 != 0x30 )
    {
      a4 = 0xA;
      goto LABEL_32;
    }
    if ( *i != 0x78 && *i != 0x58 )
    {
      a4 = 8;
      goto LABEL_32;
    }
    a4 = 0x10;
    goto LABEL_29;
  }
  if ( a4 == 0x10 && v7 == 0x30 )
  {
LABEL_29:
    if ( *i == 0x78 || *i == 0x58 )
    {
      v10 = i + 1;
      v7 = *v10;
      i = v10 + 1;
    }
  }
LABEL_32:
  pctype = locinfo->pctype;
  v12 = 0xFFFFFFFF / a4;
  while ( 1 )
  {
    v13 = pctype[(unsigned __int8)v7];
    if ( (v13 & 4) != 0 )
    {
      v14 = v7 - 0x30;
    }
    else
    {
      if ( (v13 & 0x103) == 0 )
        break;
      v15 = v7;
      if ( (unsigned __int8)(v7 - 0x61) <= 0x19u )
        v15 = v7 - 0x20;
      v14 = v15 - 0x37;
    }
    if ( v14 >= a4 )
      break;
    a5 |= 8u;
    if ( v20 < v12 || v20 == v12 && v14 <= 0xFFFFFFFF % a4 )
    {
      v20 = v14 + a4 * v20;
    }
    else
    {
      a5 |= 4u;
      if ( !a3 )
        break;
    }
    v7 = *i++;
  }
  v16 = i + 0xFFFFFFFF;
  if ( (a5 & 8) != 0 )
  {
    if ( (a5 & 4) != 0 || (a5 & 1) == 0 && ((a5 & 2) != 0 && v20 > 0x80000000 || (a5 & 2) == 0 && v20 > 0x7FFFFFFF) )
    {
      *_errno() = 0x22;
      if ( (a5 & 1) != 0 )
        v20 = 0xFFFFFFFF;
      else
        v20 = ((a5 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 )
      v16 = a2;
    v20 = 0;
  }
  if ( a3 )
    *a3 = v16;
  if ( (a5 & 2) != 0 )
    v20 = -v20;
  if ( v19 )
    *(_DWORD *)(v18 + 0x70) &= ~2u;
  return v20;
}
