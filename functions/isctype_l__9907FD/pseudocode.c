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

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, (struct localeinfo_struct *)Locale);
  v3 = C;
  if ( (unsigned int)(C + 1) <= 0x100 )
  {
    v4 = v7.locinfo->pctype[C];
    goto LABEL_11;
  }
  Ca = C >> 8;
  if ( _isleadbyte_l(HIBYTE(v3), (_locale_t)&v7) )
  {
    MultiByteStr = Ca;
    v11 = v3;
    v12 = 0;
    v5 = 2;
  }
  else
  {
    MultiByteStr = v3;
    v11 = 0;
    v5 = 1;
  }
  if ( __crtGetStringTypeA(
         &v7,
         1u,
         &MultiByteStr,
         (char *)v5,
         &CharType,
         v7.locinfo->lc_codepage,
         v7.locinfo->lc_handle[2],
         1) )
  {
    v4 = CharType;
LABEL_11:
    result = Type & v4;
    if ( v9 )
      *(_DWORD *)(v8 + 0x70) &= ~2u;
    return result;
  }
  if ( v9 )
    *(_DWORD *)(v8 + 0x70) &= ~2u;
  return 0;
}
