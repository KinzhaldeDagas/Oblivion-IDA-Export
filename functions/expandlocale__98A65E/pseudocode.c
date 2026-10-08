char *__cdecl _expandlocale(char *Str, char *a2, rsize_t SizeInBytes, _DWORD *a4)
{
  CHAR *v4; // esi
  DWORD *v5; // eax
  _WORD *v6; // ebx
  errno_t v7; // eax
  int v8; // edx
  int v9; // ecx
  unsigned int v11; // eax
  errno_t v12; // eax
  int v13; // edx
  int v14; // ecx
  errno_t v15; // eax
  int v16; // edx
  int v17; // ecx
  rsize_t v18; // [esp-Ch] [ebp-6Ch]
  rsize_t v19; // [esp-8h] [ebp-68h]
  rsize_t v20; // [esp+0h] [ebp-60h]
  unsigned int v21; // [esp+10h] [ebp-50h]
  _DWORD *Src; // [esp+14h] [ebp-4Ch]
  char *v23; // [esp+18h] [ebp-48h]
  char *Str1; // [esp+28h] [ebp-38h]
  char v25[144]; // [esp+2Ch] [ebp-34h] BYREF

  v4 = Str; /*0x98a678*/
  v5 = _getptd() + 0x27; /*0x98a690*/
  Src = v5 + 0xA; /*0x98a698*/
  v6 = v5 + 8; /*0x98a69e*/
  v23 = (char *)(v5 + 0xB); /*0x98a6a8*/
  Str1 = (char *)v5 + 0xAF; /*0x98a6ab*/
  if ( !Str || !a2 || !(_DWORD)SizeInBytes ) /*0x98a6c2*/
    return 0; /*0x98a6c2*/
  if ( *Str == 0x43 && !Str[1] ) /*0x98a6cd*/
  {
    v7 = strcpy_s(a2, SizeInBytes, "C"); /*0x98a6de*/
    if ( v7 ) /*0x98a6ea*/
      _invoke_watson(v7, v8, v9, (int)v6, SHIDWORD(SizeInBytes), 0); /*0x98a6f1*/
    if ( HIDWORD(SizeInBytes) ) /*0x98a6fb*/
    {
      *(_DWORD *)HIDWORD(SizeInBytes) = 0; /*0x98a6fd*/
      *(_WORD *)(HIDWORD(SizeInBytes) + 4) = 0; /*0x98a704*/
    }
    if ( a4 ) /*0x98a70d*/
      *a4 = 0; /*0x98a70f*/
    return a2; /*0x98a714*/
  }
  v21 = strlen(Str); /*0x98a727*/
  if ( v21 >= 0x83 || strcmp(Str1, Str) && strcmp(v23, Str) ) /*0x98a743*/
  {
    if ( !__lc_strtolc(v25, Str) && __get_qualified_locale((int)v25, v6, v25) ) /*0x98a76c*/
    {
      *Src = (unsigned __int16)v6[2]; /*0x98a783*/
      HIDWORD(v19) = v25; /*0x98a788*/
      LODWORD(v19) = 0x83; /*0x98a789*/
      __lc_lctostr(0x83, Str1, v19); /*0x98a78d*/
      if ( !*Str || (v11 = v21, v21 >= 0x83) ) /*0x98a79f*/
      {
        v11 = 0; /*0x98a7a1*/
        v4 = EmptyString; /*0x98a7a4*/
      }
      HIDWORD(v18) = v4; /*0x98a7ab*/
      LODWORD(v18) = 0x83; /*0x98a7ac*/
      v12 = strncpy_s(v23, v18, (const char *)(v11 + 1), v20); /*0x98a7b0*/
      if ( v12 ) /*0x98a7ba*/
        _invoke_watson(v12, v13, v14, (int)v6, 0x83, 0); /*0x98a7c3*/
      goto LABEL_23; /*0x98a7ba*/
    }
    return 0; /*0x98a81e*/
  }
LABEL_23:
  if ( HIDWORD(SizeInBytes) ) /*0x98a7d2*/
    memcpy((void *)HIDWORD(SizeInBytes), v6, 6u); /*0x98a7da*/
  if ( a4 ) /*0x98a7e5*/
    memcpy(a4, Src, sizeof(_DWORD)); /*0x98a7ef*/
  v15 = strcpy_s(a2, SizeInBytes, Str1); /*0x98a800*/
  if ( v15 ) /*0x98a80a*/
    _invoke_watson(v15, v16, v17, (int)v6, 0x83, 0); /*0x98a811*/
  return Str1; /*0x98a820*/
}
