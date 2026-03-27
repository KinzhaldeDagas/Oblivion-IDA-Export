_DWORD *__cdecl sub_6BCF70(_DWORD *a1, float a2, int a3, int a4, int a5, int *a6, unsigned __int8 a7)
{
  double v7; // st7
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ebp
  int v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  float *v17; // ebx
  float *v18; // ebp
  int v19; // esi
  double v20; // st6
  float *v21; // esi
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  float v26; // [esp+20h] [ebp-30h]
  float *v27; // [esp+24h] [ebp-2Ch]
  float *v28; // [esp+28h] [ebp-28h]
  unsigned int v29; // [esp+2Ch] [ebp-24h]
  _DWORD v30[4]; // [esp+30h] [ebp-20h] BYREF
  _DWORD v31[4]; // [esp+40h] [ebp-10h] BYREF
  int v32; // [esp+64h] [ebp+14h]
  int v33; // [esp+64h] [ebp+14h]
  int v34; // [esp+64h] [ebp+14h]
  int v35; // [esp+64h] [ebp+14h]
  int v36; // [esp+64h] [ebp+14h]
  float v37; // [esp+64h] [ebp+14h]

  v7 = a2;
  if ( a5 == 1 || -flt_A7DEB4 == v7 )
  {
    if ( a4 != 4 )
    {
      *a1 = *(_DWORD *)(a3 + 4);
      a1[1] = *(_DWORD *)(a3 + 8);
      v9 = *(_DWORD *)(a3 + 0x10);
      a1[2] = *(_DWORD *)(a3 + 0xC);
      a1[3] = v9;
      return a1;
    }
    goto LABEL_6;
  }
  if ( a4 == 4 )
  {
LABEL_6:
    (*(void (__cdecl **)(_DWORD, int, _DWORD, _DWORD *))(4 * a4 + 0xB3D028))(LODWORD(a2), a3, 0, v30);
    v10 = v30[1];
    *a1 = v30[0];
    v11 = v30[2];
    a1[1] = v10;
    v12 = v30[3];
    a1[2] = v11;
    a1[3] = v12;
    return a1;
  }
  v13 = a3;
  v14 = *a6;
  v15 = a5 - 1;
  v29 = a5 - 1;
  v26 = *(float *)(*a6 * a7 + a3);
  if ( v26 > v7 )
  {
    v14 = 0;
    v26 = *(float *)a3;
  }
  v16 = v14 + 1;
  if ( (int)(v15 - v14) < 4 )
  {
    v20 = *(float *)&a5;
LABEL_17:
    if ( v16 <= v15 )
    {
      v21 = (float *)(v13 + v16 * a7);
      do
      {
        v36 = *(int *)v21;
        v20 = *(float *)&v36;
        if ( *(float *)&v36 >= v7 )
          break;
        ++v16;
        v26 = *(float *)&v36;
        ++v14;
        v21 = (float *)((char *)v21 + a7);
      }
      while ( v16 <= v15 );
    }
  }
  else
  {
    v28 = (float *)(a3 + a7 * (v14 + 4));
    v17 = (float *)(a3 + v16 * a7);
    v18 = (float *)(a3 + a7 * (v14 + 2));
    v19 = 4 * a7;
    v27 = (float *)(a3 + a7 * (v14 + 3));
    while ( 1 )
    {
      v32 = *(int *)v17;
      v20 = *(float *)&v32;
      if ( *(float *)&v32 >= v7 )
        break;
      v26 = *(float *)&v32;
      v33 = *(int *)v18;
      v20 = *(float *)&v33;
      if ( *(float *)&v33 >= v7 )
      {
        ++v16;
        ++v14;
        break;
      }
      v26 = *(float *)&v33;
      v34 = *(int *)v27;
      v20 = *(float *)&v34;
      if ( *(float *)&v34 >= v7 )
      {
        v16 += 2;
        v14 += 2;
        break;
      }
      v26 = *(float *)&v34;
      v35 = *(int *)v28;
      v20 = *(float *)&v35;
      if ( *(float *)&v35 >= v7 )
      {
        v16 += 3;
        v14 += 3;
        break;
      }
      v26 = *(float *)&v35;
      v27 = (float *)((char *)v27 + v19);
      v28 = (float *)((char *)v28 + v19);
      v16 += 4;
      v14 += 4;
      v17 = (float *)((char *)v17 + v19);
      v18 = (float *)((char *)v18 + v19);
      if ( v16 > v29 - 3 )
      {
        v15 = v29;
        v13 = a3;
        goto LABEL_17;
      }
    }
    v13 = a3;
  }
  v37 = (v7 - v26) / (v20 - v26);
  (*(void (__cdecl **)(_DWORD, int, unsigned int, _DWORD *))(4 * a4 + 0xB3D028))(
    LODWORD(v37),
    v13 + v14 * a7,
    v13 + v16 * a7,
    v31);
  v22 = v31[0];
  v23 = v31[1];
  *a6 = v14;
  *a1 = v22;
  v24 = v31[2];
  a1[1] = v23;
  v25 = v31[3];
  a1[2] = v24;
  a1[3] = v25;
  return a1;
}
