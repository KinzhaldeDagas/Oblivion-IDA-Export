int __cdecl __init_monetary(threadlocaleinfostruct *a1)
{
  threadlocaleinfostruct *v1; // esi
  bool v2; // zf
  char **v3; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  LCID wCountry; // esi
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned int v21; // edi
  char *v22; // eax
  char v23; // cl
  char *v24; // esi
  _DWORD *v25; // ecx
  struct localeinfo_struct v26; // [esp+Ch] [ebp-10h] BYREF
  void *Memory; // [esp+14h] [ebp-8h]
  void *v28; // [esp+18h] [ebp-4h]

  v1 = a1;
  v2 = a1->lc_handle[3] == 0;
  v28 = 0;
  v26.locinfo = a1;
  v26.mbcinfo = 0;
  if ( !v2 || a1->lc_handle[4] )
  {
    v3 = (char **)unknown_libname_74();
    if ( !v3 )
      return 1;
    v5 = (_DWORD *)unknown_libname_72();
    Memory = v5;
    if ( !v5 )
    {
      free(v3);
      return 1;
    }
    *v5 = 0;
    if ( !a1->lc_handle[3] )
    {
      qmemcpy(v3, &off_B30DB4, 0x30u);
LABEL_25:
      v1 = a1;
      *v3 = a1->lconv->decimal_point;
      v3[1] = a1->lconv->thousands_sep;
      v25 = Memory;
      v3[2] = a1->lconv->grouping;
      v2 = v28 == 0;
      *v25 = 1;
      if ( !v2 )
        *(_DWORD *)v28 = 1;
      goto LABEL_27;
    }
    v6 = (_DWORD *)unknown_libname_72();
    v28 = v6;
    if ( !v6 )
    {
      free(v3);
      free(Memory);
      return 1;
    }
    *v6 = 0;
    wCountry = a1->lc_id[3].wCountry;
    v8 = unknown_libname_90(&v26, 1, wCountry, 0x15u, (_BYTE *)v3 + 0xC);
    v9 = unknown_libname_90(&v26, 1, wCountry, 0x14u, (_BYTE *)v3 + 0x10) | v8;
    v10 = unknown_libname_90(&v26, 1, wCountry, 0x16u, (_BYTE *)v3 + 0x14) | v9;
    v11 = unknown_libname_90(&v26, 1, wCountry, 0x17u, (_BYTE *)v3 + 0x18) | v10;
    v12 = unknown_libname_90(&v26, 1, wCountry, 0x18u, (_BYTE *)v3 + 0x1C) | v11;
    v13 = unknown_libname_90(&v26, 1, wCountry, 0x50u, (_BYTE *)v3 + 0x20) | v12;
    v14 = unknown_libname_90(&v26, 1, wCountry, 0x51u, (_BYTE *)v3 + 0x24) | v13;
    v15 = unknown_libname_90(&v26, 0, wCountry, 0x1Au, (_BYTE *)v3 + 0x28) | v14;
    v16 = unknown_libname_90(&v26, 0, wCountry, 0x19u, (_BYTE *)v3 + 0x29) | v15;
    v17 = unknown_libname_90(&v26, 0, wCountry, 0x54u, (_BYTE *)v3 + 0x2A) | v16;
    v18 = unknown_libname_90(&v26, 0, wCountry, 0x55u, (_BYTE *)v3 + 0x2B) | v17;
    v19 = unknown_libname_90(&v26, 0, wCountry, 0x56u, (_BYTE *)v3 + 0x2C) | v18;
    v20 = unknown_libname_90(&v26, 0, wCountry, 0x57u, (_BYTE *)v3 + 0x2D) | v19;
    v21 = unknown_libname_90(&v26, 0, wCountry, 0x52u, (_BYTE *)v3 + 0x2E) | v20;
    if ( v21 | unknown_libname_90(&v26, 0, wCountry, 0x53u, (_BYTE *)v3 + 0x2F) )
    {
      __free_lconv_mon((int)v3);
      free(v3);
      free(Memory);
      free(v28);
      return 1;
    }
    v22 = v3[7];
    while ( 1 )
    {
      if ( !*v22 )
        goto LABEL_25;
      v23 = *v22;
      if ( *v22 >= 0x30 && v23 <= 0x39 )
        break;
      if ( v23 == 0x3B )
      {
        v24 = v22;
        do
        {
          *v24 = v24[1];
          ++v24;
        }
        while ( *v24 );
      }
      else
      {
LABEL_17:
        ++v22;
      }
    }
    *v22 = v23 - 0x30;
    goto LABEL_17;
  }
  v28 = 0;
  Memory = 0;
  v3 = (char **)&off_B30DB4;
LABEL_27:
  if ( v1->lconv_mon_refcount )
    InterlockedDecrement(v1->lconv_mon_refcount);
  if ( v1->lconv_intl_refcount )
  {
    if ( !InterlockedDecrement(v1->lconv_intl_refcount) )
    {
      free(v1->lconv);
      free(v1->lconv_intl_refcount);
    }
  }
  v1->lconv_mon_refcount = (int *)v28;
  v1->lconv_intl_refcount = (int *)Memory;
  v1->lconv = (lconv *)v3;
  return 0;
}
