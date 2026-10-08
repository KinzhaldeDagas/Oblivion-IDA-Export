double __cdecl sub_547910(float a1, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+8h] [ebp+4h]
  float v9; // [esp+8h] [ebp+4h]
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]
  float v13; // [esp+Ch] [ebp+8h]

  v7 = (a1 - a2) * MEMORY[0xB37308]; /*0x54791f*/
  v5 = a5 - unk_B37320; /*0x547938*/
  if ( v5 <= 0.0 ) /*0x547947*/
    v5 = 0.0; /*0x54794d*/
  v8 = v5; /*0x54794f*/
  v9 = v8 / fCostant_100 + 1.0; /*0x547963*/
  v10 = 1.0 / v9; /*0x54796b*/
  v11 = pow(v10, unk_B37318); /*0x54797e*/
  v13 = a4 / a3 * unk_B37310; /*0x547930*/
  return (float)(v11 * (v13 + v7)); /*0x547998*/
}
