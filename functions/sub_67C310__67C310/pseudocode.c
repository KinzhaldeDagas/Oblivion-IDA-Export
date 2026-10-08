void __thiscall sub_67C310(int ****this)
{
  int **v2; // ebx
  int v3; // ecx
  int **i; // eax
  int **v5; // esi
  int j; // edi
  int v7; // ecx
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  double v11; // rt1
  bool v12; // zf
  float v13; // [esp+8h] [ebp-30h]
  int v14; // [esp+Ch] [ebp-2Ch]
  float v15; // [esp+10h] [ebp-28h]
  float v16; // [esp+10h] [ebp-28h]
  float v17; // [esp+14h] [ebp-24h]
  float v18; // [esp+14h] [ebp-24h]
  float v19; // [esp+18h] [ebp-20h]
  float v20; // [esp+18h] [ebp-20h]
  float v21; // [esp+1Ch] [ebp-1Ch]
  float v22; // [esp+1Ch] [ebp-1Ch]
  float v23; // [esp+20h] [ebp-18h]
  float v24; // [esp+24h] [ebp-14h]
  float v25; // [esp+28h] [ebp-10h]
  float v26; // [esp+2Ch] [ebp-Ch]
  float v27; // [esp+30h] [ebp-8h]
  float v28; // [esp+34h] [ebp-4h]

  v13 = 0.0; /*0x67c317*/
  v2 = **(this + 0xF); /*0x67c320*/
  v3 = 0; /*0x67c322*/
  for ( i = v2; i; i = (int **)i[1] ) /*0x67c328*/
  {
    if ( *i ) /*0x67c330*/
      ++v3; /*0x67c335*/
  }
  if ( v3 > 0 ) /*0x67c341*/
  {
    v14 = v3; /*0x67c348*/
    do /*0x67c483*/
    {
      v5 = **(this + 0xF); /*0x67c353*/
      for ( j = **v2; v5; v5 = (int **)v5[1] ) /*0x67c35b*/
      {
        if ( !v5[1] && !*v5 ) /*0x67c367*/
          break; /*0x67c36a*/
        v7 = **v5; /*0x67c372*/
        if ( v7 ) /*0x67c376*/
        {
          v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x174))(v7); /*0x67c384*/
          v27 = v8[1]; /*0x67c38e*/
          v26 = *v8; /*0x67c394*/
          v28 = v8[2]; /*0x67c398*/
          v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)j + 0x174))(j); /*0x67c3a4*/
          v23 = *v9; /*0x67c3b2*/
          v24 = v9[1]; /*0x67c3ba*/
          v25 = v9[2]; /*0x67c3be*/
          v17 = v26 - *v9; /*0x67c3c2*/
          v19 = v27 - v24; /*0x67c3ce*/
          v21 = v28 - v25; /*0x67c3da*/
          v15 = v19 * v19 + v17 * v17 + v21 * v21; /*0x67c3fa*/
          v16 = sqrt(v15); /*0x67c407*/
          if ( v13 < (double)v16 ) /*0x67c41a*/
          {
            v13 = v16; /*0x67c41c*/
            v10 = (float *)(*(this + 0xF) + 5); /*0x67c427*/
            v11 = dbl_A2FAA0; /*0x67c436*/
            v18 = (v23 + v26) * v11; /*0x67c438*/
            *v10 = v18; /*0x67c444*/
            v20 = (v24 + v27) * v11; /*0x67c44c*/
            v10[1] = v20; /*0x67c458*/
            v22 = v11 * (v25 + v28); /*0x67c461*/
            v10[2] = v22; /*0x67c469*/
          }
        }
      }
      v12 = v14-- == 1; /*0x67c47b*/
      v2 = (int **)v2[1]; /*0x67c480*/
    }
    while ( !v12 ); /*0x67c483*/
  }
}
