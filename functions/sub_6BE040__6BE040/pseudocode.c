float *__cdecl sub_6BE040(float *a1, float a2, int a3, int a4, int a5, int *a6, unsigned __int8 a7)
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
  float v17; // ecx
  float v18; // edx
  float v20; // ecx
  float v21; // edx
  int v22; // ecx
  float v23; // [esp+20h] [ebp-20h]
  float *v24; // [esp+24h] [ebp-1Ch]
  float *v25; // [esp+28h] [ebp-18h]
  unsigned int v26; // [esp+2Ch] [ebp-14h]
  float v27; // [esp+30h] [ebp-10h] BYREF
  float v28; // [esp+34h] [ebp-Ch]
  float v29; // [esp+38h] [ebp-8h]
  float v30; // [esp+3Ch] [ebp-4h]
  int v31; // [esp+54h] [ebp+14h]
  int v32; // [esp+54h] [ebp+14h]
  int v33; // [esp+54h] [ebp+14h]
  int v34; // [esp+54h] [ebp+14h]
  int v35; // [esp+54h] [ebp+14h]
  float v36; // [esp+54h] [ebp+14h]

  if ( a5 == 1 || (v7 = a2, -flt_A7DEB4 == a2) )
  {
    *a1 = *(float *)(a3 + 4);
    a1[1] = *(float *)(a3 + 8);
    v22 = *(_DWORD *)(a3 + 0x10);
    a1[2] = *(float *)(a3 + 0xC);
    *((_DWORD *)a1 + 3) = v22;
    return a1;
  }
  else
  {
    v8 = a3;
    v9 = *a6;
    v10 = a5 - 1;
    v26 = a5 - 1;
    v23 = *(float *)(*a6 * a7 + a3);
    if ( v23 > v7 )
    {
      v9 = 0;
      v23 = *(float *)a3;
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
          v35 = *(int *)v16;
          v15 = *(float *)&v35;
          if ( *(float *)&v35 >= v7 )
            break;
          ++v11;
          v23 = *(float *)&v35;
          ++v9;
          v16 = (float *)((char *)v16 + a7);
        }
        while ( v11 <= v10 );
      }
    }
    else
    {
      v25 = (float *)(a3 + a7 * (v9 + 4));
      v12 = (float *)(a3 + v11 * a7);
      v13 = (float *)(a3 + a7 * (v9 + 2));
      v14 = 4 * a7;
      v24 = (float *)(a3 + a7 * (v9 + 3));
      while ( 1 )
      {
        v31 = *(int *)v12;
        v15 = *(float *)&v31;
        if ( *(float *)&v31 >= v7 )
          break;
        v23 = *(float *)&v31;
        v32 = *(int *)v13;
        v15 = *(float *)&v32;
        if ( *(float *)&v32 >= v7 )
        {
          ++v11;
          ++v9;
          break;
        }
        v23 = *(float *)&v32;
        v33 = *(int *)v24;
        v15 = *(float *)&v33;
        if ( *(float *)&v33 >= v7 )
        {
          v11 += 2;
          v9 += 2;
          break;
        }
        v23 = *(float *)&v33;
        v34 = *(int *)v25;
        v15 = *(float *)&v34;
        if ( *(float *)&v34 >= v7 )
        {
          v11 += 3;
          v9 += 3;
          break;
        }
        v23 = *(float *)&v34;
        v24 = (float *)((char *)v24 + v14);
        v25 = (float *)((char *)v25 + v14);
        v11 += 4;
        v9 += 4;
        v12 = (float *)((char *)v12 + v14);
        v13 = (float *)((char *)v13 + v14);
        if ( v11 > v26 - 3 )
        {
          v10 = v26;
          v8 = a3;
          goto LABEL_13;
        }
      }
      v8 = a3;
    }
    v27 = 0.0;
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
    v36 = (v7 - v23) / (v15 - v23);
    (*(void (__cdecl **)(_DWORD, int, unsigned int, float *))(4 * a4 + 0xB3D040))(
      LODWORD(v36),
      v8 + v9 * a7,
      v8 + v11 * a7,
      &v27);
    v17 = v27;
    v18 = v28;
    *a6 = v9;
    *a1 = v17;
    v20 = v29;
    a1[1] = v18;
    v21 = v30;
    a1[2] = v20;
    a1[3] = v21;
    return a1;
  }
}
