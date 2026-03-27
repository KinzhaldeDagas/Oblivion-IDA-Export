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

  v5 = a2;
  if ( a2 )
  {
    v6 = a3;
    if ( a3 )
    {
      v7 = a5;
      if ( a5 > 0.0 && v7 <= 1.0 )
      {
        if ( *(this + 1) )
        {
          if ( a3 >= *(this + 2) )
          {
            a3 = *(this + 2);
            v6 = a3;
          }
          v8 = 0;
          if ( v6 >= 4 )
          {
            v9 = 0xFFFFFFEC - a2;
            v10 = ((unsigned int)(v6 - 4) >> 2) + 1;
            v11 = (float *)(a2 + 0x14);
            v25 = 4 * v10;
            while ( 1 )
            {
              v12 = *(this + 1);
              v13 = (char *)v11 + v9;
              v14 = *(float *)&v13[v12];
              v15 = &v13[v12];
              v26 = v14 * v7;
              v31 = *((float *)v15 + 1) * v7;
              v36 = *((float *)v15 + 2) * v7;
              v11[0xFFFFFFFB] = v11[0xFFFFFFFB] + v26;
              v11[0xFFFFFFFC] = v31 + v11[0xFFFFFFFC];
              v11[0xFFFFFFFD] = v11[0xFFFFFFFD] + v36;
              v16 = *(this + 1);
              v17 = *(float *)&v13[v16 + 0xC];
              v18 = (int)&v13[v16 + 0xC];
              v27 = v17 * v7;
              v32 = *(float *)(v18 + 4) * v7;
              v37 = *(float *)(v18 + 8) * v7;
              v11[0xFFFFFFFE] = v11[0xFFFFFFFE] + v27;
              v11[0xFFFFFFFF] = v11[0xFFFFFFFF] + v32;
              *v11 = *v11 + v37;
              v19 = (float *)((char *)v11 + 4 - a2 + *(this + 1));
              v28 = *v19 * v7;
              v33 = v19[1] * v7;
              v38 = v19[2] * v7;
              v11[1] = v11[1] + v28;
              v11[2] = v33 + v11[2];
              v11[3] = v11[3] + v38;
              v20 = (float *)((char *)v11 + 0x10 - a2 + *(this + 1));
              v29 = *v20 * v7;
              v34 = v20[1] * v7;
              v39 = v20[2] * v7;
              v11[4] = v29 + v11[4];
              v11[5] = v11[5] + v34;
              v11[6] = v11[6] + v39;
              v11 += 0xC;
              if ( !--v10 )
                break;
              v9 = 0xFFFFFFEC - a2;
            }
            v6 = a3;
            v5 = a2;
            v8 = v25;
          }
          if ( v8 < v6 )
          {
            v21 = 0xFFFFFFF8 - v5;
            v22 = v5 + 0xC * v8 + 8;
            v23 = v6 - v8;
            do
            {
              v24 = (float *)(*(this + 1) + v21 + v22);
              v22 += 0xC;
              --v23;
              v30 = *v24 * v7;
              v35 = v24[1] * v7;
              v40 = v24[2] * v7;
              *(float *)(v22 - 0x14) = *(float *)(v22 - 0x14) + v30;
              *(float *)(v22 - 0x10) = *(float *)(v22 - 0x10) + v35;
              *(float *)(v22 - 0xC) = *(float *)(v22 - 0xC) + v40;
            }
            while ( v23 );
          }
        }
      }
    }
  }
}
