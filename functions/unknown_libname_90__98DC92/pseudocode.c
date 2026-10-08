unsigned int __cdecl unknown_libname_90(struct localeinfo_struct *a1, int a2, LCID Locale, LCTYPE LCType, _BYTE *a5)
{
  char *v5; // edi
  int v6; // esi
  int v7; // eax
  CHAR *v8; // eax
  char *v9; // eax
  errno_t v11; // eax
  int v12; // edx
  int v13; // ecx
  unsigned __int8 *v14; // edi
  unsigned __int8 v15; // bl
  rsize_t v16; // [esp+0h] [ebp-3Ch]
  int cbMultiByte; // [esp+10h] [ebp-2Ch]
  int v18; // [esp+18h] [ebp-24h]
  char Src[128]; // [esp+1Ch] [ebp-20h] BYREF

  if ( a2 != 1 ) /*0x98dcbc*/
  {
    if ( !a2 ) /*0x98dda4*/
    {
      v14 = (unsigned __int8 *)&dword_BA9E10[0x1F5]; /*0x98dda9*/
      if ( sub_99CE6C(a1, Locale, LCType, (LPWSTR)&dword_BA9E10[0x1F5], 4, 0) ) /*0x98ddb6*/
      {
        *a5 = 0; /*0x98ddc2*/
        do /*0x98dde8*/
        {
          v15 = *v14; /*0x98ddc4*/
          if ( !isdigit(*v14) ) /*0x98ddca*/
            break; /*0x98ddd2*/
          v14 += 2; /*0x98dddf*/
          *a5 = v15 + 0xA * *a5 - 0x30; /*0x98dde6*/
        }
        while ( (int)v14 < (int)&dword_BA9E10[0x1F7] ); /*0x98dde8*/
        return 0; /*0x98dde8*/
      }
    }
    return 0xFFFFFFFF; /*0x98ddc0*/
  }
  v5 = Src; /*0x98dcc8*/
  v18 = 0; /*0x98dcd1*/
  v6 = sub_99CFE4(a1, Locale, LCType, Src, 0x80, 0); /*0x98dcdd*/
  if ( !v6 ) /*0x98dce4*/
  {
    if ( GetLastError() == 0x7A ) /*0x98dcef*/
    {
      v7 = sub_99CFE4(a1, Locale, LCType, 0, 0, 0); /*0x98dcfd*/
      cbMultiByte = v7; /*0x98dd07*/
      if ( v7 ) /*0x98dd0a*/
      {
        v8 = (CHAR *)unknown_libname_74(v7, 1); /*0x98dd11*/
        v5 = v8; /*0x98dd16*/
        if ( v8 ) /*0x98dd1c*/
        {
          v18 = 1; /*0x98dd22*/
          v6 = sub_99CFE4(a1, Locale, LCType, v8, cbMultiByte, 0); /*0x98dd34*/
          if ( v6 ) /*0x98dd3b*/
            goto LABEL_7; /*0x98dd3b*/
          free(v5); /*0x98dd56*/
        }
      }
    }
    return 0xFFFFFFFF; /*0x98dd70*/
  }
LABEL_7:
  v9 = (char *)unknown_libname_74(v6, 1); /*0x98dd3d*/
  *(_DWORD *)a5 = v9; /*0x98dd4c*/
  if ( !v9 ) /*0x98dd4e*/
    JUMPOUT(0x98DD50); /*0x98dd50*/
  v11 = strncpy_s(v9, __PAIR64__((unsigned int)v5, v6), (const char *)(v6 - 1), v16); /*0x98dd78*/
  if ( v11 ) /*0x98dd82*/
    _invoke_watson(v11, v12, v13, 0, (int)v5, v6); /*0x98dd89*/
  if ( v18 ) /*0x98dd94*/
    free(v5); /*0x98dd97*/
  return 0; /*0x98dd5f*/
}
