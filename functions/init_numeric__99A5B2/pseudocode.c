int __cdecl __init_numeric(threadlocaleinfostruct *Memory)
{
  bool v2; // zf
  lconv *v3; // eax
  _DWORD *v5; // eax
  int *v6; // eax
  int v7; // esi
  LCID wCountry; // edi
  unsigned int v9; // eax
  unsigned int v10; // eax
  char *v11; // eax
  char v12; // cl
  char *v13; // esi
  struct localeinfo_struct v14; // [esp+Ch] [ebp-18h] BYREF
  char **p_grouping; // [esp+14h] [ebp-10h]
  unsigned int v16; // [esp+18h] [ebp-Ch]
  void *v17; // [esp+1Ch] [ebp-8h]
  int *v18; // [esp+20h] [ebp-4h]
  lconv *Memorya; // [esp+2Ch] [ebp+8h]

  v2 = Memory->lc_handle[4] == 0;
  v14.locinfo = Memory;
  v14.mbcinfo = 0;
  if ( !v2 || Memory->lc_handle[3] )
  {
    v3 = (lconv *)unknown_libname_74();
    Memorya = v3;
    if ( !v3 )
      return 1;
    qmemcpy(v3, Memory->lconv, sizeof(lconv));
    v5 = (_DWORD *)unknown_libname_72();
    v17 = v5;
    if ( !v5 )
    {
      free(Memorya);
      return 1;
    }
    *v5 = 0;
    if ( !Memory->lc_handle[4] )
    {
      Memorya->decimal_point = (char *)off_B30DB4;
      Memorya->thousands_sep = (char *)off_B30DB8;
      v18 = 0;
      Memorya->grouping = (char *)off_B30DBC;
LABEL_26:
      *(_DWORD *)v17 = 1;
      if ( v18 )
        *v18 = 1;
      goto LABEL_28;
    }
    v6 = (int *)unknown_libname_72();
    v18 = v6;
    if ( !v6 )
    {
      v7 = 1;
LABEL_11:
      free(Memorya);
      free(v17);
      return v7;
    }
    *v6 = 0;
    wCountry = Memory->lc_id[4].wCountry;
    v16 = unknown_libname_90(&v14, 1, wCountry, 0xEu, Memorya);
    v9 = unknown_libname_90(&v14, 1, wCountry, 0xFu, &Memorya->thousands_sep);
    v16 |= v9;
    p_grouping = &Memorya->grouping;
    v10 = unknown_libname_90(&v14, 1, wCountry, 0x10u, &Memorya->grouping);
    if ( v16 | v10 )
    {
      __free_lconv_num((int)Memorya);
      v7 = 0xFFFFFFFF;
      goto LABEL_11;
    }
    v11 = *p_grouping;
    while ( 1 )
    {
      if ( !*v11 )
        goto LABEL_26;
      v12 = *v11;
      if ( *v11 >= 0x30 && v12 <= 0x39 )
        break;
      if ( v12 == 0x3B )
      {
        v13 = v11;
        do
        {
          *v13 = v13[1];
          ++v13;
        }
        while ( *v13 );
      }
      else
      {
LABEL_18:
        ++v11;
      }
    }
    *v11 = v12 - 0x30;
    goto LABEL_18;
  }
  v18 = 0;
  v17 = 0;
  Memorya = (lconv *)&off_B30DB4;
LABEL_28:
  if ( Memory->lconv_num_refcount )
    InterlockedDecrement(Memory->lconv_num_refcount);
  if ( Memory->lconv_intl_refcount )
  {
    if ( !InterlockedDecrement(Memory->lconv_intl_refcount) )
    {
      free(Memory->lconv_intl_refcount);
      free(Memory->lconv);
    }
  }
  Memory->lconv_num_refcount = v18;
  Memory->lconv_intl_refcount = (int *)v17;
  Memory->lconv = Memorya;
  return 0;
}
