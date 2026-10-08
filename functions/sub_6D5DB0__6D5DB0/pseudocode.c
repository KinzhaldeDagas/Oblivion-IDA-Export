// Oblivion NiTransformInterpolator time-range query. Aggregates first/last timestamps from translation (data count +0x0A, keys +0x24, stride +0x1D), rotation (count +8, keys +0x20, type +0x10, stride +0x1C), and scale (count +0x0C, keys +0x28, stride +0x1E). Rotation type 4 scans three independent scalar-axis subtracks. Returns [0,0] when no authored track contributes.
void __thiscall NiTransformInterpolator_GetActiveTimeRange(_DWORD *this, float *a2, float *a3)
{
  int v3; // ecx
  float *v4; // ebp
  float *v5; // edi
  int v6; // edx
  unsigned __int8 v7; // bl
  float *v8; // esi
  int v9; // esi
  unsigned __int8 v10; // bl
  float *v11; // edx
  unsigned __int8 *v12; // ebp
  float **v13; // esi
  float *v14; // edi
  float *v15; // edx
  unsigned __int8 v16; // bl
  int v17; // edx
  unsigned __int8 v18; // bl
  float *v19; // ecx
  char v20; // [esp+Bh] [ebp-9h]
  float v21; // [esp+Ch] [ebp-8h]
  float v22; // [esp+Ch] [ebp-8h]
  float v23; // [esp+Ch] [ebp-8h]
  float v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]
  float v26; // [esp+18h] [ebp+4h]
  float v27; // [esp+18h] [ebp+4h]
  float v28; // [esp+18h] [ebp+4h]
  float v29; // [esp+18h] [ebp+4h]

  v3 = *(this + 0xB); /*0x6d5db9*/
  v4 = a2; /*0x6d5dc0*/
  *a2 = flt_A7DEB4; /*0x6d5dc4*/
  v5 = a3; /*0x6d5dcf*/
  *a3 = -flt_A7DEB4; /*0x6d5dd5*/
  v20 = 0; /*0x6d5dd7*/
  if ( !v3 ) /*0x6d5ddc*/
    goto LABEL_29; /*0x6d5ddc*/
  v6 = *(unsigned __int16 *)(v3 + 0xA); /*0x6d5de2*/
  v7 = *(_BYTE *)(v3 + 0x1D); /*0x6d5de8*/
  v8 = *(float **)(v3 + 0x24); /*0x6d5deb*/
  if ( *(_WORD *)(v3 + 0xA) ) /*0x6d5de2*/
  {
    v21 = *v8; /*0x6d5df2*/
    if ( *a2 > (double)v21 ) /*0x6d5e04*/
      *a2 = v21; /*0x6d5e06*/
    v22 = *(float *)((char *)v8 + v7 * (v6 - 1)); /*0x6d5e19*/
    if ( *a3 < (double)v22 ) /*0x6d5e2a*/
      *a3 = v22; /*0x6d5e2c*/
    v20 = 1; /*0x6d5e32*/
  }
  v9 = *(unsigned __int16 *)(v3 + 8); /*0x6d5e3f*/
  v10 = *(_BYTE *)(v3 + 0x1C); /*0x6d5e48*/
  v11 = *(float **)(v3 + 0x20); /*0x6d5e4b*/
  if ( *(_WORD *)(v3 + 8) ) /*0x6d5e3f*/
  {
    if ( *(_DWORD *)(v3 + 0x10) == 4 ) /*0x6d5e57*/
    {
      v12 = (unsigned __int8 *)(v11 + 0xB); /*0x6d5e5d*/
      v13 = (float **)(v11 + 0xC); /*0x6d5e60*/
      v25 = 3; /*0x6d5e63*/
      do /*0x6d5ed8*/
      {
        v14 = v13[0xFFFFFFF9]; /*0x6d5e70*/
        if ( v14 ) /*0x6d5e75*/
        {
          v15 = *v13; /*0x6d5e77*/
          v16 = *v12; /*0x6d5e7f*/
          v23 = **v13; /*0x6d5e82*/
          if ( *a2 > (double)v23 ) /*0x6d5e93*/
            *a2 = v23; /*0x6d5e99*/
          v24 = *(float *)((char *)v15 + v16 * ((_DWORD)v14 + 0xFFFFFFFF)); /*0x6d5eaf*/
          if ( *a3 < (double)v24 ) /*0x6d5ec0*/
            *a3 = v24; /*0x6d5ec2*/
          v20 = 1; /*0x6d5ec8*/
        }
        ++v13; /*0x6d5ecd*/
        ++v12; /*0x6d5ed0*/
        --v25; /*0x6d5ed3*/
      }
      while ( v25 ); /*0x6d5ed8*/
      v4 = a2; /*0x6d5eda*/
      v5 = a3; /*0x6d5ede*/
    }
    else
    {
      v26 = *v11; /*0x6d5ee6*/
      if ( *v4 > (double)v26 ) /*0x6d5ef8*/
        *v4 = v26; /*0x6d5efa*/
      v27 = *(float *)((char *)v11 + v10 * (v9 - 1)); /*0x6d5f0d*/
      if ( *a3 < (double)v27 ) /*0x6d5f1e*/
        *a3 = v27; /*0x6d5f20*/
      v20 = 1; /*0x6d5f26*/
    }
  }
  v17 = *(unsigned __int16 *)(v3 + 0xC); /*0x6d5f2f*/
  v18 = *(_BYTE *)(v3 + 0x1E); /*0x6d5f35*/
  v19 = *(float **)(v3 + 0x28); /*0x6d5f38*/
  if ( v17 ) /*0x6d5f3b*/
  {
    v28 = *v19; /*0x6d5f3f*/
    if ( *v4 > (double)v28 ) /*0x6d5f51*/
      *v4 = v28; /*0x6d5f53*/
    v29 = *(float *)((char *)v19 + v18 * (v17 - 1)); /*0x6d5f66*/
    if ( *v5 < (double)v29 ) /*0x6d5f77*/
      *v5 = v29; /*0x6d5f79*/
  }
  else
  {
LABEL_29:
    if ( !v20 ) /*0x6d5f8a*/
    {
      *v4 = 0.0; /*0x6d5f8e*/
      *v5 = 0.0; /*0x6d5f91*/
    }
  }
}
