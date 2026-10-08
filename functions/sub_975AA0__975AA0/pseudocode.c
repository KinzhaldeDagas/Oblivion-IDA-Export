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

  v6 = a1; /*0x975aa4*/
  v7 = a2; /*0x975aab*/
  v8 = 0; /*0x975ab3*/
  v25 = *a1 - *a2; /*0x975aba*/
  v26 = a1[1] - a2[1]; /*0x975ac4*/
  v27 = a1[2] - a2[2]; /*0x975ace*/
  v22 = a2[4] * v26 + a2[3] * v25 + a2[5] * v27; /*0x975af1*/
  v23 = a2[7] * v26 + a2[6] * v25 + a2[8] * v27; /*0x975b08*/
  v24 = v27 * a2[0xB] + v25 * a2[9] + v26 * a2[0xA]; /*0x975b21*/
  v25 = a2[4] * a1[4] + a2[3] * a1[3] + a2[5] * a1[5]; /*0x975b3b*/
  v26 = a2[7] * a1[4] + a2[6] * a1[3] + a2[8] * a1[5]; /*0x975b55*/
  v27 = a2[0xA] * a1[4] + a2[9] * a1[3] + a2[0xB] * a1[5]; /*0x975b6f*/
  do /*0x975ba4*/
  {
    if ( *(&v25 + v8) >= 0.0 ) /*0x975b7e*/
    {
      *((_BYTE *)&a2 + v8) = 0; /*0x975b9a*/
    }
    else
    {
      v9 = *(&v22 + v8); /*0x975b80*/
      *((_BYTE *)&a2 + v8) = 1; /*0x975b84*/
      *(&v22 + v8) = -v9; /*0x975b8a*/
      *(&v25 + v8) = -*(&v25 + v8); /*0x975b94*/
    }
    ++v8; /*0x975b9f*/
  }
  while ( v8 < 3 ); /*0x975ba4*/
  v10 = a3; /*0x975ba6*/
  v21 = 0.0; /*0x975baa*/
  *a3 = 0.0; /*0x975bae*/
  if ( v25 <= 0.0 ) /*0x975bc4*/
  {
    if ( v26 <= 0.0 ) /*0x975c5e*/
    {
      if ( v27 <= 0.0 ) /*0x975c9a*/
      {
        sub_9759A0(v7, &v22, &v21); /*0x975ccd*/
        goto LABEL_23; /*0x975ccd*/
      }
      v20 = v10; /*0x975c9c*/
      v19 = 2; /*0x975ca2*/
      v11 = 1; /*0x975ca4*/
    }
    else
    {
      if ( v27 > 0.0 ) /*0x975c63*/
      {
        sub_975690(1, 2, (int)&v22, (int)&v25, (int)v7, 0, v10, &v21); /*0x975c7b*/
        v10 = a3; /*0x975c80*/
        goto LABEL_23; /*0x975c87*/
      }
      v20 = v10; /*0x975c89*/
      v19 = 1; /*0x975c8f*/
      v11 = 2; /*0x975c90*/
    }
    sub_9758C0((int)&v22, &v21, v11, 0, (int)v7, v19, (int)&v25, v20); /*0x975cb1*/
LABEL_21:
    v6 = a1; /*0x975cb6*/
    v10 = a3; /*0x975cba*/
    goto LABEL_23; /*0x975cc1*/
  }
  if ( v26 <= 0.0 ) /*0x975bcf*/
  {
    if ( v27 > 0.0 ) /*0x975c1e*/
    {
      sub_975690(0, 2, (int)&v22, (int)&v25, (int)v7, 1, v10, &v21); /*0x975c37*/
      v10 = a3; /*0x975c3c*/
      goto LABEL_23; /*0x975c43*/
    }
    sub_9758C0((int)&v22, &v21, 2, 1, (int)v7, 0, (int)&v25, v10); /*0x975c57*/
    goto LABEL_21; /*0x975c57*/
  }
  if ( v27 <= 0.0 ) /*0x975bd4*/
  {
    sub_975690(0, 1, (int)&v22, (int)&v25, (int)v7, 2, v10, &v21); /*0x975c0a*/
    v10 = a3; /*0x975c0f*/
  }
  else
  {
    sub_975580(v10, &v21, v7, &v22, &v25); /*0x975be8*/
  }
LABEL_23:
  if ( *v10 < dbl_A2FC68 ) /*0x975ce0*/
  {
    v17 = a6; /*0x975d84*/
    v18 = a5; /*0x975d8a*/
    *v10 = 0.0; /*0x975d8e*/
    return (float)sub_974C80(v6, v7, a4, v18, v17); /*0x975d99*/
  }
  if ( *v10 > 1.0 ) /*0x975cef*/
  {
    v15 = a6; /*0x975d4e*/
    *v10 = 1.0; /*0x975d52*/
    v25 = *v6 + v6[3]; /*0x975d63*/
    v26 = v6[4] + v6[1]; /*0x975d74*/
    v27 = v6[5] + v6[2]; /*0x975d7e*/
    return (float)sub_974C80(&v25, v7, a4, a5, v15); /*0x975da2*/
  }
  if ( (_BYTE)a2 ) /*0x975cf8*/
    v22 = -v22; /*0x975d00*/
  if ( BYTE1(a2) ) /*0x975d09*/
    v23 = -v23; /*0x975d11*/
  if ( BYTE2(a2) ) /*0x975d1a*/
    v24 = -v24; /*0x975d22*/
  v12 = a5; /*0x975d2e*/
  *a4 = v22; /*0x975d32*/
  v13 = a6; /*0x975d38*/
  *v12 = v23; /*0x975d3c*/
  *v13 = v24; /*0x975d44*/
  return v21; /*0x975d4a*/
}
