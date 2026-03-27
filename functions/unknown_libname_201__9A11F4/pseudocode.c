int __fastcall unknown_libname_201(
        int a1,
        const CHAR *a2,
        LCID Locale,
        DWORD dwCmpFlags,
        int cbMultiByte,
        const CHAR *a6,
        int a7,
        UINT CodePage)
{
  unsigned int v10; // ecx
  const CHAR *v11; // eax
  int v12; // edx
  LPCSTR v13; // eax
  unsigned int v14; // ecx
  BYTE *LeadByte; // eax
  unsigned __int8 v16; // dl
  BYTE *v17; // eax
  unsigned __int8 v18; // dl
  int v19; // eax
  int v20; // ebx
  WCHAR_0 *v21; // eax
  int v22; // eax
  int v23; // ebx
  WCHAR *v24; // edi
  WCHAR *v25; // eax
  size_t v27; // [esp-4h] [ebp-3Ch] BYREF
  int v28; // [esp+8h] [ebp-30h] BYREF
  int cchCount1; // [esp+Ch] [ebp-2Ch]
  int v30; // [esp+10h] [ebp-28h]
  LPCSTR lpMultiByteStr; // [esp+14h] [ebp-24h]
  LPWSTR lpWideCharStr; // [esp+18h] [ebp-20h]
  LPCSTR v33; // [esp+1Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+20h] [ebp-18h] BYREF

  lpMultiByteStr = a2;
  v33 = a6;
  if ( !dword_BAA87C )
  {
    if ( CompareStringW(0, 0, &SrcStr, 1, &SrcStr, 1) )
    {
      dword_BAA87C = 1;
    }
    else if ( GetLastError() == 0x78 )
    {
      dword_BAA87C = 2;
    }
  }
  if ( cbMultiByte <= 0 )
  {
    if ( cbMultiByte < (int)0xFFFFFFFF )
      goto LABEL_78;
  }
  else
  {
    v10 = cbMultiByte;
    v11 = a2;
    while ( 1 )
    {
      --v10;
      if ( !*v11 )
        break;
      ++v11;
      if ( !v10 )
      {
        v10 = 0xFFFFFFFF;
        break;
      }
    }
    cbMultiByte += 0xFFFFFFFF - v10;
  }
  v12 = a7;
  if ( a7 <= 0 )
  {
    if ( a7 < (int)0xFFFFFFFF )
      goto LABEL_78;
  }
  else
  {
    v13 = v33;
    v14 = a7;
    while ( 1 )
    {
      --v14;
      if ( !*v13 )
        break;
      ++v13;
      if ( !v14 )
      {
        v14 = 0xFFFFFFFF;
        break;
      }
    }
    v12 = 0xFFFFFFFF - v14 + a7;
    a7 = v12;
  }
  if ( dword_BAA87C == 2 || !dword_BAA87C )
    JUMPOUT(0x9A14B6);
  if ( dword_BAA87C != 1 )
    goto LABEL_78;
  v30 = 0;
  if ( !CodePage )
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4);
  if ( cbMultiByte && v12 )
    goto LABEL_51;
  if ( cbMultiByte == v12 )
  {
LABEL_29:
    LODWORD(v27) = 2;
    goto LABEL_78;
  }
  if ( v12 > 1 )
    goto LABEL_78;
  if ( cbMultiByte > 1 )
  {
LABEL_32:
    LODWORD(v27) = 3;
    goto LABEL_78;
  }
  if ( !GetCPInfo(CodePage, (LPCPINFO)&CPInfo) )
LABEL_78:
    JUMPOUT(0x9A156B);
  if ( cbMultiByte > 0 )
  {
    if ( CPInfo.MaxCharSize >= 2 )
    {
      LeadByte = CPInfo.LeadByte;
      if ( CPInfo.LeadByte[0] )
      {
        while ( 1 )
        {
          v16 = LeadByte[1];
          if ( !v16 )
            break;
          if ( (unsigned int)*a2 >= *LeadByte && (unsigned int)*a2 <= v16 )
            goto LABEL_29;
          LeadByte += 2;
          if ( !*LeadByte )
            goto LABEL_32;
        }
      }
    }
    goto LABEL_32;
  }
  if ( a7 > 0 )
  {
    if ( CPInfo.MaxCharSize >= 2 )
    {
      v17 = CPInfo.LeadByte;
      if ( CPInfo.LeadByte[0] )
      {
        while ( 1 )
        {
          v18 = v17[1];
          if ( !v18 )
            break;
          if ( (unsigned int)*v33 >= *v17 && (unsigned int)*v33 <= v18 )
            goto LABEL_29;
          v17 += 2;
          if ( !*v17 )
            goto LABEL_78;
        }
      }
    }
    goto LABEL_78;
  }
LABEL_51:
  v19 = MultiByteToWideChar(CodePage, 9u, a2, cbMultiByte, 0, 0);
  v20 = v19;
  cchCount1 = v19;
  if ( !v19 )
    goto LABEL_78;
  if ( v19 > 0 && 0xFFFFFFE0 / v19 >= 2 )
  {
    if ( (unsigned int)(2 * v19 + 8) > 0x400 )
    {
      LODWORD(v27) = 2 * v19 + 8;
      v21 = (WCHAR_0 *)malloc(v27);
      if ( v21 )
      {
        *(_DWORD *)v21 = 0xDDDD;
        goto LABEL_59;
      }
    }
    else
    {
      _alloca_(SHIDWORD(v27));
      v21 = (WCHAR_0 *)&v27 + 2;
      if ( &v27 != (size_t *)0xFFFFFFFC )
      {
        HIDWORD(v27) = 0xCCCC;
LABEL_59:
        v21 += 4;
      }
    }
    lpWideCharStr = v21;
    goto LABEL_62;
  }
  lpWideCharStr = 0;
LABEL_62:
  if ( !lpWideCharStr )
    goto LABEL_78;
  if ( !MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, lpWideCharStr, v20) )
    return unknown_libname_201_::unknown_libname_202(Locale, dwCmpFlags, cbMultiByte, a6, a7, CodePage);
  v22 = MultiByteToWideChar(CodePage, 9u, v33, a7, 0, 0);
  v23 = v22;
  if ( !v22 )
    return unknown_libname_201_::unknown_libname_202(Locale, dwCmpFlags, cbMultiByte, a6, a7, CodePage);
  if ( v22 <= 0 || 0xFFFFFFE0 / v22 < 2 )
  {
    v24 = 0;
  }
  else if ( (unsigned int)(2 * v22 + 8) > 0x400 )
  {
    LODWORD(v27) = 2 * v22 + 8;
    v25 = (WCHAR *)malloc(v27);
    if ( v25 )
    {
      *(_DWORD *)v25 = 0xDDDD;
      v25 += 4;
    }
    v24 = v25;
  }
  else
  {
    _alloca_(SHIDWORD(v27));
    if ( &v27 == (size_t *)0xFFFFFFFC )
      return unknown_libname_201_::unknown_libname_202(Locale, dwCmpFlags, cbMultiByte, a6, a7, CodePage);
    HIDWORD(v27) = 0xCCCC;
    v24 = (WCHAR *)&v28;
  }
  if ( !v24 )
    return unknown_libname_201_::unknown_libname_202(Locale, dwCmpFlags, cbMultiByte, a6, a7, CodePage);
  if ( MultiByteToWideChar(CodePage, 1u, v33, a7, v24, v23) )
    v30 = CompareStringW(Locale, dwCmpFlags, lpWideCharStr, cchCount1, v24, v23);
  _freea(v24);
  return unknown_libname_201_::unknown_libname_202(Locale, dwCmpFlags, cbMultiByte, a6, a7, CodePage);
}
