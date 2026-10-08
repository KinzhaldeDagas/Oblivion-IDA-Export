void __cdecl __libm_error_support(double *a1, double *a2, double *a3, int a4)
{
  int (__cdecl *v4)(int *); // eax
  double v5; // st7
  double v6; // st7
  double v7; // st7
  int v8; // [esp+Ch] [ebp-28h] BYREF
  const char *v9; // [esp+10h] [ebp-24h]
  double v10; // [esp+14h] [ebp-20h]
  double v11; // [esp+1Ch] [ebp-18h]
  double v12; // [esp+24h] [ebp-10h]
  double v13; // [esp+2Ch] [ebp-8h]

  v13 = 0.0; /*0x993bb2*/
  if ( dword_BA9E10[0x20E] ) /*0x993bca*/
    v4 = (int (__cdecl *)(int *))_decode_pointer(unk_BAAA98); /*0x993bd2*/
  else
    v4 = (int (__cdecl *)(int *))sub_98A318; /*0x993bda*/
  if ( a4 > 0xA6 ) /*0x993be9*/
  {
    switch ( a4 ) /*0x993d72*/
    {
      case 0x3E8: /*0x993d72*/
        v9 = (const char *)&aLog; /*0x993d79*/
        goto LABEL_37; /*0x993d80*/
      case 0x3E9: /*0x993d72*/
        v9 = "log10"; /*0x993d82*/
        goto LABEL_37; /*0x993d89*/
      case 0x3EA: /*0x993d72*/
        v9 = (const char *)&off_AA6850; /*0x993d8b*/
        goto LABEL_37; /*0x993d92*/
      case 0x3EB: /*0x993d72*/
        v9 = "atan"; /*0x993d94*/
        goto LABEL_37; /*0x993d9b*/
      case 0x3EC: /*0x993d72*/
        v9 = "ceil"; /*0x993d9d*/
        goto LABEL_37; /*0x993da4*/
      case 0x3ED: /*0x993d72*/
        v9 = "floor"; /*0x993da6*/
        goto LABEL_37; /*0x993dad*/
      case 0x3EE: /*0x993d72*/
        goto ___libm_error_support___$LN36_1;
      case 0x3EF: /*0x993d72*/
        v9 = "modf"; /*0x993db2*/
        goto LABEL_37; /*0x993db9*/
      case 0x3F0: /*0x993d72*/
        goto ___libm_error_support___$LN30_1;
      case 0x3F1: /*0x993d72*/
        goto ___libm_error_support___$LN8_7;
      case 0x3F2: /*0x993d72*/
        v9 = (const char *)&off_AA6800; /*0x993dbe*/
        goto LABEL_53; /*0x993dc5*/
      case 0x3F3: /*0x993d72*/
        v9 = (const char *)&off_AA67FC; /*0x993dc7*/
        goto LABEL_53; /*0x993dce*/
      case 0x3F4: /*0x993d72*/
        v9 = (const char *)&off_AA67F8; /*0x993dd0*/
LABEL_53:
        v6 = *a1 * v13; /*0x993dd7*/
        *a3 = v6; /*0x993ddc*/
        v10 = *a1; /*0x993de0*/
        v11 = *a2; /*0x993de5*/
        goto LABEL_54; /*0x993de5*/
      default:
        goto ___libm_error_support___def_993D72;
    }
  }
  if ( a4 == 0xA6 ) /*0x993bef*/
  {
    v8 = 3; /*0x993d50*/
    v9 = "exp10"; /*0x993d57*/
    goto LABEL_17; /*0x993d5e*/
  }
  if ( a4 <= 0x19 ) /*0x993bf8*/
  {
    switch ( a4 ) /*0x993bfe*/
    {
      case 0x19: /*0x993bfe*/
        v9 = (const char *)&off_AA684C; /*0x993ced*/
        goto LABEL_20; /*0x993cf4*/
      case 2: /*0x993bfe*/
        v8 = 2; /*0x993cde*/
        v9 = (const char *)&aLog; /*0x993ce1*/
        goto LABEL_17; /*0x993ce8*/
      case 3: /*0x993bfe*/
        v9 = (const char *)&aLog; /*0x993cd5*/
        break;
      case 8: /*0x993bfe*/
        v8 = 2; /*0x993cc6*/
        v9 = "log10"; /*0x993cc9*/
        goto LABEL_17; /*0x993cd0*/
      case 9: /*0x993bfe*/
        v9 = "log10"; /*0x993cae*/
        break;
      case 0xE: /*0x993bfe*/
        v8 = 3; /*0x993c9e*/
        v9 = (const char *)&off_AA6850; /*0x993ca5*/
LABEL_17:
        v10 = *a1; /*0x993c47*/
        v11 = *a2; /*0x993c52*/
        v12 = *a3; /*0x993c57*/
        if ( !v4(&v8) ) /*0x993c5a*/
          *_errno() = 0x22; /*0x993c6a*/
        goto LABEL_56; /*0x993c70*/
      case 0xF: /*0x993bfe*/
        v9 = (const char *)&off_AA6850; /*0x993c75*/
LABEL_20:
        v10 = *a1; /*0x993c7c*/
        v5 = *a2; /*0x993c85*/
        v8 = 4; /*0x993c87*/
        v11 = v5; /*0x993c8e*/
        v12 = *a3; /*0x993c93*/
        v4(&v8); /*0x993c96*/
LABEL_56:
        v7 = v12; /*0x993e08*/
        goto LABEL_57; /*0x993e08*/
      case 0x18: /*0x993bfe*/
        v8 = 3; /*0x993c39*/
LABEL_16:
        v9 = (const char *)&off_AA684C; /*0x993c40*/
        goto LABEL_17; /*0x993c40*/
      default:
___libm_error_support___def_993D72:
        JUMPOUT(0x993E0D); /*0x993e0d*/
    }
LABEL_23:
    v10 = *a1; /*0x993cb5*/
    v11 = *a2; /*0x993cbc*/
    v6 = *a3; /*0x993cbf*/
LABEL_54:
    v12 = v6; /*0x993de8*/
    v8 = 1; /*0x993def*/
    if ( !v4(&v8) ) /*0x993df6*/
      *_errno() = 0x21; /*0x993e02*/
    goto LABEL_56; /*0x993e02*/
  }
  if ( a4 != 0x1A ) /*0x993cf9*/
  {
    switch ( a4 ) /*0x993cfc*/
    {
      case 0x1B: /*0x993cfc*/
        v8 = 2; /*0x993d3d*/
        goto LABEL_16; /*0x993d44*/
      case 0x1C: /*0x993cfc*/
___libm_error_support___$LN36_1:
        v9 = (const char *)&off_AA684C; /*0x993d31*/
        break;
      case 0x1D: /*0x993cfc*/
        v9 = (const char *)&off_AA684C; /*0x993d24*/
LABEL_37:
        *a3 = *a1; /*0x993d2b*/
        break;
      case 0x3A: /*0x993cfc*/
___libm_error_support___$LN30_1:
        v9 = "acos"; /*0x993d1b*/
        break;
      case 0x3D: /*0x993cfc*/
___libm_error_support___$LN8_7:
        v9 = "asin"; /*0x993d12*/
        break;
      default:
        goto ___libm_error_support___def_993D72; /*0x993d0c*/
    }
    goto LABEL_23; /*0x993d19*/
  }
  v7 = 1.0; /*0x993d49*/
LABEL_57:
  *a3 = v7; /*0x993e0b*/
  __libm_error_support_::def_993D72(); /*0x993e0c*/
}
