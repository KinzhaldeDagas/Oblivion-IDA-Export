int __cdecl unknown_libname_67(LCID Locale, DWORD dwMapFlags, _BYTE *a3, int cchSrc, int a5, int a6, UINT CodePage)
{
  int v7; // ecx
  int v8; // esi
  int v9; // ecx
  _BYTE *v10; // eax
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
  int v22; // [esp+10h] [ebp-10h]
  LPCSTR lpSrcStr; // [esp+14h] [ebp-Ch]
  int cchDest; // [esp+18h] [ebp-8h] BYREF

  v8 = v7;
  if ( !dword_BA9E08 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, 0, 0) )
    {
      dword_BA9E08 = 1;
    }
    else if ( GetLastError() == 0x78 )
    {
      dword_BA9E08 = 2;
    }
  }
  if ( cchSrc > 0 )
  {
    v9 = cchSrc;
    v10 = a3;
    while ( 1 )
    {
      --v9;
      if ( !*v10 )
        break;
      ++v10;
      if ( !v9 )
      {
        v9 = 0xFFFFFFFF;
        break;
      }
    }
    v11 = cchSrc - v9 - 1;
    if ( v11 < cchSrc )
      v11 = cchSrc - v9;
    cchSrc = v11;
  }
  if ( dword_BA9E08 != 2 )
    JUMPOUT(0x989681);
  lpSrcStr = 0;
  v22 = 0;
  if ( !Locale )
    Locale = *(_DWORD *)(*(_DWORD *)v8 + 0x14);
  if ( !CodePage )
    CodePage = *(_DWORD *)(*(_DWORD *)v8 + 4);
  v12 = __ansicp(Locale);
  v21 = v12;
  if ( v12 == 0xFFFFFFFF )
    goto LABEL_38;
  if ( v12 == CodePage )
    JUMPOUT(0x989946);
  v13 = (const CHAR *)__convertcp(CodePage, v12, (int)a3, (int)&cchSrc, 0, 0);
  lpSrcStr = v13;
  if ( !v13 )
LABEL_38:
    JUMPOUT(0x989983);
  v14 = LCMapStringA(Locale, dwMapFlags, v13, cchSrc, 0, 0);
  cchDest = v14;
  if ( !v14 )
    goto LABEL_40;
  if ( v14 <= 0 )
  {
    v16 = 0;
  }
  else
  {
    v15 = v14 + 8;
    if ( v15 > 0x400 )
    {
      LODWORD(v19) = v15;
      v17 = (CHAR *)malloc(v19);
      if ( v17 )
      {
        *(_DWORD *)v17 = 0xDDDD;
        v17 += 8;
      }
      v16 = v17;
    }
    else
    {
      _alloca_(SHIDWORD(v19));
      if ( &v19 == (size_t *)0xFFFFFFFC )
        goto LABEL_40;
      HIDWORD(v19) = 0xCCCC;
      v16 = (CHAR *)&v20;
    }
  }
  if ( !v16 )
LABEL_40:
    JUMPOUT(0x989960);
  _memset((int)v16, 0, cchDest);
  cchDest = LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, v16, cchDest);
  if ( cchDest )
    __convertcp(v21, CodePage, (int)v16, (int)&cchDest, a5, a6);
  return unknown_libname_67_::unknown_libname_69(Locale, dwMapFlags, a3, cchSrc, a5, a6, CodePage);
}
