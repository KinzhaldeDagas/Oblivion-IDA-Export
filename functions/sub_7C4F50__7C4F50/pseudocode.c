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

  v8 = a8; /*0x7c4f54*/
  unk_B4334C += (unsigned __int16)a8; /*0x7c4f5d*/
  v9 = 0; /*0x7c4f64*/
  v10 = 0; /*0x7c4f66*/
  if ( v8 )
  {
    while ( 1 )
    {
      a8 = 0; /*0x7c4f8a*/
      result = (int ***)(unsigned __int16)sub_7C4B50(a5, a2, a3, (void **)&a8, a4); /*0x7c4f9a*/
      if ( !a8 ) /*0x7c4f9d*/
        break; /*0x7c4f9d*/
      v25 = (unsigned __int16)result; /*0x7c4fa8*/
      if ( (_WORD)result )
      {
        v12 = (float *)(a6 + 0xC * v10); /*0x7c4fba*/
        do
        {
          if ( !v8 ) /*0x7c4fc3*/
            break; /*0x7c4fc3*/
          v13 = sub_7C2990(*v12, v12[1]); /*0x7c4fde*/
          srand(v13); /*0x7c4fe4*/
          v26[0] = *v12; /*0x7c4feb*/
          v26[1] = v12[1]; /*0x7c4ff5*/
          v26[2] = v12[2]; /*0x7c4ffc*/
          v20 = (double)rand() / dbl_A903B0 - 1.0; /*0x7c501d*/
          v27 = (1.0 - *(float *)(a5 + 0x10) + *(float *)(a5 + 0x10) * dbl_A2FAA0 * v20) * *(float *)(a7 + 4 * v10); /*0x7c503c*/
          if ( v27 < 1.0 ) /*0x7c504f*/
          {
            if ( v27 < 0.0 ) /*0x7c506a*/
              v27 = 0.0; /*0x7c506c*/
          }
          else
          {
            v27 = flt_A65520; /*0x7c5059*/
          }
          v14 = rand(); /*0x7c5074*/
          v21 = (double)v14 / dbl_A3D5A8 + (double)v14 / dbl_A3D5A8 - 1.0; /*0x7c5093*/
          v22 = *(float *)(a5 + 0xC) * v21 * fCostant_100; /*0x7c50a4*/
          v15 = v22; /*0x7c50a8*/
          v23 = (float)Double_To_SInt32(1.0); /*0x7c50bb*/
          v16 = v15 - v23 < dbl_A2FC68 ? v23 - 1.0 : v23;
          v24 = v16; /*0x7c50e0*/
          v27 = v24 + v27; /*0x7c50f6*/
          sub_812510(a8, v26, (int)a1); /*0x7c50fa*/
          ++v9; /*0x7c50ff*/
          --v8; /*0x7c5102*/
          ++v10; /*0x7c5108*/
          v12 += 3; /*0x7c510b*/
        }
        while ( v9 < v25 );
      }
      sub_8126D0(a8); /*0x7c511c*/
      v9 = 0; /*0x7c5121*/
      if ( !v8 ) /*0x7c5126*/
        goto LABEL_15; /*0x7c5126*/
    }
  }
  else
  {
LABEL_15:
    (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 0x78))(a4); /*0x7c512c*/
    v17 = *(_DWORD *)(a5 + 4); /*0x7c513b*/
    a8 = 0; /*0x7c5149*/
    NiTMap_GetAt(&stru_B2CBC4, v17, &a8); /*0x7c514d*/
    result = *(int ****)(a8 + 0x38); /*0x7c5156*/
    v18 = 1; /*0x7c515b*/
    if ( !result ) /*0x7c515d*/
      return (int ***)NiTPointerList__AddTail((BSTextureManager *)(a8 + 0x34), (void **)&a1); /*0x7c515d*/
    do /*0x7c5172*/
    {
      v19 = result[2] == a1; /*0x7c5164*/
      result = (int ***)*result; /*0x7c516a*/
      if ( v19 ) /*0x7c516c*/
        v18 = 0; /*0x7c516e*/
    }
    while ( result ); /*0x7c5172*/
    if ( v18 ) /*0x7c5176*/
      return (int ***)NiTPointerList__AddTail((BSTextureManager *)(a8 + 0x34), (void **)&a1); /*0x7c5180*/
  }
  return result; /*0x7c5185*/
}
