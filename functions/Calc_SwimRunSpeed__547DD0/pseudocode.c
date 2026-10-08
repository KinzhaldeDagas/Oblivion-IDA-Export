double __cdecl Calc_SwimRunSpeed(float a1, float a2, char a3, int a4, float a5, float a6)
{
  double v6; // rt0
  double v7; // st6
  float v9; // [esp+14h] [ebp-4h]
  float v10; // [esp+2Ch] [ebp+14h]
  float v11; // [esp+2Ch] [ebp+14h]

  v9 = Calc_WalkSpeed(a1, a2, 0, a3, *(float *)&a4) + dbl_A2FC68; /*0x547dfa*/
  v6 = fConstant_Inv100; /*0x547e20*/
  v7 = a5; /*0x547e24*/
  v10 = (MEMORY[0xB373E0] * a5 * v6 + MEMORY[0xB373E8]) * v9; /*0x547e26*/
  v11 = v10 * (a6 / fCostant_100 + dbl_A2F928); /*0x547e40*/
  return (float)((v6 * (v7 * MEMORY[0xB37448]) + MEMORY[0xB37440]) * v11); /*0x547e65*/
}
