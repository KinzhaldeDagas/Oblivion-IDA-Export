double __cdecl sub_5482F0(int a1, int a2, float a3)
{
  double v3; // st7
  double result; // st7
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v5 = (double)a1 * MEMORY[0xB379A0] + MEMORY[0xB37998]; /*0x548300*/
  v3 = v5; /*0x548304*/
  v6 = (double)a2 * MEMORY[0xB379A8]; /*0x548312*/
  result = (v3 + v6) * a3; /*0x54831a*/
  Double_To_SInt32(result); /*0x54831e*/
  return result;
}
