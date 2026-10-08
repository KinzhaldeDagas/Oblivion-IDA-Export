void __usercall unknown_libname_167(
        int a1@<edi>,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned __int8 *v7; // esi
  int v8; // edi
  unsigned __int8 *v9; // eax
  unsigned __int8 v10; // al
  unsigned __int8 *v11; // eax
  unsigned __int8 *v12; // eax
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v7 = a2; /*0x99346e*/
  if ( !a2 || !a3 ) /*0x99347b*/
  {
    *_errno() = 0x16; /*0x99348c*/
    _invalid_parameter(0, a1, 0x16); /*0x99348e*/
    return; /*0x993498*/
  }
  v8 = 0; /*0x9934a0*/
  if ( a4 && *a4 ) /*0x9934a6*/
  {
    v8 = 2; /*0x9934ae*/
    if ( a3 <= 2 ) /*0x9934b2*/
      goto LABEL_30; /*0x9934b2*/
    *a2 = *a4; /*0x9934b8*/
    a2[1] = 0x3A; /*0x9934bb*/
    v7 = a2 + 2; /*0x9934be*/
  }
  v9 = a5; /*0x9934c4*/
  if ( a5 && *a5 ) /*0x9934c8*/
  {
    while ( ++v8 < a3 ) /*0x9934d4*/
    {
      *v7++ = *v9; /*0x9934de*/
      if ( !*++v9 ) /*0x9934e2*/
      {
        v10 = *_mbsdec(a5, v9); /*0x9934ed*/
        if ( v10 != 0x2F && v10 != 0x5C ) /*0x9934f7*/
        {
          if ( ++v8 >= a3 ) /*0x9934fd*/
            goto LABEL_30; /*0x9934fd*/
          *v7++ = 0x5C; /*0x9934ff*/
        }
        goto LABEL_16; /*0x993502*/
      }
    }
    goto LABEL_30; /*0x9934da*/
  }
LABEL_16:
  v11 = a6; /*0x993508*/
  if ( a6 ) /*0x99350d*/
  {
    while ( *v11 ) /*0x99351f*/
    {
      if ( ++v8 >= a3 ) /*0x993515*/
        goto LABEL_30; /*0x993515*/
      *v7++ = *v11++; /*0x993519*/
    }
  }
  v12 = a7; /*0x993521*/
  if ( a7 && *a7 ) /*0x993528*/
  {
    if ( *a7 == 0x2E ) /*0x993531*/
      goto LABEL_28; /*0x993531*/
    if ( ++v8 >= a3 ) /*0x993537*/
      goto LABEL_30; /*0x993537*/
    *v7++ = 0x2E; /*0x993539*/
LABEL_28:
    while ( *v12 ) /*0x99354d*/
    {
      if ( ++v8 >= a3 ) /*0x993543*/
        goto LABEL_30; /*0x993543*/
      *v7++ = *v12++; /*0x993547*/
    }
  }
  if ( v8 + 1 > a3 ) /*0x993553*/
  {
LABEL_30:
    unknown_libname_167_::unknown_libname_168(0, (int)&savedregs); /*0x993553*/
    return; /*0x993554*/
  }
  *v7 = 0; /*0x993566*/
}
