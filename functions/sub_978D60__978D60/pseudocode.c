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

  v4 = *(float **)(LODWORD(a1) + 0x7C); /*0x978d72*/
  v5 = (float *)(*(_DWORD *)(LODWORD(a2) + 0x7C) + 0x10); /*0x978d78*/
  v23 = v4[1]; /*0x978d7b*/
  v6 = (float **)(LODWORD(a1) + 0x8C); /*0x978d7f*/
  v7 = (float **)(LODWORD(a2) + 0x8C); /*0x978d8b*/
  a1 = flt_A32048; /*0x978d91*/
  *(float *)&v31 = v4[4] - *v5; /*0x978da5*/
  v8 = v4[5]; /*0x978dad*/
  v25 = v31; /*0x978db0*/
  v32 = v8 - v5[1]; /*0x978db7*/
  v9 = v4[6]; /*0x978dbf*/
  v26 = v32; /*0x978dc2*/
  v33 = v9 - v5[2]; /*0x978dc9*/
  v27 = v33; /*0x978dd5*/
  v10 = sub_978C00(v6, (float **)(LODWORD(a2) + 0x8C), (float *)&v25, v23, &a1, (float *)&v28); /*0x978de3*/
  a2 = flt_A32048; /*0x978dee*/
  v24 = v10; /*0x978df2*/
  *(float *)&v31 = *v5 - v4[4]; /*0x978dfe*/
  v11 = v5[1]; /*0x978e06*/
  v25 = v31; /*0x978e09*/
  v32 = v11 - v4[5]; /*0x978e15*/
  v12 = v5[2]; /*0x978e1d*/
  v26 = v32; /*0x978e20*/
  v33 = v12 - v4[6]; /*0x978e2d*/
  v27 = v33; /*0x978e39*/
  v13 = sub_978C00(v7, v6, (float *)&v25, v23, &a2, (float *)&v31); /*0x978e47*/
  if ( v24 ) /*0x978e54*/
  {
    v14 = a1; /*0x978e5c*/
    if ( v13 ) /*0x978e60*/
    {
      v15 = a2; /*0x978e62*/
      if ( a2 >= v14 ) /*0x978e6d*/
      {
        *a3 = a1; /*0x978e75*/
        *(float *)&v31 = *v5 * v14; /*0x978e7b*/
        v32 = v5[1] * v14; /*0x978e84*/
        v33 = v14 * v5[2]; /*0x978e8b*/
LABEL_5:
        *(float *)&v25 = *(float *)&v28 + *(float *)&v31; /*0x978e8f*/
        v26 = v29 + v32; /*0x978ea3*/
        v16 = v30 + v33; /*0x978eab*/
LABEL_9:
        v18 = a4; /*0x978f12*/
        v27 = v16; /*0x978f16*/
        v19 = v26; /*0x978f1e*/
        *a4 = *(float *)&v25; /*0x978f23*/
        v20 = v27; /*0x978f25*/
        v18[1] = v19; /*0x978f2a*/
        v18[2] = v20; /*0x978f2e*/
        return 1; /*0x978f3a*/
      }
      v17 = a2; /*0x978eb5*/
      *a3 = a2; /*0x978eb7*/
      *(float *)&v28 = v4[4] * v15; /*0x978ebe*/
      v29 = v4[5] * v15; /*0x978ec7*/
      v30 = v17 * v4[6]; /*0x978ece*/
    }
    else
    {
      *a3 = a1; /*0x978ed8*/
      *(float *)&v31 = *v5 * v14; /*0x978ede*/
      v32 = v5[1] * v14; /*0x978ee7*/
      v33 = v14 * v5[2]; /*0x978eee*/
    }
    *(float *)&v25 = *(float *)&v31 + *(float *)&v28; /*0x978efa*/
    v26 = v32 + v29; /*0x978f06*/
    v16 = v33 + v30; /*0x978f0e*/
    goto LABEL_9; /*0x978f0e*/
  }
  if ( v13 ) /*0x978f3d*/
  {
    v22 = a2; /*0x978f3f*/
    *a3 = a2; /*0x978f47*/
    *(float *)&v28 = v4[4] * v22; /*0x978f4e*/
    v29 = v4[5] * v22; /*0x978f57*/
    v30 = v22 * v4[6]; /*0x978f5e*/
    goto LABEL_5; /*0x978f62*/
  }
  return 0; /*0x978f22*/
}
