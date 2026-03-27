float *__cdecl sub_725890(float *a1, unsigned int a2, int a3)
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

  v3 = 0.0;
  v5 = 0;
  if ( (int)a2 < 4 )
  {
    result = a1;
  }
  else
  {
    v6 = ((a2 - 4) >> 2) + 1;
    v27 = 4 * v6;
    result = a1;
    do
    {
      v28 = result[1] * result[1] + *result * *result + result[2] * result[2];
      if ( v28 == 0.0 )
      {
        v8 = v3;
        v9 = *result;
        v29 = v8;
      }
      else
      {
        v10 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v28);
        if ( (((unsigned __int8)(LODWORD(v28) >> 0x17) - 0x7F) & 1) != 0 )
          v10 |= (unsigned int)&loc_800000;
        v29 = 1.0
            / COERCE_FLOAT(
                *(_DWORD *)(dword_B3FD88 + 4 * HIWORD(v10))
              | ((((__int16)((LODWORD(v28) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v8 = v3;
        v9 = *result;
      }
      *result = v9 * v29;
      result[1] = result[1] * v29;
      result[2] = v29 * result[2];
      v11 = (float *)((char *)result + a3);
      v30 = v11[1] * v11[1] + *v11 * *v11 + v11[2] * v11[2];
      if ( v30 == 0.0 )
      {
        v12 = *v11;
        v31 = v8;
      }
      else
      {
        v13 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v30);
        if ( (((unsigned __int8)(LODWORD(v30) >> 0x17) - 0x7F) & 1) != 0 )
          v13 |= (unsigned int)&loc_800000;
        v31 = 1.0
            / COERCE_FLOAT(
                *(_DWORD *)(dword_B3FD88 + 4 * HIWORD(v13))
              | ((((__int16)((LODWORD(v30) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v12 = *v11;
      }
      *v11 = v12 * v31;
      v11[1] = v11[1] * v31;
      v11[2] = v31 * v11[2];
      v14 = (float *)((char *)v11 + a3);
      v32 = v14[1] * v14[1] + *v14 * *v14 + v14[2] * v14[2];
      if ( v32 == 0.0 )
      {
        v15 = *v14;
        v33 = v8;
      }
      else
      {
        v16 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v32);
        if ( (((unsigned __int8)(LODWORD(v32) >> 0x17) - 0x7F) & 1) != 0 )
          v16 |= (unsigned int)&loc_800000;
        v33 = 1.0
            / COERCE_FLOAT(
                *(_DWORD *)(dword_B3FD88 + 4 * HIWORD(v16))
              | ((((__int16)((LODWORD(v32) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v15 = *v14;
      }
      *v14 = v15 * v33;
      v14[1] = v14[1] * v33;
      v14[2] = v33 * v14[2];
      v17 = (float *)((char *)v14 + a3);
      v34 = v17[1] * v17[1] + *v17 * *v17 + v17[2] * v17[2];
      if ( v34 == 0.0 )
      {
        v18 = *v17;
        v35 = v8;
      }
      else
      {
        v19 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v34);
        if ( (((unsigned __int8)(LODWORD(v34) >> 0x17) - 0x7F) & 1) != 0 )
          v19 |= (unsigned int)&loc_800000;
        v35 = 1.0
            / COERCE_FLOAT(
                *(_DWORD *)(dword_B3FD88 + 4 * HIWORD(v19))
              | ((((__int16)((LODWORD(v34) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v18 = *v17;
      }
      *v17 = v18 * v35;
      v17[1] = v17[1] * v35;
      v3 = v8;
      v17[2] = v35 * v17[2];
      result = (float *)((char *)v17 + a3);
      --v6;
    }
    while ( v6 );
    v5 = v27;
  }
  if ( v5 < a2 )
  {
    v20 = a2 - v5;
    do
    {
      v21 = result[1];
      v22 = *result;
      v36 = v22 * v22 + v21 * v21 + result[2] * result[2];
      if ( v36 == 0.0 )
      {
        v23 = v3;
        v24 = result[2];
        v37 = v23;
      }
      else
      {
        v25 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v36);
        if ( (((unsigned __int8)(LODWORD(v36) >> 0x17) - 0x7F) & 1) != 0 )
          v25 |= (unsigned int)&loc_800000;
        v37 = 1.0
            / COERCE_FLOAT(
                *(_DWORD *)(dword_B3FD88 + 4 * HIWORD(v25))
              | ((((__int16)((LODWORD(v36) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
        v23 = v3;
        v24 = result[2];
      }
      *result = v22 * v37;
      result[1] = v21 * v37;
      v26 = v24 * v37;
      v3 = v23;
      result[2] = v26;
      result = (float *)((char *)result + a3);
      --v20;
    }
    while ( v20 );
  }
  return result;
}
