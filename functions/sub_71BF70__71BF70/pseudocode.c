void *__stdcall sub_71BF70(int *a1, int a2, int a3)
{
  int v3; // edx
  bool v4; // bl
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  char v7; // al
  int v8; // eax
  void *result; // eax
  int v10; // eax
  bool v11; // zf
  char v12; // al

  v3 = *(_DWORD *)(a2 + 4); /*0x71bf76*/
  if ( v3 == 2 || v3 == 3 ) /*0x71bf81*/
  {
    v4 = v3 == 3; /*0x71bf86*/
  }
  else
  {
    v5 = 0; /*0x71bf8b*/
    v6 = (_DWORD *)(a2 + 0x14); /*0x71bf8d*/
    while ( *v6 != 3 ) /*0x71bf93*/
    {
      ++v5; /*0x71bf95*/
      v6 += 3; /*0x71bf98*/
      if ( v5 >= 4 ) /*0x71bf9e*/
      {
        v7 = 0; /*0x71bfa0*/
        goto LABEL_8; /*0x71bfa0*/
      }
    }
    v7 = *(_BYTE *)(a2 + 0xC * v5 + 0x1C); /*0x71bfd4*/
LABEL_8:
    v4 = v7 != 0; /*0x71bfa2*/
  }
  if ( v3 >= 4 && v3 <= 6 ) /*0x71bfaf*/
    v4 = 1; /*0x71bfb1*/
  v8 = *a1; /*0x71bfb7*/
  if ( *a1 == 0xD ) /*0x71bfbc*/
    return &unk_B26088; /*0x71bfbc*/
  switch ( v8 ) /*0x71bfc5*/
  {
    case 0xC: /*0x71bfc5*/
      return &unk_B260D0; /*0x71bfce*/
    case 2: /*0x71bfc5*/
      return &unk_B265E0; /*0x71bfdd*/
    case 1: /*0x71bfc5*/
      goto LABEL_19; /*0x71bfec*/
    case 0: /*0x71bfc5*/
    case 5: /*0x71bfc5*/
      result = &unk_B26040; /*0x71c09a*/
      goto LABEL_41; /*0x71c09a*/
    case 3: /*0x71bfc5*/
      v10 = *(_DWORD *)(a3 + 4); /*0x71c01f*/
      goto LABEL_25; /*0x71c01f*/
    case 4: /*0x71bfc5*/
      return &unk_B25F68; /*0x71c04e*/
  }
  if ( v8 != 6 ) /*0x71c054*/
    return &unk_B265E0; /*0x71bfe6*/
  if ( !sub_71B480((_DWORD *)a3) && !sub_70E240((int *)a3) ) /*0x71c067*/
  {
    v12 = *(_BYTE *)(a3 + 1); /*0x71c070*/
    switch ( v12 ) /*0x71c075*/
    {
      case 0x10: /*0x71c075*/
LABEL_19:
        result = &unk_B26508; /*0x71bfee*/
        if ( !v4 ) /*0x71bff5*/
          return &unk_B263E8; /*0x71bffc*/
        return result; /*0x71c002*/
      case 0x40: /*0x71c075*/
        return &unk_B260D0; /*0x71c07d*/
      case 0x80: /*0x71c075*/
        return &unk_B26088; /*0x71c092*/
    }
    return &unk_B265E0; /*0x71c085*/
  }
  v10 = *(_DWORD *)(a3 + 4); /*0x71c095*/
LABEL_25:
  if ( v10 == 4 ) /*0x71c025*/
    return &unk_B25FB0; /*0x71c0a3*/
  if ( v10 == 5 ) /*0x71c02a*/
    return &unk_B25FF8; /*0x71c033*/
  v11 = v10 == 6; /*0x71c036*/
  result = &unk_B26040; /*0x71c039*/
  if ( !v11 ) /*0x71c03e*/
  {
LABEL_41:
    if ( v4 ) /*0x71c0a1*/
      return result; /*0x71c0a1*/
    return &unk_B25FB0; /*0x71c0a1*/
  }
  return result; /*0x71bfc7*/
}
