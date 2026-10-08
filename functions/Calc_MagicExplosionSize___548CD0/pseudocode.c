double __cdecl Calc_MagicExplosionSize_(int a1, int a2, float a3, SInt32 skillValue, SInt32 luckValue, float a6)
{
  double v6; // st7
  double v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+10h] [ebp+4h]
  float v10; // [esp+14h] [ebp+8h]
  float v11; // [esp+14h] [ebp+8h]
  float v12; // [esp+14h] [ebp+8h]
  float v13; // [esp+14h] [ebp+8h]

  if ( a2 <= 0 ) /*0x548cd8*/
  {
    v6 = 1.0; /*0x548cfa*/
  }
  else
  {
    v10 = a3 / (double)a2; /*0x548ce2*/
    v11 = v10 * v10; /*0x548cec*/
    v6 = 1.0 - v11; /*0x548cf6*/
  }
  v12 = v6; /*0x548d00*/
  v13 = MEMORY[0xB37EA8] * v12 * (double)a1 + MEMORY[0xB37EA0]; /*0x548d1e*/
  v8 = Calc_LuckModifiedSkill(skillValue, luckValue); /*0x548d27*/
  v9 = Calc_FatigueFactor(a6) * v8; /*0x548d3e*/
  return (float)(v13 - MEMORY[0xB37EB0] * v9); /*0x548d5d*/
}
