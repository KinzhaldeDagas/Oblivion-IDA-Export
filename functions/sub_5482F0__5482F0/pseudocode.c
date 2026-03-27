double __cdecl sub_5482F0(int a1, int a2, float a3)
{
  double v3; // st7
  double result; // st7
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v5 = (double)a1 * fRepairArmorerMult + fRepairArmorerBase;
  v3 = v5;
  v6 = (double)a2 * fRepairStrengthMult;
  result = (v3 + v6) * a3;
  Double_To_SInt32(result);
  return result;
}
