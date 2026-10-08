double __cdecl sub_5483E0(float a1, float a2)
{
  double result; // st7

  result = (a1 - a2) * MEMORY[0xB379D0]; /*0x5483e8*/
  Double_To_SInt32(result); /*0x5483ee*/
  return result;
}
