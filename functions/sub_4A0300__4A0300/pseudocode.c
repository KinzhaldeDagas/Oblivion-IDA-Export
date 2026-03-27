bool __thiscall sub_4A0300(int this, float *a2, float a3)
{
  double v4; // st7
  float v6; // [esp+4h] [ebp-10h]
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]
  float v10; // [esp+18h] [ebp+4h]
  float v11; // [esp+18h] [ebp+4h]
  float v12; // [esp+18h] [ebp+4h]
  int v13; // [esp+18h] [ebp+4h]
  float v14; // [esp+18h] [ebp+4h]

  v6 = a2[0x48];
  if ( *(_BYTE *)(this + 0xEC) == 3 )
  {
    v10 = SettingLODFadeOutMultActors * flt_B075F0;
    v6 = v6 / v10;
  }
  v7 = *(float *)(this + 0x88) - a2[0x22];
  v8 = *(float *)(this + 0x8C) - a2[0x23];
  v9 = *(float *)(this + 0x90) - a2[0x24];
  v11 = v8 * v8 + v7 * v7 + v9 * v9;
  v12 = sqrt(v11);
  *(float *)&v13 = (v12 - *(float *)(this + 0x2C)) * a3;
  if ( *(float *)&v13 >= 0.0 )
    v4 = *(float *)&v13;
  else
    v4 = (float)0.0;
  v14 = v4 * (v6 * v6 * v4);
  return *(float *)(this + 0xE4) >= (double)v14;
}
