int __cdecl _isctype_l(int C, int Type, _locale_t Locale)
{
  __int16 v3; // bx
  int v4; // eax
  int v5; // ecx
  int result; // eax
  struct localeinfo_struct v7; // [esp+4h] [ebp-18h] BYREF
  int v8; // [esp+Ch] [ebp-10h]
  char v9; // [esp+10h] [ebp-Ch]
  CHAR MultiByteStr; // [esp+14h] [ebp-8h] BYREF
  char v11; // [esp+15h] [ebp-7h]
  char v12; // [esp+16h] [ebp-6h]
  WORD CharType; // [esp+18h] [ebp-4h] BYREF
  int Ca; // [esp+24h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, (struct localeinfo_struct *)Locale); /*0x99080a*/
  v3 = C; /*0x99080f*/
  if ( (unsigned int)(C + 1) <= 0x100 ) /*0x99081a*/
  {
    v4 = v7.locinfo->pctype[C]; /*0x990825*/
    goto LABEL_11; /*0x990829*/
  }
  Ca = C >> 8; /*0x99082e*/
  if ( _isleadbyte_l(HIBYTE(v3), (_locale_t)&v7) ) /*0x99083f*/
  {
    MultiByteStr = Ca; /*0x99084f*/
    v11 = v3; /*0x990852*/
    v12 = 0; /*0x990855*/
    v5 = 2; /*0x990859*/
  }
  else
  {
    MultiByteStr = v3; /*0x99085e*/
    v11 = 0; /*0x990861*/
    v5 = 1; /*0x990865*/
  }
  if ( __crtGetStringTypeA( /*0x990880*/
         &v7,
         1u,
         &MultiByteStr,
         (char *)v5,
         &CharType,
         v7.locinfo->lc_codepage,
         v7.locinfo->lc_handle[2],
         1) )
  {
    v4 = CharType; /*0x99089c*/
LABEL_11:
    result = Type & v4; /*0x9908a0*/
    if ( v9 ) /*0x9908a7*/
      *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x9908ac*/
    return result; /*0x9908ac*/
  }
  if ( v9 ) /*0x99088f*/
    *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x990894*/
  return 0; /*0x9908b0*/
}
