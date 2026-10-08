int __cdecl __init_monetary(threadlocaleinfostruct *a1)
{
  threadlocaleinfostruct *v1; // esi
  bool v2; // zf
  lconv *v3; // ebx
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
  char *mon_grouping; // eax
  char v23; // cl
  char *v24; // esi
  _DWORD *v25; // ecx
  struct localeinfo_struct v26; // [esp+Ch] [ebp-10h] BYREF
  void *Memory; // [esp+14h] [ebp-8h]
  void *v28; // [esp+18h] [ebp-4h]

  v1 = a1; /*0x99a80b*/
  v2 = a1->lc_handle[3] == 0; /*0x99a811*/
  v28 = 0; /*0x99a814*/
  v26.locinfo = a1; /*0x99a817*/
  v26.mbcinfo = 0; /*0x99a81a*/
  if ( !v2 || a1->lc_handle[4] ) /*0x99a81f*/
  {
    v3 = (lconv *)unknown_libname_74(1, 0x30); /*0x99a83d*/
    if ( !v3 ) /*0x99a843*/
      return 1; /*0x99a848*/
    v5 = unknown_libname_72(4); /*0x99a84f*/
    Memory = v5; /*0x99a857*/
    if ( !v5 ) /*0x99a85a*/
    {
      free(v3); /*0x99a85d*/
      return 1; /*0x99a863*/
    }
    *v5 = 0; /*0x99a865*/
    if ( !a1->lc_handle[3] ) /*0x99a86a*/
    {
      qmemcpy(v3, &off_B30DB4, sizeof(lconv)); /*0x99aa33*/
LABEL_25:
      v1 = a1; /*0x99aa35*/
      v3->decimal_point = a1->lconv->decimal_point; /*0x99aa44*/
      v3->thousands_sep = a1->lconv->thousands_sep; /*0x99aa4b*/
      v25 = Memory; /*0x99aa53*/
      v3->grouping = a1->lconv->grouping; /*0x99aa56*/
      v2 = v28 == 0; /*0x99aa5e*/
      *v25 = 1; /*0x99aa61*/
      if ( !v2 ) /*0x99aa63*/
        *(_DWORD *)v28 = 1; /*0x99aa68*/
      goto LABEL_27; /*0x99aa68*/
    }
    v6 = unknown_libname_72(4); /*0x99a872*/
    v28 = v6; /*0x99a87a*/
    if ( !v6 ) /*0x99a87d*/
    {
      free(v3); /*0x99a880*/
      free(Memory); /*0x99a888*/
      return 1; /*0x99a88e*/
    }
    *v6 = 0; /*0x99a890*/
    wCountry = a1->lc_id[3].wCountry; /*0x99a892*/
    v8 = unknown_libname_90(&v26, 1, wCountry, 0x15u, &v3->int_curr_symbol); /*0x99a8a8*/
    v9 = unknown_libname_90(&v26, 1, wCountry, 0x14u, &v3->currency_symbol) | v8; /*0x99a8bc*/
    v10 = unknown_libname_90(&v26, 1, wCountry, 0x16u, &v3->mon_decimal_point) | v9; /*0x99a8d0*/
    v11 = unknown_libname_90(&v26, 1, wCountry, 0x17u, &v3->mon_thousands_sep) | v10; /*0x99a8e7*/
    v12 = unknown_libname_90(&v26, 1, wCountry, 0x18u, &v3->mon_grouping) | v11; /*0x99a8fb*/
    v13 = unknown_libname_90(&v26, 1, wCountry, 0x50u, &v3->positive_sign) | v12; /*0x99a90f*/
    v14 = unknown_libname_90(&v26, 1, wCountry, 0x51u, &v3->negative_sign) | v13; /*0x99a923*/
    v15 = unknown_libname_90(&v26, 0, wCountry, 0x1Au, &v3->int_frac_digits) | v14; /*0x99a93a*/
    v16 = unknown_libname_90(&v26, 0, wCountry, 0x19u, &v3->frac_digits) | v15; /*0x99a94e*/
    v17 = unknown_libname_90(&v26, 0, wCountry, 0x54u, &v3->p_cs_precedes) | v16; /*0x99a962*/
    v18 = unknown_libname_90(&v26, 0, wCountry, 0x55u, &v3->p_sep_by_space) | v17; /*0x99a976*/
    v19 = unknown_libname_90(&v26, 0, wCountry, 0x56u, &v3->n_cs_precedes) | v18; /*0x99a98d*/
    v20 = unknown_libname_90(&v26, 0, wCountry, 0x57u, &v3->n_sep_by_space) | v19; /*0x99a9a1*/
    v21 = unknown_libname_90(&v26, 0, wCountry, 0x52u, &v3->p_sign_posn) | v20; /*0x99a9b5*/
    if ( v21 | unknown_libname_90(&v26, 0, wCountry, 0x53u, &v3->n_sign_posn) ) /*0x99a9cc*/
    {
      __free_lconv_mon((int)v3); /*0x99a9d1*/
      free(v3); /*0x99a9d7*/
      free(Memory); /*0x99a9df*/
      free(v28); /*0x99a9e7*/
      return 1; /*0x99a9ef*/
    }
    mon_grouping = v3->mon_grouping; /*0x99a9f4*/
    while ( 1 ) /*0x99aa0b*/
    {
      if ( !*mon_grouping ) /*0x99aa0b*/
        goto LABEL_25; /*0x99aa0e*/
      v23 = *mon_grouping; /*0x99a9f9*/
      if ( *mon_grouping >= 0x30 && v23 <= 0x39 ) /*0x99aa03*/
        break; /*0x99aa03*/
      if ( v23 == 0x3B ) /*0x99aa15*/
      {
        v24 = mon_grouping; /*0x99aa17*/
        do /*0x99aa22*/
        {
          *v24 = v24[1]; /*0x99aa1e*/
          ++v24; /*0x99aa20*/
        }
        while ( *v24 ); /*0x99aa22*/
      }
      else
      {
LABEL_17:
        ++mon_grouping; /*0x99aa0a*/
      }
    }
    *mon_grouping = v23 - 0x30; /*0x99aa08*/
    goto LABEL_17; /*0x99aa08*/
  }
  v28 = 0; /*0x99a824*/
  Memory = 0; /*0x99a827*/
  v3 = (lconv *)&off_B30DB4; /*0x99a82a*/
LABEL_27:
  if ( v1->lconv_mon_refcount ) /*0x99aa6a*/
    InterlockedDecrement(v1->lconv_mon_refcount); /*0x99aa75*/
  if ( v1->lconv_intl_refcount ) /*0x99aa7b*/
  {
    if ( !InterlockedDecrement(v1->lconv_intl_refcount) ) /*0x99aa86*/
    {
      free(v1->lconv); /*0x99aa96*/
      free(v1->lconv_intl_refcount); /*0x99aaa1*/
    }
  }
  v1->lconv_mon_refcount = (int *)v28; /*0x99aaab*/
  v1->lconv_intl_refcount = (int *)Memory; /*0x99aab4*/
  v1->lconv = v3; /*0x99aaba*/
  return 0; /*0x99aac2*/
}
