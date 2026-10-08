unsigned int __usercall strtoxl@<eax>(
        int a1@<ebx>,
        struct localeinfo_struct *a2,
        const char *a3,
        const char **a4,
        int a5,
        int a6)
{
  pthreadlocinfo locinfo; // ecx
  char v8; // bl
  const char *i; // edi
  int v10; // eax
  _BYTE *v11; // edi
  const unsigned __int16 *pctype; // esi
  unsigned int v13; // eax
  unsigned __int16 v14; // cx
  unsigned int v15; // ecx
  int v16; // ecx
  const char *v17; // edi
  struct localeinfo_struct Locale; // [esp+8h] [ebp-14h] BYREF
  int v19; // [esp+10h] [ebp-Ch]
  char v20; // [esp+14h] [ebp-8h]
  unsigned int v21; // [esp+18h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a2); /*0x982979*/
  if ( a4 ) /*0x982988*/
    *a4 = a3; /*0x98298a*/
  if ( !a3 || a5 && (a5 < 2 || a5 > 0x24) ) /*0x9829cb*/
  {
    *_errno() = 0x16; /*0x98299a*/
    _invalid_parameter(a1, 0, (int)a3); /*0x9829a0*/
    if ( v20 ) /*0x9829ac*/
      *(_DWORD *)(v19 + 0x70) &= ~2u; /*0x9829b1*/
    return 0; /*0x9829b7*/
  }
  locinfo = Locale.locinfo; /*0x9829cd*/
  v8 = *a3; /*0x9829d1*/
  v21 = 0; /*0x9829d3*/
  for ( i = a3 + 1; ; ++i ) /*0x9829d6*/
  {
    if ( locinfo->mb_cur_max <= 1 ) /*0x9829e0*/
    {
      v10 = locinfo->pctype[(unsigned __int8)v8] & 8; /*0x982a06*/
    }
    else
    {
      v10 = _isctype_l((unsigned __int8)v8, 8, (_locale_t)&Locale); /*0x9829ec*/
      locinfo = Locale.locinfo; /*0x9829f1*/
    }
    if ( !v10 ) /*0x982a0b*/
      break; /*0x982a0b*/
    v8 = *i; /*0x982a0d*/
  }
  if ( v8 == 0x2D ) /*0x982a15*/
  {
    a6 |= 2u; /*0x982a17*/
  }
  else if ( v8 != 0x2B ) /*0x982a20*/
  {
    goto LABEL_20; /*0x982a20*/
  }
  v8 = *i++; /*0x982a22*/
LABEL_20:
  if ( !a5 ) /*0x982a44*/
  {
    if ( v8 != 0x30 ) /*0x982a49*/
    {
      a5 = 0xA; /*0x982a4b*/
      goto LABEL_32; /*0x982a52*/
    }
    if ( *i != 0x78 && *i != 0x58 ) /*0x982a5c*/
    {
      a5 = 8; /*0x982a5e*/
      goto LABEL_32; /*0x982a65*/
    }
    a5 = 0x10; /*0x982a67*/
    goto LABEL_29; /*0x982a6e*/
  }
  if ( a5 == 0x10 && v8 == 0x30 ) /*0x982a78*/
  {
LABEL_29:
    if ( *i == 0x78 || *i == 0x58 ) /*0x982a82*/
    {
      v11 = i + 1; /*0x982a84*/
      v8 = *v11; /*0x982a85*/
      i = v11 + 1; /*0x982a87*/
    }
  }
LABEL_32:
  pctype = locinfo->pctype; /*0x982a88*/
  v13 = 0xFFFFFFFF / a5; /*0x982a93*/
  while ( 1 ) /*0x982a99*/
  {
    v14 = pctype[(unsigned __int8)v8]; /*0x982a99*/
    if ( (v14 & 4) != 0 ) /*0x982aa0*/
    {
      v15 = v8 - 0x30; /*0x982aa5*/
    }
    else
    {
      if ( (v14 & 0x103) == 0 ) /*0x982aaf*/
        break; /*0x982aaf*/
      v16 = v8; /*0x982ab9*/
      if ( (unsigned __int8)(v8 - 0x61) <= 0x19u ) /*0x982abc*/
        v16 = v8 - 0x20; /*0x982abe*/
      v15 = v16 - 0x37; /*0x982ac1*/
    }
    if ( v15 >= a5 ) /*0x982ac7*/
      break; /*0x982ac7*/
    a6 |= 8u; /*0x982ac9*/
    if ( v21 < v13 || v21 == v13 && v15 <= 0xFFFFFFFF % a5 ) /*0x982ad6*/
    {
      v21 = v15 + a5 * v21; /*0x982b02*/
    }
    else
    {
      a6 |= 4u; /*0x982ad8*/
      if ( !a4 ) /*0x982ae0*/
        break; /*0x982ae0*/
    }
    v8 = *i++; /*0x982b05*/
  }
  v17 = i + 0xFFFFFFFF; /*0x982ae2*/
  if ( (a6 & 8) != 0 ) /*0x982ae8*/
  {
    if ( (a6 & 4) != 0 || (a6 & 1) == 0 && ((a6 & 2) != 0 && v21 > 0x80000000 || (a6 & 2) == 0 && v21 > 0x7FFFFFFF) ) /*0x982b2c*/
    {
      *_errno() = 0x22; /*0x982b37*/
      if ( (a6 & 1) != 0 ) /*0x982b3d*/
        v21 = 0xFFFFFFFF; /*0x982b3f*/
      else
        v21 = ((a6 & 2) != 0) + 0x7FFFFFFF; /*0x982b52*/
    }
  }
  else
  {
    if ( a4 ) /*0x982aee*/
      v17 = a3; /*0x982af0*/
    v21 = 0; /*0x982af3*/
  }
  if ( a4 ) /*0x982b5a*/
    *a4 = v17; /*0x982b5c*/
  if ( (a6 & 2) != 0 ) /*0x982b62*/
    v21 = -v21; /*0x982b64*/
  if ( v20 ) /*0x982b6b*/
    *(_DWORD *)(v19 + 0x70) &= ~2u; /*0x982b70*/
  return v21; /*0x982b92*/
}
