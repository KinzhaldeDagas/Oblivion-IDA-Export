// Normalize count three-float vectors in place at caller-supplied byte stride. Uses Oblivion's reciprocal-square-root lookup approximation and leaves zero vectors zero.
float *__cdecl NiPoint3_NormalizeStridedArray(float *a1, unsigned int a2, int a3)
{
  double v3; // st7
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  float *result; // eax
  double v8; // st5
  double v9; // st7
  unsigned int v10; // ecx
  float *v11; // eax
  double v12; // st7
  unsigned int v13; // ecx
  float *v14; // eax
  double v15; // st7
  unsigned int v16; // ecx
  float *v17; // eax
  double v18; // st7
  unsigned int v19; // ecx
  unsigned int v20; // esi
  double v21; // st5
  double v22; // st4
  double v23; // st3
  double v24; // st7
  unsigned int v25; // ecx
  double v26; // st5
  int v27; // [esp+Ch] [ebp-4h]
  float v28; // [esp+18h] [ebp+8h]
  float v29; // [esp+18h] [ebp+8h]
  float v30; // [esp+18h] [ebp+8h]
  float v31; // [esp+18h] [ebp+8h]
  float v32; // [esp+18h] [ebp+8h]
  float v33; // [esp+18h] [ebp+8h]
  float v34; // [esp+18h] [ebp+8h]
  float v35; // [esp+18h] [ebp+8h]
  float v36; // [esp+18h] [ebp+8h]
  float v37; // [esp+18h] [ebp+8h]

  v3 = 0.0; /*0x725891*/
  v5 = 0; /*0x72589b*/
  if ( (int)a2 < 4 ) /*0x7258a5*/
  {
    result = a1; /*0x725b18*/
  }
  else
  {
    v6 = ((a2 - 4) >> 2) + 1; /*0x7258b1*/
    v27 = 4 * v6; /*0x7258bb*/
    result = a1; /*0x7258bf*/
    do /*0x725b0b*/
    {
      v28 = result[1] * result[1] + *result * *result + result[2] * result[2]; /*0x7258dc*/
      if ( v28 == 0.0 ) /*0x7258e6*/
      {
        v8 = v3; /*0x7258e8*/
        v9 = *result; /*0x7258e8*/
        v29 = v8; /*0x7258ea*/
      }
      else
      {
        v10 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v28); /*0x7258fb*/
        if ( (((unsigned __int8)(LODWORD(v28) >> 0x17) - 0x7F) & 1) != 0 ) /*0x725904*/
          v10 |= (unsigned int)&loc_800000; /*0x725906*/
        v29 = 1.0 /*0x72592f*/
            / COERCE_FLOAT(
                *(_DWORD *)(unk_B3FD88 + 4 * HIWORD(v10))
              | ((((__int16)((LODWORD(v28) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v8 = v3; /*0x725933*/
        v9 = *result; /*0x725933*/
      }
      *result = v9 * v29; /*0x72593f*/
      result[1] = result[1] * v29; /*0x725946*/
      result[2] = v29 * result[2]; /*0x725950*/
      v11 = (float *)((char *)result + a3); /*0x725953*/
      v30 = v11[1] * v11[1] + *v11 * *v11 + v11[2] * v11[2]; /*0x72596d*/
      if ( v30 == 0.0 ) /*0x725977*/
      {
        v12 = *v11; /*0x725979*/
        v31 = v8; /*0x72597b*/
      }
      else
      {
        v13 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v30); /*0x72598c*/
        if ( (((unsigned __int8)(LODWORD(v30) >> 0x17) - 0x7F) & 1) != 0 ) /*0x725995*/
          v13 |= (unsigned int)&loc_800000; /*0x725997*/
        v31 = 1.0 /*0x7259c0*/
            / COERCE_FLOAT(
                *(_DWORD *)(unk_B3FD88 + 4 * HIWORD(v13))
              | ((((__int16)((LODWORD(v30) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v12 = *v11; /*0x7259c4*/
      }
      *v11 = v12 * v31; /*0x7259d0*/
      v11[1] = v11[1] * v31; /*0x7259d7*/
      v11[2] = v31 * v11[2]; /*0x7259e1*/
      v14 = (float *)((char *)v11 + a3); /*0x7259e4*/
      v32 = v14[1] * v14[1] + *v14 * *v14 + v14[2] * v14[2]; /*0x7259fe*/
      if ( v32 == 0.0 ) /*0x725a08*/
      {
        v15 = *v14; /*0x725a0a*/
        v33 = v8; /*0x725a0c*/
      }
      else
      {
        v16 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v32); /*0x725a1d*/
        if ( (((unsigned __int8)(LODWORD(v32) >> 0x17) - 0x7F) & 1) != 0 ) /*0x725a26*/
          v16 |= (unsigned int)&loc_800000; /*0x725a28*/
        v33 = 1.0 /*0x725a51*/
            / COERCE_FLOAT(
                *(_DWORD *)(unk_B3FD88 + 4 * HIWORD(v16))
              | ((((__int16)((LODWORD(v32) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v15 = *v14; /*0x725a55*/
      }
      *v14 = v15 * v33; /*0x725a61*/
      v14[1] = v14[1] * v33; /*0x725a68*/
      v14[2] = v33 * v14[2]; /*0x725a72*/
      v17 = (float *)((char *)v14 + a3); /*0x725a75*/
      v34 = v17[1] * v17[1] + *v17 * *v17 + v17[2] * v17[2]; /*0x725a8f*/
      if ( v34 == 0.0 ) /*0x725a99*/
      {
        v18 = *v17; /*0x725a9b*/
        v35 = v8; /*0x725a9d*/
      }
      else
      {
        v19 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v34); /*0x725aae*/
        if ( (((unsigned __int8)(LODWORD(v34) >> 0x17) - 0x7F) & 1) != 0 ) /*0x725ab7*/
          v19 |= (unsigned int)&loc_800000; /*0x725ab9*/
        v35 = 1.0 /*0x725ae2*/
            / COERCE_FLOAT(
                *(_DWORD *)(unk_B3FD88 + 4 * HIWORD(v19))
              | ((((__int16)((LODWORD(v34) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v18 = *v17; /*0x725ae6*/
      }
      *v17 = v18 * v35; /*0x725af2*/
      v17[1] = v17[1] * v35; /*0x725af9*/
      v3 = v8; /*0x725b01*/
      v17[2] = v35 * v17[2]; /*0x725b03*/
      result = (float *)((char *)v17 + a3); /*0x725b06*/
      --v6; /*0x725b08*/
    }
    while ( v6 ); /*0x725b0b*/
    v5 = v27; /*0x725b11*/
  }
  if ( v5 < a2 ) /*0x725b1e*/
  {
    v20 = a2 - v5; /*0x725b24*/
    do /*0x725bb3*/
    {
      v21 = result[1]; /*0x725b26*/
      v22 = *result; /*0x725b29*/
      v36 = v22 * v22 + v21 * v21 + result[2] * result[2]; /*0x725b3e*/
      if ( v36 == 0.0 ) /*0x725b48*/
      {
        v23 = v3; /*0x725b4a*/
        v24 = result[2]; /*0x725b4a*/
        v37 = v23; /*0x725b4c*/
      }
      else
      {
        v25 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v36); /*0x725b5d*/
        if ( (((unsigned __int8)(LODWORD(v36) >> 0x17) - 0x7F) & 1) != 0 ) /*0x725b66*/
          v25 |= (unsigned int)&loc_800000; /*0x725b68*/
        v37 = 1.0 /*0x725b90*/
            / COERCE_FLOAT(
                *(_DWORD *)(unk_B3FD88 + 4 * HIWORD(v25))
              | ((((__int16)((LODWORD(v36) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v23 = v3; /*0x725b94*/
        v24 = result[2]; /*0x725b94*/
      }
      *result = v22 * v37; /*0x725b9e*/
      result[1] = v21 * v37; /*0x725ba4*/
      v26 = v24 * v37; /*0x725ba9*/
      v3 = v23; /*0x725ba9*/
      result[2] = v26; /*0x725bab*/
      result = (float *)((char *)result + a3); /*0x725bae*/
      --v20; /*0x725bb0*/
    }
    while ( v20 ); /*0x725bb3*/
  }
  return result; /*0x725bbf*/
}
