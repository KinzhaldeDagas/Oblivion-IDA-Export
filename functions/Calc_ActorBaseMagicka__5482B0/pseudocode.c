double __cdecl Calc_ActorBaseMagicka(int a1, float a2)
{
  double result; // st7

  if ( LOBYTE(a2) ) /*0x5482b5*/
    result = (double)a1 * MEMORY[0xB37710] + (double)a1; /*0x5482c9*/
  else
    result = (double)a1 * MEMORY[0xB37718] + (double)a1; /*0x5482e4*/
  Double_To_SInt32(result); /*0x5482cd*/
  return result;
}
