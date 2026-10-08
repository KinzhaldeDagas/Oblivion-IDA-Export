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

  v3 = OB_ShaderConstantStorage_010201A0[0x6B] * dbl_A3D5B8 / dbl_A3F418; /*0x7df655*/
  v4 = OB_ShaderConstantStorage_010201A0[0x6C] * OB_ShaderConstantStorage_010201A0[0x6C] / dbl_A91B68; /*0x7df676*/
  v5 = a1 * a1 + a2 * a2; /*0x7df698*/
  v6 = cos(v3); /*0x7df6a4*/
  v7 = v6 * a1; /*0x7df6b0*/
  v12 = sin(v3); /*0x7df6bc*/
  v13 = v12 * a2 + v7; /*0x7df6cc*/
  if ( v13 < dbl_A2FC68 ) /*0x7df6df*/
    v13 = 0.0; /*0x7df6e3*/
  v15 = dbl_A3D360 / (v4 * v4 * v5); /*0x7df707*/
  v16 = exp(v15); /*0x7df714*/
  v8 = OB_ShaderConstantStorage_010201A0[0x71] / dbl_A3F3C8; /*0x7df664*/
  v17 = v16 * (v13 * v13) * v8 / (v5 * v5 * v5); /*0x7df73a*/
  v9 = v4 / dbl_A68950; /*0x7df684*/
  v10 = -v5 * v9 * v9; /*0x7df74a*/
  v11 = exp(v10); /*0x7df757*/
  if ( v13 < 0.0 ) /*0x7df76e*/
    v17 = v17 * dbl_A3C770; /*0x7df77a*/
  return (float)(v11 * v17); /*0x7df78e*/
}
