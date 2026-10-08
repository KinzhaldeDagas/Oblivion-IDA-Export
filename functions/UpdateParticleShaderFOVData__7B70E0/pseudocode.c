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

  v4 = a1 * dbl_A2FAA0 * dbl_A31C78; /*0x7b70f3*/
  v1 = sin(v4); /*0x7b7100*/
  v5 = cos(v4); /*0x7b7112*/
  v6 = v1 / v5; /*0x7b711d*/
  v3 = v6; /*0x7b7125*/
  v7 = sin(dbl_A690D0); /*0x7b7134*/
  v2 = v7; /*0x7b713c*/
  v8 = cos(dbl_A690D0); /*0x7b714a*/
  flt_B2D80C = v3 / (v2 / v8); /*0x7b7159*/
}
