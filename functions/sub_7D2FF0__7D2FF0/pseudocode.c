double __thiscall sub_7D2FF0(int this, float *a2)
{
  bool v3; // zf
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st6
  double v11; // st7
  float v13; // [esp+4h] [ebp-34h]
  float v14; // [esp+8h] [ebp-30h]
  float v15; // [esp+Ch] [ebp-2Ch]
  float v16; // [esp+10h] [ebp-28h]
  float v17; // [esp+14h] [ebp-24h]
  float v18; // [esp+18h] [ebp-20h]
  float v19; // [esp+1Ch] [ebp-1Ch]
  float v20; // [esp+20h] [ebp-18h]
  float v21; // [esp+24h] [ebp-14h]
  float v22; // [esp+28h] [ebp-10h]
  float v23; // [esp+2Ch] [ebp-Ch]
  float v24; // [esp+3Ch] [ebp+4h]
  float v25; // [esp+3Ch] [ebp+4h]
  float v26; // [esp+3Ch] [ebp+4h]
  float v27; // [esp+3Ch] [ebp+4h]
  float v28; // [esp+3Ch] [ebp+4h]
  float v29; // [esp+3Ch] [ebp+4h]

  v3 = *(_BYTE *)(this + 0xFC) == 0;
  v14 = a2[0x22];
  v15 = a2[0x23];
  v16 = a2[0x24];
  v4 = *(float **)(this + 0x100);
  v13 = v4[0x3E];
  v17 = v4[0x22];
  v18 = v4[0x23];
  v19 = v4[0x24];
  v5 = v4[0x3C];
  v23 = v4[0x3B];
  v6 = v4[0x3D];
  *(float *)(this + 0xD0) = 1.0;
  if ( !v3 )
  {
    v20 = v14 - v17;
    v21 = v15 - v18;
    v22 = v16 - v19;
    v24 = v21 * v21 + v20 * v20 + v22 * v22;
    v25 = sqrt(v24);
    v26 = v25 / v13;
    v7 = v26;
    if ( v26 < 0.0 )
      v26 = 0.0;
    if ( v26 <= 1.0 )
    {
      if ( v7 >= 0.0 )
      {
        v9 = v7;
        v8 = 1.0;
      }
      else
      {
        v8 = 1.0;
        v9 = (float)0.0;
      }
    }
    else
    {
      v8 = 1.0;
      v9 = (float)1.0;
    }
    *(float *)(this + 0xD0) = v8 - v9 * v9;
  }
  if ( v6 >= (double)v5 )
  {
    v27 = v6;
    v10 = v5;
    v11 = v6;
  }
  else
  {
    v10 = v5;
    v11 = v6;
    v27 = v5;
  }
  if ( v27 >= (double)v23 )
  {
    if ( v10 <= v11 )
      goto LABEL_17;
  }
  else
  {
    v10 = v23;
  }
  v11 = v10;
LABEL_17:
  v28 = v11;
  v29 = v28 * *(float *)(this + 0xD0);
  *(float *)(this + 0xD0) = v29;
  return v29;
}
