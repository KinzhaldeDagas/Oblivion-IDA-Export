bool __cdecl sub_962CF0(float a1, float *a2, int a3, float *a4)
{
  double v5; // st6
  double v6; // st5
  double v7; // st7
  float v9; // [esp+10h] [ebp-5Ch]
  float v10; // [esp+14h] [ebp-58h]
  float v11; // [esp+18h] [ebp-54h]
  float v12[20]; // [esp+1Ch] [ebp-50h] BYREF
  float v13; // [esp+74h] [ebp+8h]
  float v14; // [esp+74h] [ebp+8h]
  float v15; // [esp+74h] [ebp+8h]
  float v16; // [esp+74h] [ebp+8h]
  float v17; // [esp+74h] [ebp+8h]
  float v18; // [esp+74h] [ebp+8h]

  v9 = a4[1] - a2[1];
  v10 = a4[2] - a2[2];
  v11 = a4[3] - a2[3];
  v5 = v10;
  v6 = v9;
  v7 = v11;
  v13 = a2[6] * v11 + a2[5] * v10 + v9 * a2[4];
  v14 = fabs(v13);
  if ( a2[0xD] >= (double)v14 )
  {
    v15 = a2[8] * v5 + a2[7] * v6 + a2[9] * v7;
    v16 = fabs(v15);
    if ( a2[0xE] >= (double)v16 )
    {
      v17 = v7 * a2[0xC] + v5 * a2[0xB] + v6 * a2[0xA];
      v18 = fabs(v17);
      if ( a2[0xF] >= (double)v18 )
        return 1;
    }
  }
  sub_974250(v12, (int)a2, (int)a4, a1, flt_A37080, flt_A79DB4, 0x20);
  sub_96F160(v12);
  return NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)v12) == 3
      || NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)v12) == 2;
}
