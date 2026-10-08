double __cdecl _atof_l(const char *String, _locale_t Locale)
{
  int v2; // edi
  const char *v3; // esi
  double result; // st7
  int v6; // eax
  int v7[6]; // [esp+8h] [ebp-28h] BYREF
  struct localeinfo_struct v8; // [esp+20h] [ebp-10h] BYREF
  int v9; // [esp+28h] [ebp-8h]
  char v10; // [esp+2Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)Locale); /*0x985f17*/
  v3 = String; /*0x985f1c*/
  if ( String )
  {
    while ( v8.locinfo->mb_cur_max <= 1
          ? v8.locinfo->pctype[*(unsigned __int8 *)v3] & 8
          : _isctype_l(*(unsigned __int8 *)v3, 8, (_locale_t)&v8) )
      ++v3; /*0x985f81*/
    v6 = strlen(v3); /*0x985f8b*/
    result = *((double *)_fltin2(v7, (int)v3, v6, 0, 0, (int)&v8) + 2); /*0x985f9c*/
    if ( v10 ) /*0x985fa5*/
      *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x985faa*/
  }
  else
  {
    *_errno() = 0x16; /*0x985f2f*/
    _invalid_parameter(0, v2, 0); /*0x985f35*/
    if ( v10 ) /*0x985f40*/
      *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x985f45*/
    return 0.0; /*0x985f49*/
  }
  return result; /*0x985fae*/
}
