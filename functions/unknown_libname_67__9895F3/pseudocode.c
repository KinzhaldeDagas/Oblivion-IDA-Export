int __cdecl unknown_libname_67(LCID Locale, DWORD dwMapFlags, char *a3, int cchSrc, CHAR *a5, int a6, UINT CodePage)
{
  int v7; // ecx
  int v8; // esi
  int v9; // ecx
  char *v10; // eax
  int v11; // eax
  UINT v12; // eax
  const CHAR *v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  CHAR *v16; // edi
  CHAR *v17; // eax
  size_t v19; // [esp-4h] [ebp-24h] BYREF
  int v20; // [esp+8h] [ebp-18h] BYREF
  UINT v21; // [esp+Ch] [ebp-14h]
  void *v22; // [esp+10h] [ebp-10h]
  LPCSTR lpSrcStr; // [esp+14h] [ebp-Ch]
  int cchDest; // [esp+18h] [ebp-8h] BYREF
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v8 = v7; /*0x98960e*/
  if ( !dword_BA9E00[2] ) /*0x989610*/
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, 0, 0) ) /*0x989623*/
    {
      dword_BA9E00[2] = 1; /*0x98962d*/
    }
    else if ( GetLastError() == 0x78 ) /*0x98963e*/
    {
      dword_BA9E00[2] = 2; /*0x989640*/
    }
  }
  if ( cchSrc > 0 ) /*0x98964d*/
  {
    v9 = cchSrc; /*0x98964f*/
    v10 = a3; /*0x989652*/
    while ( 1 ) /*0x989655*/
    {
      --v9; /*0x989655*/
      if ( !*v10 ) /*0x989656*/
        break; /*0x989656*/
      ++v10; /*0x98965a*/
      if ( !v9 ) /*0x98965d*/
      {
        v9 = 0xFFFFFFFF; /*0x98965f*/
        break; /*0x98965f*/
      }
    }
    v11 = cchSrc - v9 - 1; /*0x989662*/
    if ( v11 < cchSrc ) /*0x98966b*/
      v11 = cchSrc - v9; /*0x98966d*/
    cchSrc = v11; /*0x98966e*/
  }
  if ( dword_BA9E00[2] != 2 ) /*0x989679*/
    JUMPOUT(0x989681); /*0x989681*/
  lpSrcStr = 0; /*0x98982d*/
  v22 = 0; /*0x989830*/
  if ( !Locale ) /*0x989833*/
    Locale = *(_DWORD *)(*(_DWORD *)v8 + 0x14); /*0x98983a*/
  if ( !CodePage ) /*0x989840*/
    CodePage = *(_DWORD *)(*(_DWORD *)v8 + 4); /*0x989847*/
  v12 = __ansicp(Locale); /*0x98984d*/
  v21 = v12; /*0x989856*/
  if ( v12 == 0xFFFFFFFF ) /*0x989859*/
    goto LABEL_38; /*0x989859*/
  if ( v12 == CodePage ) /*0x989865*/
    JUMPOUT(0x989946); /*0x989946*/
  v13 = (const CHAR *)__convertcp(CodePage, v12, a3, &cchSrc, 0, 0); /*0x989878*/
  lpSrcStr = v13; /*0x989882*/
  if ( !v13 ) /*0x989885*/
LABEL_38:
    JUMPOUT(0x989983); /*0x989983*/
  v14 = LCMapStringA(Locale, dwMapFlags, v13, cchSrc, 0, 0); /*0x989899*/
  cchDest = v14; /*0x98989d*/
  if ( !v14 ) /*0x9898a0*/
    goto LABEL_40; /*0x9898a0*/
  if ( v14 <= 0 ) /*0x9898a9*/
  {
    v16 = 0; /*0x9898e8*/
  }
  else
  {
    v15 = v14 + 8; /*0x9898b0*/
    if ( v15 > 0x400 ) /*0x9898b8*/
    {
      LODWORD(v19) = v15; /*0x9898d0*/
      v17 = (CHAR *)malloc(v19); /*0x9898d1*/
      if ( v17 ) /*0x9898d9*/
      {
        *(_DWORD *)v17 = 0xDDDD; /*0x9898db*/
        v17 += 8; /*0x9898e1*/
      }
      v16 = v17; /*0x9898e4*/
    }
    else
    {
      _alloca_(v15); /*0x9898ba*/
      if ( &v19 == (size_t *)0xFFFFFFFC ) /*0x9898c3*/
        goto LABEL_40; /*0x9898c3*/
      HIDWORD(v19) = 0xCCCC; /*0x9898c5*/
      v16 = (CHAR *)&v20; /*0x9898cb*/
    }
  }
  if ( !v16 ) /*0x9898ec*/
LABEL_40:
    JUMPOUT(0x989960); /*0x989960*/
  _memset((int)v16, 0, cchDest); /*0x9898f3*/
  cchDest = LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, v16, cchDest); /*0x98990f*/
  if ( !cchDest ) /*0x989912*/
    return unknown_libname_67_::unknown_libname_69(0, (int)&savedregs, 0); /*0x989916*/
  v22 = __convertcp(v21, CodePage, v16, &cchDest, a5, a6); /*0x989930*/
  return unknown_libname_67_::unknown_libname_69(0, (int)&savedregs, v22 != 0 ? cchDest : 0);
}
