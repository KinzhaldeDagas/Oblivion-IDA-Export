int __cdecl Magic_GetProjectileDistances(int a1, float *a2, float *a3)
{
  int result; // eax

  *a2 = 1000.0;
  result = a1 - 1;
  *a3 = 2000.0;
  if ( a1 == 1 )
  {
    *a2 = fMagicBoltOptimalDistance;
    *a3 = fMagicBoltMaximumDistance;
  }
  else
  {
    result = a1 - 2;
    if ( a1 == 2 )
    {
      *a2 = fMagicSprayOptimalDistance;
      *a3 = fMagicSprayMaximumDistance;
    }
    else
    {
      result = a1 - 3;
      if ( a1 == 3 )
      {
        *a2 = fMagicFogOptimalDistance;
        *a3 = fMagicFogMaximumDistance;
      }
      else
      {
        *a2 = fMagicBallOptimalDistance;
        *a3 = fMagicBallMaximumDistance;
      }
    }
  }
  return result;
}
