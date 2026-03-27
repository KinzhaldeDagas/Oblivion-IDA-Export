double __cdecl Calc_ActorBaseHealth(int a1, signed int a2)
{
  double result; // st7

  result = (double)a2 * fPCBaseHealthMult;
  Double_To_SInt32(result);
  return result;
}
