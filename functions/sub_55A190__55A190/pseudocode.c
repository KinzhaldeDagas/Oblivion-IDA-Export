void __thiscall sub_55A190(unsigned int *this, int a2, unsigned int a3, int a4, float a5)
{
  int v5; // edx
  int v6; // edi
  double v7; // st7
  unsigned int v8; // ebx
  int v9; // esi
  unsigned int v10; // edi
  float *v11; // eax
  int v12; // edx
  char *v13; // esi
  double v14; // st5
  char *v15; // edx
  int v16; // edx
  double v17; // st5
  int v18; // edx
  float *v19; // edx
  float *v20; // edx
  unsigned int v21; // esi
  int v22; // eax
  unsigned int v23; // edi
  float *v24; // edx
  int v25; // [esp+0h] [ebp-10h]
  float v26; // [esp+4h] [ebp-Ch]
  float v27; // [esp+4h] [ebp-Ch]
  float v28; // [esp+4h] [ebp-Ch]
  float v29; // [esp+4h] [ebp-Ch]
  float v30; // [esp+4h] [ebp-Ch]
  float v31; // [esp+8h] [ebp-8h]
  float v32; // [esp+8h] [ebp-8h]
  float v33; // [esp+8h] [ebp-8h]
  float v34; // [esp+8h] [ebp-8h]
  float v35; // [esp+8h] [ebp-8h]
  float v36; // [esp+Ch] [ebp-4h]
  float v37; // [esp+Ch] [ebp-4h]
  float v38; // [esp+Ch] [ebp-4h]
  float v39; // [esp+Ch] [ebp-4h]
  float v40; // [esp+Ch] [ebp-4h]

  v5 = a2; /*0x55a190*/
  if ( a2 ) /*0x55a199*/
  {
    v6 = a3; /*0x55a1a0*/
    if ( a3 ) /*0x55a1a6*/
    {
      v7 = a5; /*0x55a1b6*/
      if ( a5 > 0.0 && v7 <= 1.0 ) /*0x55a1ca*/
      {
        if ( *(this + 1) ) /*0x55a1d0*/
        {
          if ( a3 >= *(this + 2) ) /*0x55a1df*/
          {
            a3 = *(this + 2); /*0x55a1e7*/
            v6 = a3; /*0x55a1eb*/
          }
          v8 = 0; /*0x55a1ee*/
          if ( v6 >= 4 ) /*0x55a1f4*/
          {
            v9 = 0xFFFFFFEC - a2; /*0x55a20f*/
            v10 = ((unsigned int)(v6 - 4) >> 2) + 1; /*0x55a218*/
            v11 = (float *)(a2 + 0x14); /*0x55a21b*/
            v25 = 4 * v10; /*0x55a229*/
            while ( 1 ) /*0x55a233*/
            {
              v12 = *(this + 1); /*0x55a233*/
              v13 = (char *)v11 + v9; /*0x55a236*/
              v14 = *(float *)&v13[v12]; /*0x55a238*/
              v15 = &v13[v12]; /*0x55a23b*/
              v26 = v14 * v7; /*0x55a23f*/
              v31 = *((float *)v15 + 1) * v7; /*0x55a248*/
              v36 = *((float *)v15 + 2) * v7; /*0x55a251*/
              v11[0xFFFFFFFB] = v11[0xFFFFFFFB] + v26; /*0x55a25c*/
              v11[0xFFFFFFFC] = v31 + v11[0xFFFFFFFC]; /*0x55a266*/
              v11[0xFFFFFFFD] = v11[0xFFFFFFFD] + v36; /*0x55a270*/
              v16 = *(this + 1); /*0x55a273*/
              v17 = *(float *)&v13[v16 + 0xC]; /*0x55a276*/
              v18 = (int)&v13[v16 + 0xC]; /*0x55a27a*/
              v27 = v17 * v7; /*0x55a280*/
              v32 = *(float *)(v18 + 4) * v7; /*0x55a289*/
              v37 = *(float *)(v18 + 8) * v7; /*0x55a295*/
              v11[0xFFFFFFFE] = v11[0xFFFFFFFE] + v27; /*0x55a2a0*/
              v11[0xFFFFFFFF] = v11[0xFFFFFFFF] + v32; /*0x55a2aa*/
              *v11 = *v11 + v37; /*0x55a2b3*/
              v19 = (float *)((char *)v11 + 4 - a2 + *(this + 1)); /*0x55a2b5*/
              v28 = *v19 * v7; /*0x55a2bc*/
              v33 = v19[1] * v7; /*0x55a2c5*/
              v38 = v19[2] * v7; /*0x55a2d1*/
              v11[1] = v11[1] + v28; /*0x55a2dc*/
              v11[2] = v33 + v11[2]; /*0x55a2e6*/
              v11[3] = v11[3] + v38; /*0x55a2f0*/
              v20 = (float *)((char *)v11 + 0x10 - a2 + *(this + 1)); /*0x55a2f3*/
              v29 = *v20 * v7; /*0x55a2fa*/
              v34 = v20[1] * v7; /*0x55a303*/
              v39 = v20[2] * v7; /*0x55a30c*/
              v11[4] = v29 + v11[4]; /*0x55a317*/
              v11[5] = v11[5] + v34; /*0x55a321*/
              v11[6] = v11[6] + v39; /*0x55a32b*/
              v11 += 0xC; /*0x55a32e*/
              if ( !--v10 ) /*0x55a334*/
                break; /*0x55a334*/
              v9 = 0xFFFFFFEC - a2; /*0x55a22f*/
            }
            v6 = a3; /*0x55a33a*/
            v5 = a2; /*0x55a340*/
            v8 = v25; /*0x55a344*/
          }
          if ( v8 < v6 ) /*0x55a34b*/
          {
            v21 = 0xFFFFFFF8 - v5; /*0x55a355*/
            v22 = v5 + 0xC * v8 + 8; /*0x55a357*/
            v23 = v6 - v8; /*0x55a35b*/
            do /*0x55a3a1*/
            {
              v24 = (float *)(*(this + 1) + v21 + v22); /*0x55a360*/
              v22 += 0xC; /*0x55a363*/
              --v23; /*0x55a366*/
              v30 = *v24 * v7; /*0x55a36d*/
              v35 = v24[1] * v7; /*0x55a376*/
              v40 = v24[2] * v7; /*0x55a37f*/
              *(float *)(v22 - 0x14) = *(float *)(v22 - 0x14) + v30; /*0x55a38a*/
              *(float *)(v22 - 0x10) = *(float *)(v22 - 0x10) + v35; /*0x55a394*/
              *(float *)(v22 - 0xC) = *(float *)(v22 - 0xC) + v40; /*0x55a39e*/
            }
            while ( v23 ); /*0x55a3a1*/
          }
        }
      }
    }
  }
}
