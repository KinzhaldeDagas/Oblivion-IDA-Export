double __cdecl sub_546640(signed int a1, signed int a2)
{
  double result; // st7

  result = (double)a2 * fAiAquireKillMult + fAiAquireKillBase + (double)a1;
  Double_To_SInt32(result);
  return result;
}
