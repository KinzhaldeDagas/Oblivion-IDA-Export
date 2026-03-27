int *__stdcall sub_9A92E0(int a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // edi
  int *result; // eax
  int *v5; // esi
  int *v6; // esi
  float *v7; // esi
  double v8; // st7
  float *v9; // esi
  float *v10; // esi

  v1 = *(_DWORD *)(a1 + 0x14);
  v2 = *(_DWORD *)(a1 + 0x28) / *(_DWORD *)(a1 + 0x2C);
  if ( !byte_B4295B )
    sub_783C70();
  v3 = dword_B428D8[(unsigned __int8)v1];
  switch ( v2 )
  {
    case 1:
      if ( v3 == 1 )
      {
        dword_BAA930 = **(unsigned __int8 **)(a1 + 0x30);
        return &dword_BAA930;
      }
      else if ( v3 == 3 )
      {
        dword_BAA934 = **(_DWORD **)(a1 + 0x30);
        dword_BAA938 = dword_BAA934;
        dword_BAA93C = dword_BAA934;
        dword_BAA940 = dword_BAA934;
        return &dword_BAA934;
      }
      else
      {
        flt_BAA990 = **(float **)(a1 + 0x30);
        flt_BAA994 = flt_BAA990;
        flt_BAA998 = flt_BAA990;
        flt_BAA99C = flt_BAA990;
        return (int *)&flt_BAA990;
      }
    case 2:
      v5 = *(int **)(a1 + 0x30);
      if ( v3 == 3 )
      {
        dword_BAA934 = *v5;
        dword_BAA938 = v5[1];
        dword_BAA940 = dword_BAA938;
        dword_BAA93C = dword_BAA934;
        return &dword_BAA934;
      }
      else
      {
        flt_BAA990 = *(float *)v5;
        flt_BAA994 = *((float *)v5 + 1);
        flt_BAA998 = flt_BAA990;
        flt_BAA99C = flt_BAA994;
        return (int *)&flt_BAA990;
      }
    case 3:
      v6 = *(int **)(a1 + 0x30);
      if ( v3 == 3 )
      {
        dword_BAA934 = *v6;
        dword_BAA938 = v6[1];
        dword_BAA93C = v6[2];
        dword_BAA940 = 1;
        return &dword_BAA934;
      }
      else
      {
        flt_BAA990 = *(float *)v6;
        flt_BAA994 = *((float *)v6 + 1);
        flt_BAA998 = *((float *)v6 + 2);
        flt_BAA99C = 1.0;
        return (int *)&flt_BAA990;
      }
    case 4:
    case 0x10:
      goto LABEL_15;
    case 8:
      v7 = *(float **)(a1 + 0x30);
      flt_BAA9A0 = *v7;
      flt_BAA9A4 = v7[1];
      flt_BAA9A8 = v7[2];
      flt_BAA9AC = v7[3];
      flt_BAA9B0 = v7[4];
      flt_BAA9B4 = v7[5];
      flt_BAA9B8 = v7[6];
      flt_BAA9BC = v7[7];
      v8 = 0.0;
      flt_BAA9C0 = 0.0;
      flt_BAA9C4 = 0.0;
      flt_BAA9C8 = 0.0;
      goto LABEL_17;
    case 9:
      v9 = *(float **)(a1 + 0x30);
      flt_BAA9A0 = *v9;
      flt_BAA9A4 = v9[1];
      flt_BAA9A8 = v9[2];
      v8 = 0.0;
      flt_BAA9AC = 0.0;
      flt_BAA9B0 = v9[3];
      flt_BAA9B4 = v9[4];
      flt_BAA9B8 = v9[5];
      flt_BAA9BC = 0.0;
      flt_BAA9C0 = v9[6];
      flt_BAA9C4 = v9[7];
      flt_BAA9C8 = v9[8];
LABEL_17:
      flt_BAA9CC = v8;
      goto LABEL_18;
    case 0xC:
      v10 = *(float **)(a1 + 0x30);
      flt_BAA9A0 = *v10;
      flt_BAA9A4 = v10[1];
      flt_BAA9A8 = v10[2];
      flt_BAA9AC = v10[3];
      flt_BAA9B0 = v10[4];
      flt_BAA9B4 = v10[5];
      flt_BAA9B8 = v10[6];
      flt_BAA9BC = v10[7];
      flt_BAA9C0 = v10[8];
      flt_BAA9C4 = v10[9];
      flt_BAA9C8 = v10[0xA];
      flt_BAA9CC = v10[0xB];
      v8 = 0.0;
LABEL_18:
      flt_BAA9D0 = v8;
      flt_BAA9D4 = v8;
      flt_BAA9D8 = v8;
      flt_BAA9DC = v8;
      result = (int *)&flt_BAA9A0;
      break;
    default:
      if ( *(_DWORD *)(a1 + 0x2C) == 4 && (v2 & 3) == 0 )
LABEL_15:
        result = *(int **)(a1 + 0x30);
      else
        result = 0;
      break;
  }
  return result;
}
