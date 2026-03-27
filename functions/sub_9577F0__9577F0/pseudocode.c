int **__thiscall sub_9577F0(int **this, int **a2, int *a3, float a4, int *a5, int **a6)
{
  int **v6; // ebx
  int v7; // esi
  int v8; // edx
  int v9; // edi
  int *v11; // ecx
  int *v12; // eax
  int *v13; // edx
  bool v14; // cf
  float v15; // edi
  int v16; // edx
  char v17; // fps^1
  double v18; // st7
  char v19; // ah
  bool v20; // c0
  bool v21; // c3
  int **v22; // ebp
  int *v23; // esi
  int v24; // eax
  int v25; // eax
  int *v26; // ebx
  int *v27; // ecx
  int **result; // eax
  int v29; // edx
  int v30; // edx
  int *v31; // esi
  int *v32; // edx
  int *v33; // esi
  unsigned int v34; // [esp+0h] [ebp-30h]
  int *v35; // [esp+14h] [ebp-1Ch] BYREF
  int v36; // [esp+18h] [ebp-18h] BYREF
  int *v37; // [esp+1Ch] [ebp-14h] BYREF
  int *v38; // [esp+20h] [ebp-10h] BYREF
  int **v39; // [esp+24h] [ebp-Ch] BYREF
  int v40; // [esp+28h] [ebp-8h] BYREF
  int *v41; // [esp+2Ch] [ebp-4h] BYREF

  v6 = a2;
  v7 = (int)a3;
  v8 = (int)a2[1];
  v9 = (int)a2[2];
  v11 = *a2;
  v12 = &(*a2)[4 * v9 + 4 * v8];
  v13 = &(*a2)[4 * v8];
  v14 = *a2 < v13;
  v36 = v9;
  v40 = 0;
  v38 = v11;
  a2 = (int **)v13;
  v37 = v12;
  v35 = v12;
  v41 = v12;
  v39 = (int **)v11;
  if ( v14 )
  {
    v15 = a4;
    do
    {
      v16 = 0;
      v18 = *((float *)v11 + 3);
      v19 = v17;
      v20 = v18 < *(float *)(v7 + 0xC0);
      v21 = v18 == *(float *)(v7 + 0xC0);
      if ( __SETP__(v19 & 5, 0) )
      {
        if ( !v20 && !v21 )
          v16 = 2;
      }
      else if ( v20 || v21 )
      {
        v16 = 1;
      }
      else
      {
        v16 = 3;
      }
      sub_9571B0(this, v16, v7, v15, &v36, &v40, (int **)&v39, (int **)&a2, &v37, &v35);
      v11 = (int *)v39;
    }
    while ( v39 < a2 );
    v9 = v36;
  }
  a3 = v35;
  sub_9575F0(this, &v38, &a2, &v37, &a3, (int *)&v35, (unsigned int *)&v41, v7);
  v22 = a2;
  v23 = a5;
  v24 = ((char *)a2 - (char *)v38) >> 4;
  a2 = (int **)v24;
  a5[1] = v24;
  *(float *)&v34 = (double)v24 * (double)v36 / (double)(int)v6[1];
  v25 = sub_8ECB30(v34);
  v26 = a3;
  v27 = v37;
  v23[2] = v25;
  result = a6;
  a6[1] = (int *)(((char *)v26 - (char *)v27) >> 4);
  v29 = (int)v38;
  result[2] = (int *)(v9 - v23[2]);
  *v23 = v29;
  v30 = v23[2];
  v31 = result[2];
  v32 = (int *)&v22[4 * v30];
  *result = v32;
  if ( v31 )
  {
    for ( ; v27 < v26; v33[3] = (int)result )
    {
      v33 = v32;
      *v32 = *v27;
      v32[1] = v27[1];
      v32[2] = v27[2];
      result = (int **)v27[3];
      v27 += 4;
      v32 += 4;
    }
  }
  return result;
}
