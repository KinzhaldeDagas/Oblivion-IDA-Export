int __usercall _tzset_nolock@<eax>(int a1@<edi>, int a2@<esi>)
{
  signed int v2; // eax
  int v3; // edx
  signed int v4; // eax
  int v5; // edx
  signed int v6; // eax
  int v7; // edx
  char *v8; // eax
  const char *v9; // esi
  int v10; // eax
  int v11; // eax
  errno_t v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v19; // [esp-4h] [ebp-50h]
  int v20; // [esp-4h] [ebp-50h]
  int v21; // [esp-4h] [ebp-50h]
  int CodePage; // [esp+18h] [ebp-34h]
  BOOL UsedDefaultChar; // [esp+1Ch] [ebp-30h] BYREF
  int v24; // [esp+20h] [ebp-2Ch]
  int v25; // [esp+24h] [ebp-28h] BYREF
  int v26; // [esp+28h] [ebp-24h] BYREF
  LPSTR *v27; // [esp+2Ch] [ebp-20h]
  int v28; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v24 = 0; /*0x99e64e*/
  v28 = 0; /*0x99e651*/
  v26 = 0; /*0x99e654*/
  v25 = 0; /*0x99e657*/
  _lock(7); /*0x99e65f*/
  ms_exc.registration.TryLevel = 0; /*0x99e665*/
  v27 = (LPSTR *)sub_99EE5D(); /*0x99e66d*/
  v2 = sub_99EE17(0, a1, &v28); /*0x99e674*/
  if ( v2 ) /*0x99e67c*/
    _invoke_watson(v2, v3, v19, 0, a1, a2); /*0x99e683*/
  v4 = sub_99EDAF(0, a1, &v26); /*0x99e68f*/
  if ( v4 ) /*0x99e697*/
    _invoke_watson(v4, v5, v20, 0, a1, a2); /*0x99e69e*/
  v6 = sub_99EDE3(0, a1, &v25); /*0x99e6aa*/
  if ( v6 ) /*0x99e6b2*/
    _invoke_watson(v6, v7, v21, 0, a1, a2); /*0x99e6b9*/
  CodePage = ___lc_codepage_func(); /*0x99e6c6*/
  dword_BA9E10[0x297] = 0; /*0x99e6c9*/
  dword_B31FDC = 0xFFFFFFFF; /*0x99e6d2*/
  dword_B31FD0 = 0xFFFFFFFF; /*0x99e6d8*/
  v8 = getenv("TZ"); /*0x99e6e3*/
  v9 = v8; /*0x99e6e9*/
  if ( !v8 || !*v8 ) /*0x99e6f2*/
  {
    if ( dword_BA9E10[0x298] ) /*0x99e775*/
    {
      free((void *)dword_BA9E10[0x298]); /*0x99e778*/
      dword_BA9E10[0x298] = 0; /*0x99e77e*/
    }
    if ( GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&dword_BA9E10[0x26C]) != 0xFFFFFFFF ) /*0x99e791*/
    {
      dword_BA9E10[0x297] = 1; /*0x99e79a*/
      v28 = 0x3C * dword_BA9E10[0x26C]; /*0x99e7a8*/
      if ( HIWORD(dword_BA9E10[0x27D]) ) /*0x99e7b2*/
        v28 = 0x3C * dword_BA9E10[0x281] + 0x3C * dword_BA9E10[0x26C]; /*0x99e7bf*/
      if ( HIWORD(dword_BA9E10[0x292]) && dword_BA9E10[0x296] ) /*0x99e7d2*/
      {
        v26 = 1; /*0x99e7d4*/
        v25 = 0x3C * (dword_BA9E10[0x296] - dword_BA9E10[0x281]); /*0x99e7e0*/
      }
      else
      {
        v26 = 0; /*0x99e7e5*/
        v25 = 0; /*0x99e7e8*/
      }
      if ( !WideCharToMultiByte(CodePage, 0, (LPCWSTR)&dword_BA9E10[0x26D], 0xFFFFFFFF, *v27, 0x3F, 0, &UsedDefaultChar) /*0x99e810*/
        || UsedDefaultChar )
      {
        **v27 = 0; /*0x99e821*/
      }
      else
      {
        (*v27)[0x3F] = 0; /*0x99e817*/
      }
      if ( !WideCharToMultiByte( /*0x99e844*/
              CodePage,
              0,
              (LPCWSTR)&dword_BA9E10[0x282],
              0xFFFFFFFF,
              v27[1],
              0x3F,
              0,
              &UsedDefaultChar)
        || UsedDefaultChar )
      {
        *v27[1] = 0; /*0x99e857*/
      }
      else
      {
        v27[1][0x3F] = 0; /*0x99e84c*/
      }
    }
    goto LABEL_33; /*0x99e84f*/
  }
  if ( dword_BA9E10[0x298] ) /*0x99e6fd*/
  {
    if ( !strcmp(v8, (const char *)dword_BA9E10[0x298]) ) /*0x99e70a*/
    {
LABEL_33:
      v24 = 1; /*0x99e859*/
      goto LABEL_34; /*0x99e859*/
    }
    if ( dword_BA9E10[0x298] ) /*0x99e717*/
      free((void *)dword_BA9E10[0x298]); /*0x99e71a*/
  }
  v10 = strlen(v9); /*0x99e721*/
  dword_BA9E10[0x298] = unknown_libname_72(v10 + 1); /*0x99e72f*/
  if ( !dword_BA9E10[0x298] ) /*0x99e736*/
    goto LABEL_33; /*0x99e736*/
  v11 = strlen(v9); /*0x99e73e*/
  v12 = strcpy_s((char *)dword_BA9E10[0x298], v11 + 1, v9); /*0x99e74c*/
  if ( v12 ) /*0x99e756*/
    _invoke_watson(v12, v13, v14, 0, 0xFFFFFFFF, (int)v9); /*0x99e761*/
LABEL_34:
  v15 = v28; /*0x99e860*/
  *sub_99EE57() = v15; /*0x99e868*/
  v16 = v26; /*0x99e86a*/
  *sub_99EE4B() = v16; /*0x99e872*/
  v17 = v25; /*0x99e874*/
  *sub_99EE51() = v17; /*0x99e87c*/
  ms_exc.registration.TryLevel = 0xFFFFFFFE; /*0x99e87e*/
  _unlock(7); /*0x99e8ee*/
  return _tzset_nolock_::_LN39();
}
