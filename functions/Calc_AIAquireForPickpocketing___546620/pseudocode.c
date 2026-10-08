// RadiantAI 2026-07-12: acquire pickpocket score. Callers pass luck-modified Sneak as arg1 and raw Responsibility AV 0x24 as arg2. Defaults base=0, mult=-1 => score = luckModifiedSneak - responsibility.
double __cdecl Calc_AIAquireForPickpocketing_(signed int a1, signed int a2)
{
  double result; // st7

  result = (double)a2 * flt_B36778[0x54] + flt_B36778[0x52] + (double)a1; /*0x546630*/
  Double_To_SInt32(result); /*0x546634*/
  return result;
}
