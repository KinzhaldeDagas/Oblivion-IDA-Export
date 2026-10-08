// Oblivion: when blend flag bit 2 marks weights dirty, recomputes item+8 normalized weights across 0x18-byte records. Handles one/two/many active items, priority groups, base*ease weights, optional threshold/renormalization, and highest-only flag bit 1.
void __thiscall NiBlendInterpolator_RecomputeNormalizedWeights(int this)
{
  char v1; // al
  char v2; // al
  int v3; // edi
  unsigned __int8 v4; // bl
  bool v5; // zf
  int v6; // esi
  int v7; // edx
  char v8; // al
  double v9; // st5
  double v10; // st4
  unsigned __int8 v11; // bl
  double v12; // st3
  int v13; // edx
  int v14; // edx
  char v15; // al
  double v16; // st7
  unsigned __int8 v17; // bl
  int v18; // edx
  int v19; // edx
  double v20; // st3
  double v21; // st6
  unsigned __int8 v22; // dl
  double v23; // st5
  double i; // st7
  int v25; // esi
  double v26; // rt2
  double v27; // st6
  double v28; // st7
  unsigned __int8 v29; // dl
  unsigned __int8 v30; // bl
  double v31; // rtt
  float *v32; // esi
  double v33; // rt0
  double v34; // st6
  double v35; // st7
  float v36; // [esp+0h] [ebp-4h]
  float v37; // [esp+0h] [ebp-4h]
  float v38; // [esp+0h] [ebp-4h]
  float v39; // [esp+0h] [ebp-4h]
  float v40; // [esp+0h] [ebp-4h]
  float v41; // [esp+0h] [ebp-4h]
  float v42; // [esp+0h] [ebp-4h]

  v1 = *(_BYTE *)(this + 0xC); /*0x6cd0f1*/
  if ( (v1 & 4) != 0 ) /*0x6cd0f6*/
  {
    *(_BYTE *)(this + 0xC) = v1 & 0xFB; /*0x6cd0fe*/
    v2 = *(_BYTE *)(this + 0xE); /*0x6cd101*/
    if ( v2 == 1 ) /*0x6cd106*/
    {
      *(float *)(*(_DWORD *)(this + 0x14) + 0x18 * *(unsigned __int8 *)(this + 0xF) + 8) = 1.0; /*0x6cd114*/
      return; /*0x6cd119*/
    }
    if ( v2 == 2 ) /*0x6cd11c*/
    {
      NiBlendInterpolator_NormalizeTwoItems((_BYTE *)this); /*0x6cd121*/
      return; /*0x6cd121*/
    }
    v3 = 0; /*0x6cd136*/
    if ( -flt_A7DEB4 == *(float *)(this + 0x24) ) /*0x6cd13f*/
    {
      v4 = 0; /*0x6cd145*/
      *(float *)(this + 0x24) = 0.0; /*0x6cd147*/
      v5 = *(_BYTE *)(this + 0xD) == 0; /*0x6cd14a*/
      *(float *)(this + 0x28) = 0.0; /*0x6cd14d*/
      *(float *)(this + 0x2C) = 0.0; /*0x6cd150*/
      if ( !v5 ) /*0x6cd153*/
      {
        v6 = *(_DWORD *)(this + 0x14); /*0x6cd155*/
        do /*0x6cd1b2*/
        {
          v7 = v6 + 0x18 * v4; /*0x6cd162*/
          if ( *(_DWORD *)v7 ) /*0x6cd15e*/
          {
            v8 = *(_BYTE *)(v7 + 0xC); /*0x6cd16a*/
            v36 = *(float *)(v7 + 4) * *(float *)(v7 + 0x10); /*0x6cd173*/
            if ( v8 == *(_BYTE *)(this + 0x10) ) /*0x6cd177*/
            {
              *(float *)(this + 0x24) = *(float *)(this + 0x24) + v36; /*0x6cd180*/
              if ( *(float *)(this + 0x2C) < (double)*(float *)(v7 + 0x10) ) /*0x6cd190*/
                *(float *)(this + 0x2C) = *(float *)(v7 + 0x10); /*0x6cd195*/
              ++v3; /*0x6cd198*/
            }
            else if ( v8 == *(_BYTE *)(this + 0x11) ) /*0x6cd1a0*/
            {
              *(float *)(this + 0x28) = *(float *)(this + 0x28) + v36; /*0x6cd1a9*/
            }
          }
          ++v4; /*0x6cd1ac*/
        }
        while ( v4 < *(_BYTE *)(this + 0xD) ); /*0x6cd1b2*/
        if ( v3 > 1 && 0.0 != *(float *)(this + 0x24) ) /*0x6cd1c1*/
          *(float *)(this + 0x28) = 0.0; /*0x6cd1c3*/
      }
    }
    v37 = 1.0 - *(float *)(this + 0x2C); /*0x6cd1d1*/
    v9 = v37; /*0x6cd1e6*/
    v38 = *(float *)(this + 0x28) * v37 + *(float *)(this + 0x24) * *(float *)(this + 0x2C); /*0x6cd1ea*/
    if ( v38 <= 0.0 ) /*0x6cd1fb*/
      v10 = 0.0; /*0x6cd207*/
    else
      v10 = 1.0 / v38; /*0x6cd1ff*/
    v11 = 0; /*0x6cd209*/
    if ( *(_BYTE *)(this + 0xD) ) /*0x6cd20d*/
    {
      v39 = v10; /*0x6cd210*/
      v12 = v39; /*0x6cd216*/
      do /*0x6cd271*/
      {
        v13 = *(_DWORD *)(this + 0x14); /*0x6cd21a*/
        v5 = *(_DWORD *)(v13 + 0x18 * v11) == 0; /*0x6cd223*/
        v14 = v13 + 0x18 * v11; /*0x6cd227*/
        if ( !v5 ) /*0x6cd22a*/
        {
          v15 = *(_BYTE *)(v14 + 0xC); /*0x6cd22c*/
          if ( v15 == *(_BYTE *)(this + 0x10) ) /*0x6cd232*/
          {
            *(float *)(v14 + 8) = *(float *)(v14 + 4) * *(float *)(this + 0x2C) * *(float *)(v14 + 0x10) * v12; /*0x6cd23f*/
          }
          else if ( v15 != *(_BYTE *)(this + 0x11) || 0.0 == *(float *)(this + 0x28) ) /*0x6cd253*/
          {
            *(float *)(v14 + 8) = 0.0; /*0x6cd266*/
          }
          else
          {
            *(float *)(v14 + 8) = *(float *)(v14 + 4) * v9 * *(float *)(v14 + 0x10) * v12; /*0x6cd25f*/
          }
        }
        ++v11; /*0x6cd26b*/
      }
      while ( v11 < *(_BYTE *)(this + 0xD) ); /*0x6cd271*/
    }
    v16 = 0.0; /*0x6cd277*/
    if ( *(float *)(this + 0x1C) <= 0.0 ) /*0x6cd283*/
    {
      v27 = 1.0; /*0x6cd36c*/
      v28 = 0.0; /*0x6cd36e*/
LABEL_50:
      if ( (*(_BYTE *)(this + 0xC) & 2) != 0 ) /*0x6cd342*/
      {
        v29 = 0; /*0x6cd34a*/
        v30 = 0xFF; /*0x6cd34c*/
        v42 = kTerrainLODQuadRayDirectionZ; /*0x6cd34f*/
        if ( *(_BYTE *)(this + 0xD) ) /*0x6cd353*/
        {
          while ( 1 ) /*0x6cd385*/
          {
            v32 = (float *)(*(_DWORD *)(this + 0x14) + 0x18 * v29 + 8); /*0x6cd385*/
            if ( v42 < (double)*v32 ) /*0x6cd396*/
            {
              v30 = v29; /*0x6cd39a*/
              v42 = *v32; /*0x6cd39c*/
            }
            v33 = v27; /*0x6cd3a0*/
            v34 = v28; /*0x6cd3a0*/
            v35 = v33; /*0x6cd3a0*/
            ++v29; /*0x6cd3a2*/
            *v32 = v34; /*0x6cd3a5*/
            if ( v29 >= *(_BYTE *)(this + 0xD) ) /*0x6cd3aa*/
              break; /*0x6cd3aa*/
            v31 = v34; /*0x6cd37a*/
            v27 = v35; /*0x6cd37a*/
            v28 = v31; /*0x6cd37a*/
          }
          *(float *)(*(_DWORD *)(this + 0x14) + 0x18 * v30 + 8) = v35; /*0x6cd3ba*/
        }
        else
        {
          *(float *)(*(_DWORD *)(this + 0x14) + 0x17F0) = v27; /*0x6cd366*/
        }
      }
      return; /*0x6cd36b*/
    }
    v17 = 0; /*0x6cd289*/
    v40 = 0.0; /*0x6cd290*/
    if ( !*(_BYTE *)(this + 0xD) ) /*0x6cd28d*/
      goto LABEL_44; /*0x6cd28d*/
    do /*0x6cd2d5*/
    {
      v18 = *(_DWORD *)(this + 0x14); /*0x6cd296*/
      v5 = *(_DWORD *)(v18 + 0x18 * v17) == 0; /*0x6cd29f*/
      v19 = v18 + 0x18 * v17; /*0x6cd2a3*/
      if ( !v5 && 0.0 != *(float *)(v19 + 8) ) /*0x6cd2b0*/
      {
        if ( *(float *)(this + 0x1C) > (double)*(float *)(v19 + 8) ) /*0x6cd2bf*/
          *(float *)(v19 + 8) = 0.0; /*0x6cd2c1*/
        v40 = *(float *)(v19 + 8) + v40; /*0x6cd2cb*/
      }
      ++v17; /*0x6cd2cf*/
    }
    while ( v17 < *(_BYTE *)(this + 0xD) ); /*0x6cd2d5*/
    v20 = v40; /*0x6cd2e1*/
    if ( v40 == 1.0 ) /*0x6cd2e6*/
    {
      v21 = 0.0; /*0x6cd374*/
      i = 1.0; /*0x6cd376*/
LABEL_49:
      v26 = v21; /*0x6cd33c*/
      v27 = i; /*0x6cd33c*/
      v28 = v26; /*0x6cd33c*/
      goto LABEL_50; /*0x6cd33c*/
    }
    if ( v20 > 0.0 ) /*0x6cd2f3*/
    {
      v21 = 0.0; /*0x6cd2f7*/
      v16 = 1.0 / v20; /*0x6cd2f9*/
    }
    else
    {
LABEL_44:
      v21 = 0.0; /*0x6cd2ff*/
    }
    v22 = 0; /*0x6cd301*/
    v23 = v16; /*0x6cd303*/
    for ( i = 1.0; v22 < *(_BYTE *)(this + 0xD); ++v22 ) /*0x6cd305*/
    {
      v25 = *(_DWORD *)(this + 0x14) + 0x18 * v22; /*0x6cd31d*/
      if ( v21 != *(float *)(v25 + 8) ) /*0x6cd328*/
      {
        v41 = v23; /*0x6cd308*/
        *(float *)(v25 + 8) = v41 * *(float *)(v25 + 8); /*0x6cd32f*/
      }
    }
    goto LABEL_49; /*0x6cd338*/
  }
}
