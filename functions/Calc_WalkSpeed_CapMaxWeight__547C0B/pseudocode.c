double __cdecl Calc_WalkSpeed_::CapMaxWeight(float a1, float a2, char a3, char a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st7
  double result; // st7
  float v9; // [esp+14h] [ebp+14h]
  float v10; // [esp+14h] [ebp+14h]

  v4 = a2; /*0x547c0b*/
  v5 = MEMORY[0xB37418]; /*0x547c0f*/
  if ( v5 < a2 ) /*0x547c1c*/
    v4 = MEMORY[0xB37418]; /*0x547c28*/
  v6 = (v4 + MEMORY[0xB37410]) / (v5 - MEMORY[0xB37410]); /*0x547c3b*/
  if ( a4 ) /*0x547c3d*/
  {
    v9 = (1.0 - v6 * MEMORY[0xB373D8]) * ((MEMORY[0xB373F8] - MEMORY[0xB373F0]) * (a1 * dbl_A3D8E8) + MEMORY[0xB373F0]); /*0x547c69*/
    v7 = v9 * MEMORY[0xB37420]; /*0x547c71*/
  }
  else
  {
    v7 = (1.0 - v6 * MEMORY[0xB373D0]) * ((MEMORY[0xB373F8] - MEMORY[0xB373F0]) * (a1 * dbl_A3D8E8) + MEMORY[0xB373F0]); /*0x547ccf*/
  }
  v10 = v7; /*0x547cd6*/
  if ( a3 ) /*0x547cda*/
    v10 = MEMORY[0xB37428] * v10; /*0x547ce6*/
  result = 0.0; /*0x547cea*/
  if ( v10 >= 0.0 ) /*0x547cf7*/
    return v10; /*0x547cfc*/
  return result; /*0x547cfb*/
}
