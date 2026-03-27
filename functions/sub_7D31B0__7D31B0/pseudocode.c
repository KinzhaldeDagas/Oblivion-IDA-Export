double __thiscall sub_7D31B0(int this, float a2, float a3, float a4, float *a5)
{
  float *v6; // eax
  bool v7; // zf
  float v8; // ecx
  float v9; // edx
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st6
  double v14; // st7
  float v16; // [esp+4h] [ebp-28h]
  float v17; // [esp+8h] [ebp-24h]
  float v18; // [esp+Ch] [ebp-20h]
  float v19; // [esp+10h] [ebp-1Ch]
  float v20; // [esp+14h] [ebp-18h]
  float v21; // [esp+18h] [ebp-14h]
  float v22; // [esp+1Ch] [ebp-10h]
  float v23; // [esp+20h] [ebp-Ch]
  float v24; // [esp+3Ch] [ebp+10h]
  float v25; // [esp+3Ch] [ebp+10h]
  int v26; // [esp+3Ch] [ebp+10h]
  int v27; // [esp+3Ch] [ebp+10h]
  float v28; // [esp+3Ch] [ebp+10h]
  float v29; // [esp+3Ch] [ebp+10h]

  v6 = *(float **)(this + 0x100);
  if ( v6 != a5 && *(_BYTE *)(this + 0xF4) != 1 )
  {
    v7 = *(_BYTE *)(this + 0xFC) == 0;
    v16 = v6[0x3E];
    v17 = v6[0x22];
    v18 = v6[0x23];
    v19 = v6[0x24];
    v8 = v6[0x3C];
    v23 = v6[0x3B];
    v9 = v6[0x3D];
    *(float *)(this + 0xD0) = 1.0;
    if ( !v7 )
    {
      v20 = a2 - v17;
      v21 = a3 - v18;
      v22 = a4 - v19;
      v24 = v21 * v21 + v20 * v20 + v22 * v22;
      v25 = sqrt(v24);
      *(float *)&v26 = v25 / v16;
      v10 = *(float *)&v26;
      if ( *(float *)&v26 < 0.0 )
        *(float *)&v26 = 0.0;
      if ( *(float *)&v26 <= 1.0 )
      {
        if ( v10 >= 0.0 )
        {
          v12 = v10;
          v11 = 1.0;
        }
        else
        {
          v11 = 1.0;
          v12 = (float)0.0;
        }
      }
      else
      {
        v11 = 1.0;
        v12 = (float)1.0;
      }
      *(float *)(this + 0xD0) = v11 - v12 * v12;
    }
    if ( v9 >= (double)v8 )
    {
      *(float *)&v27 = v9;
      v13 = v8;
      v14 = v9;
    }
    else
    {
      v13 = v8;
      v14 = v9;
      *(float *)&v27 = v8;
    }
    if ( *(float *)&v27 >= (double)v23 )
    {
      if ( v13 <= v14 )
        goto LABEL_19;
    }
    else
    {
      v13 = v23;
    }
    v14 = v13;
LABEL_19:
    v28 = v14;
    v29 = *(float *)(this + 0xD0) * v28;
    *(float *)(this + 0xD0) = v29;
    return v29;
  }
  return 0.0;
}
