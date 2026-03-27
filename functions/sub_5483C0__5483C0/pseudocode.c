double __cdecl sub_5483C0(float a1, float a2, float a3)
{
  double result; // st7

  result = (a1 - a2) / (a1 / a3) * fRepairCostMult;
  Double_To_SInt32(result);
  return result;
}
