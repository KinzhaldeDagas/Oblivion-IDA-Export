double __cdecl Calc_AIAquireForStealing_(signed int a1, signed int a2)
{
  double result; // st7

  result = (double)a2 * fAiAquireStealMult + fAiAquireStealBase + (double)a1;
  Double_To_SInt32(result);
  return result;
}
