double __cdecl Calc_AIAquireForPickpocketing_(signed int a1, signed int a2)
{
  double result; // st7

  result = (double)a2 * fAiAquirePickMult + fAiAquirePickBase + (double)a1;
  Double_To_SInt32(result);
  return result;
}
