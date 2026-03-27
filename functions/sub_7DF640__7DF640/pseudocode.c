double __stdcall sub_7DF640(float a1, float a2)
{
  float v3; // [esp+0h] [ebp-20h]
  float v4; // [esp+4h] [ebp-1Ch]
  float v5; // [esp+Ch] [ebp-14h]
  float v6; // [esp+10h] [ebp-10h]
  double v7; // [esp+10h] [ebp-10h]
  float v8; // [esp+18h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-4h]
  float v10; // [esp+1Ch] [ebp-4h]
  float v11; // [esp+1Ch] [ebp-4h]
  float v12; // [esp+24h] [ebp+4h]
  float v13; // [esp+24h] [ebp+4h]
  float v15; // [esp+28h] [ebp+8h]
  float v16; // [esp+28h] [ebp+8h]
  float v17; // [esp+28h] [ebp+8h]

  v3 = WaterShader_Direction * dbl_A3D5B8 / dbl_A3F418;
  v4 = WaterShader_Velocity * WaterShader_Velocity / dbl_A91B68;
  v5 = a1 * a1 + a2 * a2;
  v6 = cos(v3);
  v7 = v6 * a1;
  v12 = sin(v3);
  v13 = v12 * a2 + v7;
  if ( v13 < dbl_A2FC68 )
    v13 = 0.0;
  v15 = dbl_A3D360 / (v4 * v4 * v5);
  v16 = exp(v15);
  v8 = WaterShader_Amplitude / dbl_A3F3C8;
  v17 = v16 * (v13 * v13) * v8 / (v5 * v5 * v5);
  v9 = v4 / dbl_A68950;
  v10 = -v5 * v9 * v9;
  v11 = exp(v10);
  if ( v13 < 0.0 )
    v17 = v17 * dbl_A3C770;
  return (float)(v11 * v17);
}
