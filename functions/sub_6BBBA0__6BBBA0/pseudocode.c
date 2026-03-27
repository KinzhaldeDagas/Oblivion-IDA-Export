_DWORD *__cdecl sub_6BBBA0(_DWORD *a1, float a2, int a3, int a4, int a5, int *a6, unsigned __int8 a7)
{
  double v7; // st7
  int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  float *v12; // ebx
  float *v13; // ebp
  int v14; // edx
  double v15; // st6
  float *v16; // edx
  int v17; // ecx
  int v18; // edx
  int v20; // ecx
  int v21; // ecx
  float v22; // [esp+20h] [ebp-1Ch]
  float *v23; // [esp+24h] [ebp-18h]
  float *v24; // [esp+28h] [ebp-14h]
  unsigned int v25; // [esp+2Ch] [ebp-10h]
  _DWORD v26[3]; // [esp+30h] [ebp-Ch] BYREF
  int v27; // [esp+50h] [ebp+14h]
  int v28; // [esp+50h] [ebp+14h]
  int v29; // [esp+50h] [ebp+14h]
  int v30; // [esp+50h] [ebp+14h]
  int v31; // [esp+50h] [ebp+14h]
  float v32; // [esp+50h] [ebp+14h]

  if ( a5 == 1 || (v7 = a2, -flt_A7DEB4 == a2) )
  {
    *a1 = *(_DWORD *)(a3 + 4);
    v21 = *(_DWORD *)(a3 + 0xC);
    a1[1] = *(_DWORD *)(a3 + 8);
    a1[2] = v21;
    return a1;
  }
  else
  {
    v8 = a3;
    v9 = *a6;
    v10 = a5 - 1;
    v25 = a5 - 1;
    v22 = *(float *)(*a6 * a7 + a3);
    if ( v22 > v7 )
    {
      v9 = 0;
      v22 = *(float *)a3;
    }
    v11 = v9 + 1;
    if ( (int)(v10 - v9) < 4 )
    {
      v15 = *(float *)&a5;
LABEL_13:
      if ( v11 <= v10 )
      {
        v16 = (float *)(v8 + v11 * a7);
        do
        {
          v31 = *(int *)v16;
          v15 = *(float *)&v31;
          if ( *(float *)&v31 >= v7 )
            break;
          ++v11;
          v22 = *(float *)&v31;
          ++v9;
          v16 = (float *)((char *)v16 + a7);
        }
        while ( v11 <= v10 );
      }
    }
    else
    {
      v24 = (float *)(a3 + a7 * (v9 + 4));
      v12 = (float *)(a3 + v11 * a7);
      v13 = (float *)(a3 + a7 * (v9 + 2));
      v14 = 4 * a7;
      v23 = (float *)(a3 + a7 * (v9 + 3));
      while ( 1 )
      {
        v27 = *(int *)v12;
        v15 = *(float *)&v27;
        if ( *(float *)&v27 >= v7 )
          break;
        v22 = *(float *)&v27;
        v28 = *(int *)v13;
        v15 = *(float *)&v28;
        if ( *(float *)&v28 >= v7 )
        {
          ++v11;
          ++v9;
          break;
        }
        v22 = *(float *)&v28;
        v29 = *(int *)v23;
        v15 = *(float *)&v29;
        if ( *(float *)&v29 >= v7 )
        {
          v11 += 2;
          v9 += 2;
          break;
        }
        v22 = *(float *)&v29;
        v30 = *(int *)v24;
        v15 = *(float *)&v30;
        if ( *(float *)&v30 >= v7 )
        {
          v11 += 3;
          v9 += 3;
          break;
        }
        v22 = *(float *)&v30;
        v23 = (float *)((char *)v23 + v14);
        v24 = (float *)((char *)v24 + v14);
        v11 += 4;
        v9 += 4;
        v12 = (float *)((char *)v12 + v14);
        v13 = (float *)((char *)v13 + v14);
        if ( v11 > v25 - 3 )
        {
          v10 = v25;
          v8 = a3;
          goto LABEL_13;
        }
      }
      v8 = a3;
    }
    v32 = (v7 - v22) / (v15 - v22);
    (*(void (__cdecl **)(_DWORD, int, unsigned int, _DWORD *))(4 * a4 + 0xB3D010))(
      LODWORD(v32),
      v8 + v9 * a7,
      v8 + v11 * a7,
      v26);
    v17 = v26[0];
    v18 = v26[1];
    *a6 = v9;
    *a1 = v17;
    v20 = v26[2];
    a1[1] = v18;
    a1[2] = v20;
    return a1;
  }
}
