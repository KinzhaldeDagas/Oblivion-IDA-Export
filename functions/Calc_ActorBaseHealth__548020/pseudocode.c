double __cdecl Calc_ActorBaseHealth(int a1, signed int a2)
{
  double result; // st7

  result = (double)a2 * MEMORY[0xB37720]; /*0x548024*/
  Double_To_SInt32(result); /*0x54802a*/
  return result;
}
