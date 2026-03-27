void __cdecl sub_6BD310(int a1, signed int a2, unsigned __int8 a3)
{
  int v3; // ecx
  float *v4; // esi
  float *v5; // ebp
  float *v6; // eax
  double v7; // st7
  unsigned int v8; // eax
  double v9; // st6
  unsigned int v10; // ecx
  int v11; // edx
  float *v12; // ebp
  float *v13; // ebx
  float *v14; // esi
  double v15; // st5
  double v16; // rt0
  double v17; // st6
  double v18; // st7
  double v19; // rt1
  double v20; // st5
  double v21; // st5
  double v22; // st5
  double v23; // rt0
  float *v24; // edi
  unsigned int v25; // ecx
  double v26; // rt1
  double v27; // st5
  double v28; // rt2
  double v29; // st6
  double v30; // st7
  double v31; // rtt
  float v32; // [esp+10h] [ebp-1Ch]
  int v33; // [esp+14h] [ebp-18h]
  float *v34; // [esp+14h] [ebp-18h]
  int v35; // [esp+18h] [ebp-14h]
  float v36[4]; // [esp+1Ch] [ebp-10h] BYREF

  v3 = a2;
  if ( a2 != 1 )
  {
    v4 = (float *)(a3 + a1 + 4);
    v5 = (float *)(a1 + 0xC);
    v33 = a2 - 1;
    do
    {
      v32 = v4[1] * v5[0xFFFFFFFF] + v5[0xFFFFFFFE] * *v4 + v4[2] * *v5 + v4[3] * v5[1];
      if ( v32 < (double)*(float *)&SrcStr )
      {
        v6 = sub_714CC0(v4, v36);
        *v4 = *v6;
        v4[1] = v6[1];
        v4[2] = v6[2];
        v3 = a2;
        v4[3] = v6[3];
      }
      v4 = (float *)((char *)v4 + a3);
      v5 = (float *)((char *)v5 + a3);
      --v33;
    }
    while ( v33 );
  }
  v7 = flt_A30634;
  v8 = 0;
  v9 = 1.0;
  if ( v3 >= 4 )
  {
    v34 = (float *)(a3 + a1 + 2 * a3 + 4);
    v10 = ((unsigned int)(v3 - 4) >> 2) + 1;
    v11 = 4 * a3;
    v12 = (float *)(a1 + 2 * a3 + 4);
    v13 = (float *)(a3 + a1 + 4);
    v14 = (float *)(a1 + 4);
    v35 = 4 * v10;
    do
    {
      v15 = *v14;
      if ( v15 >= v7 )
      {
        if ( v15 > v9 )
          *v14 = v9;
        v19 = v9;
        v17 = v7;
        v18 = v19;
      }
      else
      {
        v16 = v9;
        v17 = v7;
        v18 = v16;
        *v14 = v17;
      }
      v20 = *v13;
      if ( v20 >= v17 )
      {
        if ( v20 > v18 )
          *v13 = v18;
      }
      else
      {
        *v13 = v17;
      }
      v21 = *v12;
      if ( v21 >= v17 )
      {
        if ( v21 > v18 )
          *v12 = v18;
      }
      else
      {
        *v12 = v17;
      }
      v22 = *v34;
      if ( v22 >= v17 )
      {
        if ( v22 > v18 )
          *v34 = v18;
      }
      else
      {
        *v34 = v17;
      }
      v34 = (float *)((char *)v34 + v11);
      v23 = v17;
      v9 = v18;
      v7 = v23;
      v14 = (float *)((char *)v14 + v11);
      v13 = (float *)((char *)v13 + v11);
      v12 = (float *)((char *)v12 + v11);
      --v10;
    }
    while ( v10 );
    v3 = a2;
    v8 = v35;
  }
  if ( v8 < v3 )
  {
    v24 = (float *)(v8 * a3 + a1 + 4);
    v25 = v3 - v8;
    while ( 1 )
    {
      v27 = *v24;
      if ( v27 >= v7 )
      {
        if ( v27 > v9 )
          *v24 = v9;
        v31 = v9;
        v29 = v7;
        v30 = v31;
      }
      else
      {
        v28 = v9;
        v29 = v7;
        v30 = v28;
        *v24 = v29;
      }
      v24 = (float *)((char *)v24 + a3);
      if ( !--v25 )
        break;
      v26 = v29;
      v9 = v30;
      v7 = v26;
    }
  }
}
