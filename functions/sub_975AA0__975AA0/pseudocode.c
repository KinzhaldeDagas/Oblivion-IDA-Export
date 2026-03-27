double __cdecl sub_975AA0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float *v6; // ebx
  float *v7; // ebp
  int v8; // ecx
  double v9; // st6
  float *v10; // edi
  int v11; // edi
  float *v12; // eax
  float *v13; // ecx
  float *v15; // edx
  float *v17; // eax
  float *v18; // ecx
  int v19; // [esp-14h] [ebp-38h]
  float *v20; // [esp-Ch] [ebp-30h]
  float v21; // [esp+8h] [ebp-1Ch] BYREF
  float v22; // [esp+Ch] [ebp-18h] BYREF
  float v23; // [esp+10h] [ebp-14h]
  float v24; // [esp+14h] [ebp-10h]
  float v25; // [esp+18h] [ebp-Ch] BYREF
  float v26; // [esp+1Ch] [ebp-8h]
  float v27; // [esp+20h] [ebp-4h]

  v6 = a1;
  v7 = a2;
  v8 = 0;
  v25 = *a1 - *a2;
  v26 = a1[1] - a2[1];
  v27 = a1[2] - a2[2];
  v22 = a2[4] * v26 + a2[3] * v25 + a2[5] * v27;
  v23 = a2[7] * v26 + a2[6] * v25 + a2[8] * v27;
  v24 = v27 * a2[0xB] + v25 * a2[9] + v26 * a2[0xA];
  v25 = a2[4] * a1[4] + a2[3] * a1[3] + a2[5] * a1[5];
  v26 = a2[7] * a1[4] + a2[6] * a1[3] + a2[8] * a1[5];
  v27 = a2[0xA] * a1[4] + a2[9] * a1[3] + a2[0xB] * a1[5];
  do
  {
    if ( *(&v25 + v8) >= 0.0 )
    {
      *((_BYTE *)&a2 + v8) = 0;
    }
    else
    {
      v9 = *(&v22 + v8);
      *((_BYTE *)&a2 + v8) = 1;
      *(&v22 + v8) = -v9;
      *(&v25 + v8) = -*(&v25 + v8);
    }
    ++v8;
  }
  while ( v8 < 3 );
  v10 = a3;
  v21 = 0.0;
  *a3 = 0.0;
  if ( v25 <= 0.0 )
  {
    if ( v26 <= 0.0 )
    {
      if ( v27 <= 0.0 )
      {
        sub_9759A0(v7, &v22, &v21);
        goto LABEL_23;
      }
      v20 = v10;
      v19 = 2;
      v11 = 1;
    }
    else
    {
      if ( v27 > 0.0 )
      {
        sub_975690(1, 2, (int)&v22, (int)&v25, (int)v7, 0, v10, &v21);
        v10 = a3;
        goto LABEL_23;
      }
      v20 = v10;
      v19 = 1;
      v11 = 2;
    }
    sub_9758C0((int)&v22, &v21, v11, 0, (int)v7, v19, (int)&v25, v20);
LABEL_21:
    v6 = a1;
    v10 = a3;
    goto LABEL_23;
  }
  if ( v26 <= 0.0 )
  {
    if ( v27 > 0.0 )
    {
      sub_975690(0, 2, (int)&v22, (int)&v25, (int)v7, 1, v10, &v21);
      v10 = a3;
      goto LABEL_23;
    }
    sub_9758C0((int)&v22, &v21, 2, 1, (int)v7, 0, (int)&v25, v10);
    goto LABEL_21;
  }
  if ( v27 <= 0.0 )
  {
    sub_975690(0, 1, (int)&v22, (int)&v25, (int)v7, 2, v10, &v21);
    v10 = a3;
  }
  else
  {
    sub_975580(v10, &v21, v7, &v22, &v25);
  }
LABEL_23:
  if ( *v10 < dbl_A2FC68 )
  {
    v17 = a6;
    v18 = a5;
    *v10 = 0.0;
    return (float)sub_974C80(v6, v7, a4, v18, v17);
  }
  if ( *v10 > 1.0 )
  {
    v15 = a6;
    *v10 = 1.0;
    v25 = *v6 + v6[3];
    v26 = v6[4] + v6[1];
    v27 = v6[5] + v6[2];
    return (float)sub_974C80(&v25, v7, a4, a5, v15);
  }
  if ( (_BYTE)a2 )
    v22 = -v22;
  if ( BYTE1(a2) )
    v23 = -v23;
  if ( BYTE2(a2) )
    v24 = -v24;
  v12 = a5;
  *a4 = v22;
  v13 = a6;
  *v12 = v23;
  *v13 = v24;
  return v21;
}
