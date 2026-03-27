void __cdecl UpdateParticleShaderFOVData(float a1)
{
  float v1; // [esp+0h] [ebp-8h]
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]
  float v4; // [esp+Ch] [ebp+4h]
  float v5; // [esp+Ch] [ebp+4h]
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  v4 = a1 * dbl_A2FAA0 * dbl_A31C78;
  v1 = sin(v4);
  v5 = cos(v4);
  v6 = v1 / v5;
  v3 = v6;
  v7 = sin(dbl_A690D0);
  v2 = v7;
  v8 = cos(dbl_A690D0);
  flt_B2D80C = v3 / (v2 / v8);
}
