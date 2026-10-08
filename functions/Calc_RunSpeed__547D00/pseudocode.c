// TES4 authoritative: Calc_RunSpeed. Starts from Calc_WalkSpeed, then applies fMoveRunAthleticsMult * Athletics * 0.01 + fMoveRunMult. Selected by sub_5E65B0 when process movement flag 0x200 is set.
double __cdecl Calc_RunSpeed(float a1, float a2, char a3, float a4, int a5, char a6)
{
  float v7; // [esp+14h] [ebp-4h]

  v7 = Calc_WalkSpeed(a1, a2, a6, a3, *(float *)&a5) + dbl_A2FC68; /*0x547d2d*/
  return (float)(v7 * (MEMORY[0xB373E0] * a4 * fConstant_Inv100 + MEMORY[0xB373E8])); /*0x547d58*/
}
