// RadiantAI 2026-07-12: acquire kill score. Callers pass shouldActorFight result as arg1 and raw Responsibility AV 0x24 as arg2. Defaults base=50, mult=-1 => score = fightScore + 50 - responsibility.
double __cdecl sub_546640(signed int a1, signed int a2)
{
  double result; // st7

  result = (double)a2 * flt_B36778[0x58] + flt_B36778[0x56] + (double)a1; /*0x546650*/
  Double_To_SInt32(result); /*0x546654*/
  return result;
}
