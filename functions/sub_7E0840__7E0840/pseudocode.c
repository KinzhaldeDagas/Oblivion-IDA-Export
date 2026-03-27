int __thiscall sub_7E0840(WaterShaderHeightMap *this)
{
  int v1; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // edi
  bool v6; // zf
  float v7; // esi
  double v8; // st6
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  double v13; // st7
  bool v14; // cc
  float v15; // esi
  double v16; // st6
  double v17; // st7
  int v18; // ecx
  double v19; // st7
  float v21; // [esp+0h] [ebp-30h]
  float v22; // [esp+0h] [ebp-30h]
  char a2; // [esp+17h] [ebp-19h] BYREF
  float a2_1; // [esp+18h] [ebp-18h]
  float v25; // [esp+1Ch] [ebp-14h]
  float v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+24h] [ebp-Ch]
  double v28; // [esp+28h] [ebp-8h]

  v1 = WaterSurfaceResolution;
  v3 = WaterSurfaceResolution + 1;
  v4 = 0;
  a2 = 1;
  if ( v3 > 0 )
  {
    do
    {
      _memset(*(_DWORD *)(this->Unk0F8 + 4 * v4), 0, 4 * v1 + 1);
      _memset(*(_DWORD *)(this->Unk0FC + 4 * v4), 0, 4 * WaterSurfaceResolution + 1);
      v1 = WaterSurfaceResolution;
      if ( v4 < WaterSurfaceResolution )
      {
        _memset(*(_DWORD *)(this->Unk0F8 + 4 * v4), 0, 4 * v1);
        v1 = WaterSurfaceResolution;
      }
      ++v4;
    }
    while ( v4 < v1 + 1 );
  }
  *(float *)&v5 = 0.0;
  v6 = LocalWaterHiRes == 0;
  v25 = 0.0;
  if ( v6 )
  {
    if ( v1 >= 0 )
    {
      do
      {
        v15 = 0.0;
        v16 = (double)WaterSurfaceResolution;
        a2_1 = 0.0;
        v25 = ((double)SLODWORD(v25) - v16 * dbl_A2FAA0) * dbl_A78420;
        if ( v1 >= 0 )
        {
          v28 = v25 * v25;
          do
          {
            a2_1 = ((double)SLODWORD(a2_1) - (double)WaterSurfaceResolution * dbl_A2FAA0) * dbl_A78420;
            v27 = a2_1 * a2_1 + v28;
            v27 = sqrt(v27);
            v27 = v27 * dbl_A91B68;
            v27 = sqrt(v27);
            *(float *)(*(_DWORD *)(this->Unk0F8 + 4 * v5) + 4 * LODWORD(v15)) = v27;
            v17 = 0.0;
            if ( v25 == 0.0 && 0.0 == a2_1 )
            {
              a2_1 = 0.0;
            }
            else
            {
              v27 = sqrt(sub_7DF640(v25, a2_1));
              a2_1 = v27;
              v17 = 0.0;
            }
            v22 = v17;
            v26 = sub_7DF580(v22, 1.0);
            v27 = (double)rand() / dbl_A3D5A8;
            v27 = (v27 + v27) * dbl_A3D5B8;
            v27 = sin(v27);
            v18 = *(_DWORD *)(this->Unk0FC + 4 * v5);
            ++LODWORD(v15);
            v19 = v26 * a2_1;
            a2_1 = v15;
            v27 = v19 * v27;
            *(float *)(v18 + 4 * LODWORD(v15) - 4) = v27;
            v1 = WaterSurfaceResolution;
          }
          while ( SLODWORD(v15) <= WaterSurfaceResolution );
        }
        ++v5;
        v25 = *(float *)&v5;
      }
      while ( v5 <= v1 );
    }
  }
  else if ( v1 >= 0 )
  {
    while ( 1 )
    {
      v7 = 0.0;
      v8 = (double)WaterSurfaceResolution;
      a2_1 = 0.0;
      v25 = ((double)SLODWORD(v25) - v8 * dbl_A2FAA0) * dbl_A78420;
      if ( v1 >= 0 )
        break;
LABEL_27:
      ++v5;
      v25 = *(float *)&v5;
      if ( v5 > v1 )
        return sub_7E06B0(this, (volatile LONG *)&a2);
    }
    v28 = v25 * v25;
    while ( 1 )
    {
      a2_1 = ((double)SLODWORD(a2_1) - (double)WaterSurfaceResolution * dbl_A2FAA0) * dbl_A78420;
      v26 = a2_1 * a2_1 + v28;
      v26 = sqrt(v26);
      v26 = v26 * dbl_A91B68;
      v26 = sqrt(v26);
      *(float *)(*(_DWORD *)(this->Unk0F8 + 4 * v5) + 4 * LODWORD(v7)) = v26;
      if ( v5 < 0x20 && SLODWORD(v7) < 0x20 )
        goto LABEL_26;
      v9 = WaterSurfaceResolution;
      v10 = WaterSurfaceResolution - 0x20;
      if ( v5 <= v10 || SLODWORD(v7) >= 0x20 )
      {
        if ( v5 < 0x20 && SLODWORD(v7) > v10 )
        {
          v11 = *(_DWORD *)(this->Unk0FC + 4 * v5);
          v12 = *(float *)(v11 + 4 * (LODWORD(v7) - v9) + 0x100);
LABEL_25:
          *(float *)(v11 + 4 * LODWORD(v7)) = v12;
          goto LABEL_26;
        }
        if ( v5 <= v10 || SLODWORD(v7) <= v10 )
        {
          v13 = 0.0;
          if ( v25 == 0.0 && 0.0 == a2_1 )
          {
            a2_1 = 0.0;
          }
          else
          {
            v26 = sqrt(sub_7DF640(v25, a2_1));
            a2_1 = v26;
            v13 = 0.0;
          }
          v21 = v13;
          v26 = sub_7DF580(v21, 1.0);
          v27 = (double)rand() / dbl_A3D5A8;
          v27 = (v27 + v27) * dbl_A3D5B8;
          v27 = sin(v27);
          v11 = *(_DWORD *)(this->Unk0FC + 4 * v5);
          v27 = v26 * a2_1 * v27;
          v12 = v27;
          goto LABEL_25;
        }
        *(float *)(*(_DWORD *)(this->Unk0FC + 4 * v5) + 4 * LODWORD(v7)) = *(float *)(*(_DWORD *)(this->Unk0FC
                                                                                                + 4 * (0x40 - v9 + v5))
                                                                                    + 4 * (LODWORD(v7) + 0x40 - v9));
      }
      else
      {
        *(float *)(*(_DWORD *)(this->Unk0FC + 4 * v5) + 4 * LODWORD(v7)) = *(float *)(*(_DWORD *)(this->Unk0FC
                                                                                                + 4 * (v5 - v9)
                                                                                                + 0x100)
                                                                                    + 4 * LODWORD(v7));
      }
LABEL_26:
      v1 = WaterSurfaceResolution;
      v14 = ++LODWORD(v7) <= WaterSurfaceResolution;
      a2_1 = v7;
      if ( !v14 )
        goto LABEL_27;
    }
  }
  return sub_7E06B0(this, (volatile LONG *)&a2);
}
