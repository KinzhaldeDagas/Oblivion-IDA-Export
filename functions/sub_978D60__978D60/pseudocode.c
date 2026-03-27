signed int __cdecl sub_978D60(float a1, float a2, float *a3, float *a4)
{
  float *v4; // edi
  float *v5; // esi
  float **v6; // ebp
  float **v7; // ebx
  double v8; // st7
  double v9; // st7
  int v10; // eax
  double v11; // st7
  double v12; // st7
  int v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st7
  float *v18; // eax
  float v19; // edx
  float v20; // ecx
  double v22; // st7
  float v23; // [esp+1Ch] [ebp-2Ch]
  int v24; // [esp+20h] [ebp-28h]
  int v25; // [esp+24h] [ebp-24h] BYREF
  float v26; // [esp+28h] [ebp-20h]
  float v27; // [esp+2Ch] [ebp-1Ch]
  int v28; // [esp+30h] [ebp-18h] BYREF
  float v29; // [esp+34h] [ebp-14h]
  float v30; // [esp+38h] [ebp-10h]
  int v31; // [esp+3Ch] [ebp-Ch] BYREF
  float v32; // [esp+40h] [ebp-8h]
  float v33; // [esp+44h] [ebp-4h]

  v4 = *(float **)(LODWORD(a1) + 0x7C);
  v5 = (float *)(*(_DWORD *)(LODWORD(a2) + 0x7C) + 0x10);
  v23 = v4[1];
  v6 = (float **)(LODWORD(a1) + 0x8C);
  v7 = (float **)(LODWORD(a2) + 0x8C);
  a1 = flt_A32048;
  *(float *)&v31 = v4[4] - *v5;
  v8 = v4[5];
  v25 = v31;
  v32 = v8 - v5[1];
  v9 = v4[6];
  v26 = v32;
  v33 = v9 - v5[2];
  v27 = v33;
  v10 = sub_978C00(v6, (float **)(LODWORD(a2) + 0x8C), (float *)&v25, v23, &a1, (float *)&v28);
  a2 = flt_A32048;
  v24 = v10;
  *(float *)&v31 = *v5 - v4[4];
  v11 = v5[1];
  v25 = v31;
  v32 = v11 - v4[5];
  v12 = v5[2];
  v26 = v32;
  v33 = v12 - v4[6];
  v27 = v33;
  v13 = sub_978C00(v7, v6, (float *)&v25, v23, &a2, (float *)&v31);
  if ( v24 )
  {
    v14 = a1;
    if ( v13 )
    {
      v15 = a2;
      if ( a2 >= v14 )
      {
        *a3 = a1;
        *(float *)&v31 = *v5 * v14;
        v32 = v5[1] * v14;
        v33 = v14 * v5[2];
LABEL_5:
        *(float *)&v25 = *(float *)&v28 + *(float *)&v31;
        v26 = v29 + v32;
        v16 = v30 + v33;
LABEL_9:
        v18 = a4;
        v27 = v16;
        v19 = v26;
        *a4 = *(float *)&v25;
        v20 = v27;
        v18[1] = v19;
        v18[2] = v20;
        return 1;
      }
      v17 = a2;
      *a3 = a2;
      *(float *)&v28 = v4[4] * v15;
      v29 = v4[5] * v15;
      v30 = v17 * v4[6];
    }
    else
    {
      *a3 = a1;
      *(float *)&v31 = *v5 * v14;
      v32 = v5[1] * v14;
      v33 = v14 * v5[2];
    }
    *(float *)&v25 = *(float *)&v31 + *(float *)&v28;
    v26 = v32 + v29;
    v16 = v33 + v30;
    goto LABEL_9;
  }
  if ( v13 )
  {
    v22 = a2;
    *a3 = a2;
    *(float *)&v28 = v4[4] * v22;
    v29 = v4[5] * v22;
    v30 = v22 * v4[6];
    goto LABEL_5;
  }
  return 0;
}
