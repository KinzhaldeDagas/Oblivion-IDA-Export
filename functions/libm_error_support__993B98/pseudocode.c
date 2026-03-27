int __cdecl __libm_error_support(double *a1, double *a2, double *a3, int a4)
{
  int (__cdecl *v4)(int *); // eax
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st7
  double v9; // st7
  int v10; // eax
  int v12; // [esp-4h] [ebp-38h]
  int v13; // [esp-4h] [ebp-38h]
  int v14; // [esp-4h] [ebp-38h]
  int v15; // [esp+Ch] [ebp-28h] BYREF
  const char *v16; // [esp+10h] [ebp-24h]
  double v17; // [esp+14h] [ebp-20h]
  double v18; // [esp+1Ch] [ebp-18h]
  double v19; // [esp+24h] [ebp-10h]
  double v20; // [esp+2Ch] [ebp-8h]

  v20 = 0.0;
  if ( dword_BAA648 )
    v4 = (int (__cdecl *)(int *))_decode_pointer((void *)dword_BAAA98);
  else
    v4 = (int (__cdecl *)(int *))sub_98A318;
  if ( a4 > 0xA6 )
  {
    switch ( a4 )
    {
      case 0x3E8:
        v16 = (const char *)&aLog;
        goto LABEL_37;
      case 0x3E9:
        v16 = "log10";
        goto LABEL_37;
      case 0x3EA:
        v16 = (const char *)&off_AA6850;
        goto LABEL_37;
      case 0x3EB:
        v16 = "atan";
        goto LABEL_37;
      case 0x3EC:
        v16 = "ceil";
        goto LABEL_37;
      case 0x3ED:
        v16 = "floor";
        goto LABEL_37;
      case 0x3EE:
        goto ___libm_error_support___$LN36_1;
      case 0x3EF:
        v16 = "modf";
        goto LABEL_37;
      case 0x3F0:
        goto ___libm_error_support___$LN30_1;
      case 0x3F1:
        goto ___libm_error_support___$LN8_7;
      case 0x3F2:
        v16 = (const char *)&off_AA6800;
        goto LABEL_53;
      case 0x3F3:
        v16 = (const char *)&off_AA67FC;
        goto LABEL_53;
      case 0x3F4:
        v16 = (const char *)&off_AA67F8;
LABEL_53:
        v8 = *a1 * v20;
        *a3 = v8;
        v17 = *a1;
        v18 = *a2;
        goto LABEL_54;
      default:
        goto ___libm_error_support___def_993D72;
    }
  }
  if ( a4 == 0xA6 )
  {
    v15 = 3;
    v16 = "exp10";
    goto LABEL_17;
  }
  if ( a4 <= 0x19 )
  {
    switch ( a4 )
    {
      case 0x19:
        v16 = (const char *)&off_AA684C;
        goto LABEL_20;
      case 2:
        v15 = 2;
        v16 = (const char *)&aLog;
        goto LABEL_17;
      case 3:
        v16 = (const char *)&aLog;
        break;
      case 8:
        v15 = 2;
        v16 = "log10";
        goto LABEL_17;
      case 9:
        v16 = "log10";
        break;
      case 0xE:
        v15 = 3;
        v16 = (const char *)&off_AA6850;
LABEL_17:
        v17 = *a1;
        v18 = *a2;
        v19 = *a3;
        v5 = v4(&v15);
        v6 = v12;
        if ( !v5 )
          *_errno() = 0x22;
        goto LABEL_56;
      case 0xF:
        v16 = (const char *)&off_AA6850;
LABEL_20:
        v17 = *a1;
        v7 = *a2;
        v15 = 4;
        v18 = v7;
        v19 = *a3;
        v4(&v15);
        v6 = v13;
LABEL_56:
        v9 = v19;
        goto LABEL_57;
      case 0x18:
        v15 = 3;
LABEL_16:
        v16 = (const char *)&off_AA684C;
        goto LABEL_17;
      default:
___libm_error_support___def_993D72:
        JUMPOUT(0x993E0D);
    }
LABEL_23:
    v17 = *a1;
    v18 = *a2;
    v8 = *a3;
LABEL_54:
    v19 = v8;
    v15 = 1;
    v10 = v4(&v15);
    v6 = v14;
    if ( !v10 )
      *_errno() = 0x21;
    goto LABEL_56;
  }
  v6 = a4 - 0x1A;
  if ( a4 != 0x1A )
  {
    switch ( a4 )
    {
      case 0x1B:
        v15 = 2;
        goto LABEL_16;
      case 0x1C:
___libm_error_support___$LN36_1:
        v16 = (const char *)&off_AA684C;
        break;
      case 0x1D:
        v16 = (const char *)&off_AA684C;
LABEL_37:
        *a3 = *a1;
        break;
      case 0x3A:
___libm_error_support___$LN30_1:
        v16 = "acos";
        break;
      case 0x3D:
___libm_error_support___$LN8_7:
        v16 = "asin";
        break;
      default:
        goto ___libm_error_support___def_993D72;
    }
    goto LABEL_23;
  }
  v9 = 1.0;
LABEL_57:
  *a3 = v9;
  return __libm_error_support_::def_993D72(v6, v9);
}
