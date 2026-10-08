int __cdecl _isspace_l(int C, _locale_t Locale)
{
  int result; // eax
  struct localeinfo_struct v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale); /*0x98511e*/
  if ( v3.locinfo->mb_cur_max <= 1 ) /*0x98512d*/
    result = v3.locinfo->pctype[C] & 8; /*0x98514f*/
  else
    result = _isctype_l(C, 8, (_locale_t)&v3); /*0x985138*/
  if ( v5 ) /*0x985156*/
    *(_DWORD *)(v4 + 0x70) &= ~2u; /*0x98515b*/
  return result; /*0x98515f*/
}
