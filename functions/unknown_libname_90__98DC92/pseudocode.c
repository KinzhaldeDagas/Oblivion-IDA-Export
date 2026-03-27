unsigned int __cdecl unknown_libname_90(struct localeinfo_struct *a1, int a2, LCID Locale, LCTYPE LCType, _BYTE *a5)
{
  char *v5; // edi
  int v6; // esi
  CHAR *v7; // eax
  char *v8; // eax
  errno_t v10; // eax
  int v11; // edx
  int v12; // ecx
  WCHAR *v13; // edi
  char v14; // bl
  rsize_t v15; // [esp+0h] [ebp-3Ch]
  int cbMultiByte; // [esp+10h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-24h]
  char Src[128]; // [esp+1Ch] [ebp-20h] BYREF

  if ( a2 != 1 )
  {
    if ( !a2 )
    {
      v13 = WideCharStr;
      if ( sub_99CE6C(a1, Locale, LCType, WideCharStr, 4, 0) )
      {
        *a5 = 0;
        do
        {
          v14 = *(_BYTE *)v13;
          if ( !isdigit(*(unsigned __int8 *)v13) )
            break;
          ++v13;
          *a5 = v14 + 0xA * *a5 - 0x30;
        }
        while ( (int)v13 < (int)&dword_BAA5EC );
        return 0;
      }
    }
    return 0xFFFFFFFF;
  }
  v5 = Src;
  v17 = 0;
  v6 = sub_99CFE4(a1, Locale, LCType, Src, 0x80, 0);
  if ( !v6 )
  {
    if ( GetLastError() == 0x7A )
    {
      cbMultiByte = sub_99CFE4(a1, Locale, LCType, 0, 0, 0);
      if ( cbMultiByte )
      {
        v7 = (CHAR *)unknown_libname_74();
        v5 = v7;
        if ( v7 )
        {
          v17 = 1;
          v6 = sub_99CFE4(a1, Locale, LCType, v7, cbMultiByte, 0);
          if ( v6 )
            goto LABEL_7;
          free(v5);
        }
      }
    }
    return 0xFFFFFFFF;
  }
LABEL_7:
  v8 = (char *)unknown_libname_74();
  *(_DWORD *)a5 = v8;
  if ( !v8 )
    JUMPOUT(0x98DD50);
  v10 = strncpy_s(v8, __PAIR64__((unsigned int)v5, v6), (const char *)(v6 - 1), v15);
  if ( v10 )
    _invoke_watson(v10, v11, v12, 0, (int)v5, v6);
  if ( v17 )
    free(v5);
  return 0;
}
