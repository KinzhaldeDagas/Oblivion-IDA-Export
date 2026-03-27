char __cdecl sub_6BDBA0(float a1, int a2, int a3, int a4, int *a5, unsigned __int8 a6)
{
  double v6; // st7
  int v7; // ebx
  unsigned int v8; // edi
  double v9; // st6
  unsigned int v10; // ecx
  float *v11; // edi
  float *v12; // ebp
  float *v13; // ebx
  int v14; // edx
  double v15; // st6
  int v16; // ebp
  float *v17; // edx
  int v18; // edi
  int v19; // esi
  float v21; // [esp+20h] [ebp-10h]
  float v22; // [esp+20h] [ebp-10h]
  float v23; // [esp+20h] [ebp-10h]
  float v24; // [esp+20h] [ebp-10h]
  float v25; // [esp+20h] [ebp-10h]
  float v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+24h] [ebp-Ch]
  float *v28; // [esp+28h] [ebp-8h]
  unsigned int v29; // [esp+2Ch] [ebp-4h]

  if ( a4 == 1 )
    return *(_BYTE *)(a2 + 4);
  v6 = a1;
  if ( -flt_A7DEB4 == a1 )
    return *(_BYTE *)(a2 + 4);
  v7 = a2;
  v8 = a4 - 1;
  a4 = *a5;
  v29 = v8;
  v27 = *(float *)(a4 * a6 + a2);
  if ( v27 > v6 )
  {
    v9 = *(float *)a2;
    *(float *)&a4 = 0.0;
    v27 = v9;
  }
  v10 = a4 + 1;
  if ( (int)(v8 - a4) < 4 )
  {
    v15 = v21;
LABEL_13:
    if ( v10 <= v8 )
    {
      v16 = a4;
      v17 = (float *)(v7 + v10 * a6);
      do
      {
        v26 = *v17;
        v15 = v26;
        if ( v26 >= v6 )
          break;
        ++v10;
        v27 = v26;
        ++v16;
        v17 = (float *)((char *)v17 + a6);
      }
      while ( v10 <= v8 );
      a4 = v16;
    }
  }
  else
  {
    v11 = (float *)(a2 + v10 * a6);
    v12 = (float *)(a2 + a6 * (a4 + 3));
    v13 = (float *)(a2 + a6 * (a4 + 2));
    v14 = 4 * a6;
    v28 = (float *)(a2 + a6 * (a4 + 4));
    while ( 1 )
    {
      v22 = *v11;
      v15 = v22;
      if ( v22 >= v6 )
        goto LABEL_21;
      v27 = v22;
      v23 = *v13;
      v15 = v23;
      if ( v23 >= v6 )
      {
        ++v10;
        ++a4;
LABEL_21:
        v7 = a2;
        goto LABEL_18;
      }
      v27 = v23;
      v24 = *v12;
      v15 = v24;
      if ( v24 >= v6 )
      {
        v7 = a2;
        v10 += 2;
        a4 += 2;
        goto LABEL_18;
      }
      v27 = v24;
      v25 = *v28;
      v15 = v25;
      if ( v25 >= v6 )
        break;
      v27 = v25;
      a4 += 4;
      v28 = (float *)((char *)v28 + v14);
      v10 += 4;
      v11 = (float *)((char *)v11 + v14);
      v13 = (float *)((char *)v13 + v14);
      v12 = (float *)((char *)v12 + v14);
      if ( v10 > v29 - 3 )
      {
        v7 = a2;
        v8 = v29;
        goto LABEL_13;
      }
    }
    v7 = a2;
    v10 += 3;
    a4 += 3;
  }
LABEL_18:
  v18 = a4;
  v19 = v7 + a4 * a6;
  *(float *)&a4 = (v6 - v27) / (v15 - v27);
  (*(void (__cdecl **)(int, int, unsigned int, int *))(4 * a3 + 0xB3D070))(a4, v19, v7 + v10 * a6, &a4);
  *a5 = v18;
  return a4;
}
