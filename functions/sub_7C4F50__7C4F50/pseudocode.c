int ***__cdecl sub_7C4F50(int **a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int16 v8; // bx
  int v9; // edi
  int v10; // ebp
  int ***result; // eax
  float *v12; // esi
  unsigned int v13; // eax
  int v14; // eax
  double v15; // st6
  double v16; // st7
  int v17; // eax
  char v18; // dl
  bool v19; // zf
  float v20; // [esp+10h] [ebp-18h]
  float v21; // [esp+10h] [ebp-18h]
  float v22; // [esp+10h] [ebp-18h]
  float v23; // [esp+10h] [ebp-18h]
  float v24; // [esp+10h] [ebp-18h]
  int v25; // [esp+14h] [ebp-14h]
  float v26[3]; // [esp+18h] [ebp-10h] BYREF
  float v27; // [esp+24h] [ebp-4h]

  v8 = a8;
  dword_B4334C += (unsigned __int16)a8;
  v9 = 0;
  v10 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      *(float *)&a8 = 0.0;
      result = (int ***)(unsigned __int16)sub_7C4B50(a5, a2, a3, (void **)&a8, a4);
      if ( *(float *)&a8 == 0.0 )
        break;
      v25 = (unsigned __int16)result;
      if ( (_WORD)result )
      {
        v12 = (float *)(a6 + 0xC * v10);
        do
        {
          if ( !v8 )
            break;
          v13 = sub_7C2990(*v12, v12[1]);
          srand(v13);
          v26[0] = *v12;
          v26[1] = v12[1];
          v26[2] = v12[2];
          v20 = (double)rand() / dbl_A903B0 - 1.0;
          v27 = (1.0 - *(float *)(a5 + 0x10) + *(float *)(a5 + 0x10) * dbl_A2FAA0 * v20) * *(float *)(a7 + 4 * v10);
          if ( v27 < 1.0 )
          {
            if ( v27 < 0.0 )
              v27 = 0.0;
          }
          else
          {
            v27 = flt_A65520;
          }
          v14 = rand();
          v21 = (double)v14 / dbl_A3D5A8 + (double)v14 / dbl_A3D5A8 - 1.0;
          v22 = *(float *)(a5 + 0xC) * v21 * fCostant_100;
          v15 = v22;
          v23 = (float)Double_To_SInt32(1.0);
          v16 = v15 - v23 < dbl_A2FC68 ? v23 - 1.0 : v23;
          v24 = v16;
          v27 = v24 + v27;
          sub_812510(a8, v26, (int)a1);
          ++v9;
          --v8;
          ++v10;
          v12 += 3;
        }
        while ( v9 < v25 );
      }
      sub_8126D0(a8);
      v9 = 0;
      if ( !v8 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 0x78))(a4);
    v17 = *(_DWORD *)(a5 + 4);
    *(float *)&a8 = 0.0;
    NiTMap_GetAt(&off_B2CBC4, v17, &a8);
    result = *(int ****)(a8 + 0x38);
    v18 = 1;
    if ( !result )
      return (int ***)sub_5B1E20((BSTextureManager *)(a8 + 0x34), (void **)&a1);
    do
    {
      v19 = result[2] == a1;
      result = (int ***)*result;
      if ( v19 )
        v18 = 0;
    }
    while ( result );
    if ( v18 )
      return (int ***)sub_5B1E20((BSTextureManager *)(a8 + 0x34), (void **)&a1);
  }
  return result;
}
