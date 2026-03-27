double __cdecl sub_5489E0(signed int a1)
{
  double v1; // st7
  float v3; // [esp+4h] [ebp+4h]

  v3 = (double)a1 * fBarterDispositionMod;
  v1 = v3;
  if ( v3 <= 0.0 )
    return (float)iBarterDispositionPenalty;
  return (float)v1;
}
