double __cdecl Calc_ActorBaseMagicka(int a1, float a2)
{
  double result; // st7

  if ( LOBYTE(a2) )
    result = (double)a1 * fPCBaseMagickaMult + (double)a1;
  else
    result = (double)a1 * fNPCBaseMagickaMult + (double)a1;
  Double_To_SInt32(result);
  return result;
}
