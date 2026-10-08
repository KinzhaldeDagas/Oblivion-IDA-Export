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
  int v10; // ecx
  const CHAR *v11; // eax
  int v12; // edx
  LPCSTR v13; // eax
  int v14; // ecx
  BYTE *LeadByte; // eax
  unsigned __int8 v16; // dl
  BYTE *v17; // eax
  unsigned __int8 v18; // dl
  int v19; // eax
  int v20; // ebx
  unsigned int v21; // eax
  WCHAR_0 *v22; // eax
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // eax
  WCHAR *v26; // edi
  WCHAR *v27; // eax
  size_t v29; // [esp-4h] [ebp-3Ch] BYREF
  int v30; // [esp+8h] [ebp-30h] BYREF
  int cchCount1; // [esp+Ch] [ebp-2Ch]
  int v32; // [esp+10h] [ebp-28h]
  LPCSTR lpMultiByteStr; // [esp+14h] [ebp-24h]
  LPWSTR lpWideCharStr; // [esp+18h] [ebp-20h]
  LPCSTR v35; // [esp+1Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+20h] [ebp-18h] BYREF
  int savedregs; // [esp+38h] [ebp+0h] BYREF

  lpMultiByteStr = a2; /*0x9a1216*/
  v35 = a6; /*0x9a1219*/
  if ( !dword_BA9E10[0x29B] ) /*0x9a121c*/
  {
    if ( CompareStringW(0, 0, &SrcStr, 1, &SrcStr, 1) ) /*0x9a122b*/
    {
      dword_BA9E10[0x29B] = 1; /*0x9a1235*/
    }
    else if ( GetLastError() == 0x78 ) /*0x9a124a*/
    {
      dword_BA9E10[0x29B] = 2; /*0x9a124c*/
    }
  }
  if ( cbMultiByte <= 0 ) /*0x9a1259*/
  {
    if ( cbMultiByte < (int)0xFFFFFFFF ) /*0x9a12a0*/
      goto LABEL_78; /*0x9a12a0*/
  }
  else
  {
    v10 = cbMultiByte; /*0x9a125b*/
    v11 = a2; /*0x9a125e*/
    while ( 1 ) /*0x9a1260*/
    {
      --v10; /*0x9a1260*/
      if ( !*v11 ) /*0x9a1261*/
        break; /*0x9a1261*/
      ++v11; /*0x9a1266*/
      if ( !v10 ) /*0x9a1269*/
      {
        v10 = 0xFFFFFFFF; /*0x9a126b*/
        break; /*0x9a126b*/
      }
    }
    cbMultiByte += 0xFFFFFFFF - v10; /*0x9a126e*/
  }
  v12 = a7; /*0x9a1276*/
  if ( a7 <= 0 ) /*0x9a127b*/
  {
    if ( a7 < (int)0xFFFFFFFF ) /*0x9a12ac*/
      goto LABEL_78; /*0x9a12ac*/
  }
  else
  {
    v13 = v35; /*0x9a127d*/
    v14 = a7; /*0x9a1280*/
    while ( 1 ) /*0x9a1282*/
    {
      --v14; /*0x9a1282*/
      if ( !*v13 ) /*0x9a1283*/
        break; /*0x9a1283*/
      ++v13; /*0x9a1288*/
      if ( !v14 ) /*0x9a128b*/
      {
        v14 = 0xFFFFFFFF; /*0x9a128d*/
        break; /*0x9a128d*/
      }
    }
    v12 = 0xFFFFFFFF - v14 + a7; /*0x9a1290*/
    a7 = v12; /*0x9a1297*/
  }
  if ( dword_BA9E10[0x29B] == 2 || !dword_BA9E10[0x29B] ) /*0x9a12bf*/
    JUMPOUT(0x9A14B6); /*0x9a14b6*/
  if ( dword_BA9E10[0x29B] != 1 ) /*0x9a12ca*/
    goto LABEL_78; /*0x9a12ca*/
  v32 = 0; /*0x9a12cf*/
  if ( !CodePage ) /*0x9a12d2*/
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4); /*0x9a12d9*/
  if ( cbMultiByte && v12 ) /*0x9a12e3*/
    goto LABEL_51; /*0x9a12e3*/
  if ( cbMultiByte == v12 ) /*0x9a12ec*/
  {
LABEL_29:
    LODWORD(v29) = 2; /*0x9a12ee*/
    goto LABEL_78; /*0x9a12f1*/
  }
  if ( v12 > 1 ) /*0x9a12f8*/
    goto LABEL_78; /*0x9a12f8*/
  if ( cbMultiByte > 1 ) /*0x9a1301*/
  {
LABEL_32:
    LODWORD(v29) = 3; /*0x9a1303*/
    goto LABEL_78; /*0x9a1305*/
  }
  if ( !GetCPInfo(CodePage, (LPCPINFO)&CPInfo) ) /*0x9a130e*/
LABEL_78:
    JUMPOUT(0x9A156B); /*0x9a156b*/
  if ( cbMultiByte > 0 ) /*0x9a131b*/
  {
    if ( CPInfo.MaxCharSize >= 2 ) /*0x9a1321*/
    {
      LeadByte = CPInfo.LeadByte; /*0x9a1327*/
      if ( CPInfo.LeadByte[0] ) /*0x9a132a*/
      {
        while ( 1 ) /*0x9a132c*/
        {
          v16 = LeadByte[1]; /*0x9a132c*/
          if ( !v16 ) /*0x9a1331*/
            break; /*0x9a1331*/
          if ( (unsigned int)*a2 >= *LeadByte && (unsigned int)*a2 <= v16 ) /*0x9a133b*/
            goto LABEL_29; /*0x9a133b*/
          LeadByte += 2; /*0x9a133e*/
          if ( !*LeadByte ) /*0x9a133f*/
            goto LABEL_32; /*0x9a1342*/
        }
      }
    }
    goto LABEL_32; /*0x9a1331*/
  }
  if ( a7 > 0 ) /*0x9a1349*/
  {
    if ( CPInfo.MaxCharSize >= 2 ) /*0x9a134f*/
    {
      v17 = CPInfo.LeadByte; /*0x9a135d*/
      if ( CPInfo.LeadByte[0] ) /*0x9a1360*/
      {
        while ( 1 ) /*0x9a1362*/
        {
          v18 = v17[1]; /*0x9a1362*/
          if ( !v18 ) /*0x9a1367*/
            break; /*0x9a1367*/
          if ( (unsigned int)*v35 >= *v17 && (unsigned int)*v35 <= v18 ) /*0x9a1374*/
            goto LABEL_29; /*0x9a1374*/
          v17 += 2; /*0x9a137b*/
          if ( !*v17 ) /*0x9a137c*/
            goto LABEL_78; /*0x9a137f*/
        }
      }
    }
    goto LABEL_78; /*0x9a1367*/
  }
LABEL_51:
  v19 = MultiByteToWideChar(CodePage, 9u, a2, cbMultiByte, 0, 0); /*0x9a1383*/
  v20 = v19; /*0x9a1396*/
  cchCount1 = v19; /*0x9a139a*/
  if ( !v19 ) /*0x9a139d*/
    goto LABEL_78; /*0x9a139d*/
  if ( v19 > 0 && 0xFFFFFFE0 / v19 >= 2 ) /*0x9a13b6*/
  {
    v21 = 2 * v19 + 8; /*0x9a13b8*/
    if ( v21 > 0x400 ) /*0x9a13be*/
    {
      LODWORD(v29) = 2 * v20 + 8; /*0x9a13d3*/
      v22 = (WCHAR_0 *)malloc(v29); /*0x9a13d4*/
      if ( v22 ) /*0x9a13dc*/
      {
        *(_DWORD *)v22 = 0xDDDD; /*0x9a13de*/
        goto LABEL_59; /*0x9a13de*/
      }
    }
    else
    {
      _alloca_(v21); /*0x9a13c0*/
      v22 = (WCHAR_0 *)&v29 + 2; /*0x9a13c5*/
      if ( &v29 != (size_t *)0xFFFFFFFC ) /*0x9a13c9*/
      {
        HIDWORD(v29) = 0xCCCC; /*0x9a13cb*/
LABEL_59:
        v22 += 4; /*0x9a13e4*/
      }
    }
    lpWideCharStr = v22; /*0x9a13e7*/
    goto LABEL_62; /*0x9a13ea*/
  }
  lpWideCharStr = 0; /*0x9a13ec*/
LABEL_62:
  if ( !lpWideCharStr ) /*0x9a13f4*/
    goto LABEL_78; /*0x9a13f4*/
  if ( !MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, lpWideCharStr, v20) ) /*0x9a1409*/
    return unknown_libname_201_::unknown_libname_202((int)&savedregs); /*0x9a1409*/
  v23 = MultiByteToWideChar(CodePage, 9u, v35, a7, 0, 0); /*0x9a1422*/
  v24 = v23; /*0x9a1424*/
  if ( !v23 ) /*0x9a1428*/
    return unknown_libname_201_::unknown_libname_202((int)&savedregs); /*0x9a1428*/
  if ( v23 <= 0 || 0xFFFFFFE0 / v23 < 2 ) /*0x9a1436*/
  {
    v26 = 0; /*0x9a146e*/
  }
  else
  {
    v25 = 2 * v23 + 8; /*0x9a1438*/
    if ( v25 > 0x400 ) /*0x9a143e*/
    {
      LODWORD(v29) = 2 * v24 + 8; /*0x9a1456*/
      v27 = (WCHAR *)malloc(v29); /*0x9a1457*/
      if ( v27 ) /*0x9a145f*/
      {
        *(_DWORD *)v27 = 0xDDDD; /*0x9a1461*/
        v27 += 4; /*0x9a1467*/
      }
      v26 = v27; /*0x9a146a*/
    }
    else
    {
      _alloca_(v25); /*0x9a1440*/
      if ( &v29 == (size_t *)0xFFFFFFFC ) /*0x9a1449*/
        return unknown_libname_201_::unknown_libname_202((int)&savedregs); /*0x9a1449*/
      HIDWORD(v29) = 0xCCCC; /*0x9a144b*/
      v26 = (WCHAR *)&v30; /*0x9a1451*/
    }
  }
  if ( !v26 ) /*0x9a1472*/
    return unknown_libname_201_::unknown_libname_202((int)&savedregs); /*0x9a1472*/
  if ( MultiByteToWideChar(CodePage, 1u, v35, a7, v26, v24) ) /*0x9a1481*/
    v32 = CompareStringW(Locale, dwCmpFlags, lpWideCharStr, cchCount1, v26, v24); /*0x9a149b*/
  _freea(v26); /*0x9a149f*/
  return unknown_libname_201_::unknown_libname_202((int)&savedregs);
}
