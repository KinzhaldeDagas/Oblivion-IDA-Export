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
  errno_t v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v18; // [esp-4h] [ebp-50h]
  int v19; // [esp-4h] [ebp-50h]
  int v20; // [esp-4h] [ebp-50h]
  int CodePage; // [esp+18h] [ebp-34h]
  BOOL UsedDefaultChar; // [esp+1Ch] [ebp-30h] BYREF
  int v23; // [esp+20h] [ebp-2Ch]
  int v24; // [esp+24h] [ebp-28h] BYREF
  int v25; // [esp+28h] [ebp-24h] BYREF
  LPSTR *v26; // [esp+2Ch] [ebp-20h]
  int v27; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v23 = 0;
  v27 = 0;
  v25 = 0;
  v24 = 0;
  _lock(7);
  ms_exc.registration.TryLevel = 0;
  v26 = (LPSTR *)sub_99EE5D();
  v2 = sub_99EE17(&v27);
  if ( v2 )
    _invoke_watson(v2, v3, v18, 0, a1, a2);
  v4 = sub_99EDAF(&v25);
  if ( v4 )
    _invoke_watson(v4, v5, v19, 0, a1, a2);
  v6 = sub_99EDE3(&v24);
  if ( v6 )
    _invoke_watson(v6, v7, v20, 0, a1, a2);
  CodePage = ___lc_codepage_func();
  dword_BAA86C = 0;
  dword_B31FDC = 0xFFFFFFFF;
  dword_B31FD0 = 0xFFFFFFFF;
  v8 = getenv("TZ");
  v9 = v8;
  if ( !v8 || !*v8 )
  {
    if ( dword_BAA870 )
    {
      free(dword_BAA870);
      dword_BAA870 = 0;
    }
    if ( GetTimeZoneInformation(&TimeZoneInformation) != 0xFFFFFFFF )
    {
      dword_BAA86C = 1;
      v27 = 0x3C * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.StandardDate.wMonth )
        v27 = 0x3C * TimeZoneInformation.StandardBias + 0x3C * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias )
      {
        v25 = 1;
        v24 = 0x3C * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
      }
      else
      {
        v25 = 0;
        v24 = 0;
      }
      if ( !WideCharToMultiByte(
              CodePage,
              0,
              TimeZoneInformation.StandardName,
              0xFFFFFFFF,
              *v26,
              0x3F,
              0,
              &UsedDefaultChar)
        || UsedDefaultChar )
      {
        **v26 = 0;
      }
      else
      {
        (*v26)[0x3F] = 0;
      }
      if ( !WideCharToMultiByte(
              CodePage,
              0,
              TimeZoneInformation.DaylightName,
              0xFFFFFFFF,
              v26[1],
              0x3F,
              0,
              &UsedDefaultChar)
        || UsedDefaultChar )
      {
        *v26[1] = 0;
      }
      else
      {
        v26[1][0x3F] = 0;
      }
    }
    goto LABEL_33;
  }
  if ( dword_BAA870 )
  {
    if ( !strcmp(v8, dword_BAA870) )
    {
LABEL_33:
      v23 = 1;
      goto LABEL_34;
    }
    if ( dword_BAA870 )
      free(dword_BAA870);
  }
  strlen(v9);
  dword_BAA870 = (char *)unknown_libname_72();
  if ( !dword_BAA870 )
    goto LABEL_33;
  v10 = strlen(v9);
  v11 = strcpy_s(dword_BAA870, v10 + 1, v9);
  if ( v11 )
    _invoke_watson(v11, v12, v13, 0, 0xFFFFFFFF, (int)v9);
LABEL_34:
  v14 = v27;
  *sub_99EE57() = v14;
  v15 = v25;
  *sub_99EE4B() = v15;
  v16 = v24;
  *sub_99EE51() = v16;
  ms_exc.registration.TryLevel = 0xFFFFFFFE;
  _unlock(7);
  return _tzset_nolock_::_LN39();
}
