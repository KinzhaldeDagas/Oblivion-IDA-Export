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

  v2 = Memory->lc_handle[4] == 0; /*0x99a5bf*/
  v14.locinfo = Memory; /*0x99a5c3*/
  v14.mbcinfo = 0; /*0x99a5c6*/
  if ( !v2 || Memory->lc_handle[3] ) /*0x99a5cb*/
  {
    v3 = (lconv *)unknown_libname_74(1, 0x30); /*0x99a5e6*/
    Memorya = v3; /*0x99a5f1*/
    if ( !v3 ) /*0x99a5f4*/
      return 1; /*0x99a5f9*/
    qmemcpy(v3, Memory->lconv, sizeof(lconv)); /*0x99a609*/
    v5 = unknown_libname_72(4); /*0x99a60b*/
    v17 = v5; /*0x99a615*/
    if ( !v5 ) /*0x99a618*/
    {
      free(Memorya); /*0x99a61d*/
      return 1; /*0x99a623*/
    }
    *v5 = 0; /*0x99a625*/
    if ( !Memory->lc_handle[4] ) /*0x99a62a*/
    {
      Memorya->decimal_point = (char *)off_B30DB4; /*0x99a6f4*/
      Memorya->thousands_sep = (char *)off_B30DB8; /*0x99a6fc*/
      v18 = 0; /*0x99a705*/
      Memorya->grouping = (char *)off_B30DBC; /*0x99a708*/
LABEL_26:
      *(_DWORD *)v17 = 1; /*0x99a70b*/
      if ( v18 ) /*0x99a718*/
        *v18 = 1; /*0x99a71a*/
      goto LABEL_28; /*0x99a71a*/
    }
    v6 = (int *)unknown_libname_72(4); /*0x99a632*/
    v18 = v6; /*0x99a63a*/
    if ( !v6 ) /*0x99a63d*/
    {
      v7 = 1; /*0x99a641*/
LABEL_11:
      free(Memorya); /*0x99a642*/
      free(v17); /*0x99a64d*/
      return v7; /*0x99a656*/
    }
    *v6 = 0; /*0x99a65b*/
    wCountry = Memory->lc_id[4].wCountry; /*0x99a660*/
    v16 = unknown_libname_90(&v14, 1, wCountry, 0xEu, Memorya); /*0x99a673*/
    v9 = unknown_libname_90(&v14, 1, wCountry, 0xFu, &Memorya->thousands_sep); /*0x99a683*/
    v16 |= v9; /*0x99a688*/
    p_grouping = &Memorya->grouping; /*0x99a692*/
    v10 = unknown_libname_90(&v14, 1, wCountry, 0x10u, &Memorya->grouping); /*0x99a69b*/
    if ( v16 | v10 ) /*0x99a6a3*/
    {
      __free_lconv_num((int)Memorya); /*0x99a6a9*/
      v7 = 0xFFFFFFFF; /*0x99a6af*/
      goto LABEL_11; /*0x99a6b2*/
    }
    v11 = *p_grouping; /*0x99a6b7*/
    while ( 1 ) /*0x99a6cd*/
    {
      if ( !*v11 ) /*0x99a6cd*/
        goto LABEL_26; /*0x99a6d0*/
      v12 = *v11; /*0x99a6bb*/
      if ( *v11 >= 0x30 && v12 <= 0x39 ) /*0x99a6c5*/
        break; /*0x99a6c5*/
      if ( v12 == 0x3B ) /*0x99a6d7*/
      {
        v13 = v11; /*0x99a6d9*/
        do /*0x99a6e4*/
        {
          *v13 = v13[1]; /*0x99a6e0*/
          ++v13; /*0x99a6e2*/
        }
        while ( *v13 ); /*0x99a6e4*/
      }
      else
      {
LABEL_18:
        ++v11; /*0x99a6cc*/
      }
    }
    *v11 = v12 - 0x30; /*0x99a6ca*/
    goto LABEL_18; /*0x99a6ca*/
  }
  v18 = 0; /*0x99a5d0*/
  v17 = 0; /*0x99a5d3*/
  Memorya = (lconv *)&off_B30DB4; /*0x99a5d6*/
LABEL_28:
  if ( Memory->lconv_num_refcount ) /*0x99a71c*/
    InterlockedDecrement(Memory->lconv_num_refcount); /*0x99a72d*/
  if ( Memory->lconv_intl_refcount ) /*0x99a72f*/
  {
    if ( !InterlockedDecrement(Memory->lconv_intl_refcount) ) /*0x99a73a*/
    {
      free(Memory->lconv_intl_refcount); /*0x99a746*/
      free(Memory->lconv); /*0x99a751*/
    }
  }
  Memory->lconv_num_refcount = v18; /*0x99a75b*/
  Memory->lconv_intl_refcount = (int *)v17; /*0x99a764*/
  Memory->lconv = Memorya; /*0x99a76d*/
  return 0; /*0x99a775*/
}
