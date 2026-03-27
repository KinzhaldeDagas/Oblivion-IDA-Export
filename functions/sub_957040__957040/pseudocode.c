int __thiscall sub_957040(_DWORD *this, int a2, int a3, unsigned int **a4, float *a5, int a6)
{
  int v7; // ecx
  int *v9; // ebp
  double v10; // st7
  unsigned int *v11; // ecx
  int v12; // edi
  double v13; // st7
  int v14; // edx
  int *v15; // eax
  unsigned int v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // edx
  _DWORD *v20; // ebx
  int result; // eax
  int *v22; // [esp+Ch] [ebp-44h]
  int v23; // [esp+10h] [ebp-40h] BYREF
  _DWORD v24[4]; // [esp+14h] [ebp-3Ch] BYREF
  float v25; // [esp+24h] [ebp-2Ch]
  int v26; // [esp+28h] [ebp-28h]
  int *v27; // [esp+2Ch] [ebp-24h]
  float v28; // [esp+30h] [ebp-20h]
  float v29; // [esp+34h] [ebp-1Ch]
  int v30; // [esp+38h] [ebp-18h]
  unsigned int v31; // [esp+3Ch] [ebp-14h]
  unsigned int v32; // [esp+40h] [ebp-10h]
  int *v33; // [esp+5Ch] [ebp+Ch]
  int v34; // [esp+5Ch] [ebp+Ch]

  v7 = *(this + 0xE);
  v24[0] = a6;
  v24[1] = v7;
  *(float *)&v24[3] = a5[1];
  v33 = (int *)a4[1];
  v9 = (int *)a4[2];
  *(float *)&v24[2] = *a5;
  v10 = fConstant_1 / (double)(int)v33;
  v27 = v33;
  v11 = *a4;
  v30 = a3;
  v12 = 0;
  v23 = 0;
  v22 = v9;
  v28 = v10;
  v13 = a5[1] - *a5;
  v31 = *v11;
  v32 = *v11;
  if ( v13 >= flt_A37080 )
    v25 = fConstant_1 / v13;
  else
    v25 = 1.0;
  v14 = *(this + 2);
  if ( (int)v9 > *(_DWORD *)(v14 + 8) )
  {
    v9 = *(int **)(v14 + 8);
    v22 = v9;
  }
  if ( (int)a4[1] > 0 )
  {
    v34 = 0;
    do
    {
      v15 = (int *)&(*a4)[v34];
      v26 = v12;
      LODWORD(v29) = v15[2];
      if ( v31 >= *v15 )
        v31 = *v15;
      v16 = *v15;
      if ( v32 <= v16 )
        v32 = v16;
      sub_956B20((int *)*(this + 3), v29);
      v17 = (_DWORD *)*(this + 3);
      v18 = *v17 - 1;
      if ( v18 > (int)v9 )
      {
        do
        {
          v19 = v17[2];
          v17[3] = *(_DWORD *)(v19 + 4 * v18);
          v9 = v22;
          *(_DWORD *)(v19 + 4 * v18--) = 0;
          --*v17;
        }
        while ( v18 > (int)v22 );
      }
      sub_956C30((int)this, v13, v12++, a2, &v23, v24, a4);
      v34 += 4;
    }
    while ( v12 < (int)a4[1] );
  }
  v20 = (_DWORD *)*(this + 3);
  for ( result = *v20 - 1; result > 0; --result )
    *(_DWORD *)(v20[2] + 4 * result) = 0;
  v20[3] = 0;
  *v20 = 0;
  return result;
}
