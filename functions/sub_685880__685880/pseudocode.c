char __thiscall sub_685880(int this, float a2)
{
  char *v4; // ecx
  int v5; // eax
  double v6; // st7
  float *v7; // ecx
  int v9; // ecx
  float v10; // [esp+Ch] [ebp-4h]
  float v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+14h] [ebp+4h]
  float v13; // [esp+14h] [ebp+4h]
  float v14; // [esp+14h] [ebp+4h]
  float v15; // [esp+14h] [ebp+4h]

  v11 = *(float *)(this + 0x1C) - a2;
  if ( v11 > 0.0 && 0.0 == *(float *)(this + 0x20) || v11 / *(float *)(this + 0x20) > dbl_A2F928 )
  {
    v7 = *(float **)(this + 0x30);
    *(float *)(this + 0x20) = 0.0;
    if ( v7 )
    {
      sub_680D00(v7, 0.0);
      return 1;
    }
    return 1;
  }
  v4 = *(char **)(this + 0x30);
  v12 = flt_B3A498;
  if ( v4 )
  {
    v5 = sub_680CB0(v4);
    if ( v5 )
    {
      if ( v5 != 7 )
        v12 = fPathAvoidanceTimeOut;
    }
  }
  v13 = v12 / flt_B06530;
  v6 = v13;
  v10 = v13 / dbl_A3F3F0;
  v14 = flt_B33E9C;
  if ( v10 < (double)v14 )
    v14 = v10;
  v15 = v14 + *(float *)(this + 0x20);
  *(float *)(this + 0x20) = v15;
  if ( v15 <= v6 )
    return 1;
  v9 = *(_DWORD *)(this + 0x30);
  if ( !v9 || !sub_680D60(v9) )
    return 0;
  *(float *)(this + 0x20) = 0.0;
  return 1;
}
