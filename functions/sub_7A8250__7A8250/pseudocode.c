float *__cdecl sub_7A8250(unsigned int *a1)
{
  float *v1; // eax
  float *v2; // edi
  int v3; // eax
  unsigned int v4; // ebp
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  float *v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  float *v13; // eax
  rsize_t v15; // [esp-4h] [ebp-80h]
  float v16[3]; // [esp+14h] [ebp-68h] BYREF
  float v17[3]; // [esp+20h] [ebp-5Ch] BYREF
  int v18; // [esp+2Ch] [ebp-50h] BYREF
  char v19; // [esp+30h] [ebp-4Ch]
  int v20; // [esp+40h] [ebp-3Ch]
  int v21; // [esp+44h] [ebp-38h]
  _BYTE v22[40]; // [esp+48h] [ebp-34h] BYREF
  int v23; // [esp+78h] [ebp-4h]

  v1 = (float *)FormHeapAlloc(0x4Cu);
  v23 = 0;
  if ( v1 )
    v2 = sub_7A7D80(v1);
  else
    v2 = 0;
  v23 = 0xFFFFFFFF;
  v3 = sub_78EB40(a1);
  do
  {
    switch ( v3 )
    {
      case 0x1B5E:
        *((_DWORD *)v2 + 5) = sub_78EB70(a1);
        break;
      case 0x1B5F:
        v4 = (*a1)++;
        v5 = a1[2];
        if ( !v5 || v4 >= a1[3] - v5 )
          _invalid_parameter_noinfo();
        *((_BYTE *)v2 + 0x10) = *(_BYTE *)(a1[2] + v4);
        break;
      case 0x1B60:
        v6 = (*a1)++;
        v7 = a1[2];
        if ( !v7 || v6 >= a1[3] - v7 )
          _invalid_parameter_noinfo();
        *((_BYTE *)v2 + 0x18) = *(_BYTE *)(a1[2] + v6);
        break;
      case 0x1B62:
        v8 = sub_78EBA0(a1, v16);
        v2[7] = *v8;
        v2[8] = v8[1];
        v2[9] = v8[2];
        break;
      case 0x1B63:
        v9 = (*a1)++;
        v10 = a1[2];
        if ( !v10 || v9 >= a1[3] - v10 )
          _invalid_parameter_noinfo();
        *((_BYTE *)v2 + 0x40) = *(_BYTE *)(a1[2] + v9);
        break;
      case 0x1B64:
        v11 = (*a1)++;
        v12 = a1[2];
        if ( !v12 || v11 >= a1[3] - v12 )
          _invalid_parameter_noinfo();
        v2[0x11] = (double)*(unsigned __int8 *)(a1[2] + v11) / dbl_A3DDD8;
        break;
      case 0x1B65:
        *((_DWORD *)v2 + 0x12) = sub_78EB40(a1);
        break;
      case 0x1B67:
        v13 = sub_78EBA0(a1, v17);
        v2[1] = *v13;
        v2[2] = v13[1];
        v2[3] = v13[2];
        break;
      case 0x1B68:
        sub_78EB10(a1);
        break;
      default:
        LODWORD(v15) = 0x18;
        v21 = 0xF;
        v20 = 0;
        v19 = 0;
        sub_414500(&v18, (int)v2, "malformed billboard leaf", v15);
        v23 = 1;
        sub_789190((std::exception *)v22, &v18, 0);
        ThrowException__((int)v22, &_TI3_AVIdvFileError__);
    }
    v3 = sub_78EB40(a1);
  }
  while ( v3 != 0x1B5D );
  return v2;
}
