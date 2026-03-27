unsigned int __thiscall sub_73E720(int this, float *a2, int a3)
{
  double v5; // st7
  double v6; // st7
  double v7; // st5
  double v8; // st7
  unsigned int v9; // edx
  unsigned int v10; // ecx
  float *v11; // esi
  float v13; // [esp+8h] [ebp-14h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+18h] [ebp-4h]
  float v18; // [esp+20h] [ebp+4h]
  float v19; // [esp+20h] [ebp+4h]
  float v20; // [esp+20h] [ebp+4h]
  float v21; // [esp+20h] [ebp+4h]
  float v22; // [esp+20h] [ebp+4h]

  v15 = *(float *)(this + 0x18) - a2[0x22];
  v16 = *(float *)(this + 0x1C) - a2[0x23];
  v17 = *(float *)(this + 0x20) - a2[0x24];
  v18 = v16 * v16 + v15 * v15 + v17 * v17;
  v19 = sqrt(v18);
  v5 = v19;
  if ( *(float *)(this + 0x24) > (double)v19 || flt_A372CC >= v5 )
    return 0;
  if ( *((_BYTE *)a2 + 0x104) )
    v6 = *(float *)(this + 0x24);
  else
    v6 = *(float *)(this + 0x24) / v5;
  v13 = v6;
  v7 = dbl_A3D0C0;
  v20 = v7 / (a2[0x3C] - a2[0x3B]);
  v14 = v7 / (a2[0x3D] - a2[0x3E]);
  v8 = v20;
  if ( v14 >= (double)v20 )
    v8 = v14;
  v9 = *(_DWORD *)(this + 0x28);
  v21 = v8;
  v10 = 0;
  v22 = v21 * v13 * a2[0x48];
  if ( v9 )
  {
    v11 = *(float **)(this + 0x2C);
    do
    {
      if ( *v11 <= (double)v22 )
        break;
      ++v10;
      ++v11;
    }
    while ( v10 < v9 );
  }
  return v10;
}
