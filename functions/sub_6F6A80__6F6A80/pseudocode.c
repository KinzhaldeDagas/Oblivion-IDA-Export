// Oblivion standard-normal generator using Marsaglia polar rejection. It rejects radiusSquared==0 but accepts the exact radiusSquared==1 boundary because the outer test is >1, and it returns only y*scale while discarding x*scale. Prettier Faces replaces the sole call with a private PCG32 generator that requires the finite open disk and caches both samples.
double __cdecl FaceGen_RandomStandardNormal()
{
  double firstUnit; // st7
  double secondUnit; // st7
  double firstComponent; // [esp+0h] [ebp-10h]
  double radiusSquared; // [esp+0h] [ebp-10h]
  double secondComponent; // [esp+8h] [ebp-8h]

  do /*0x6f6ace*/
  {
    do /*0x6f6ac3*/
    {
      firstUnit = FaceGen_CRTRandomUnitInterval();// Map the first k/2^60 unit sample to polar component x = 2u - 1. /*0x6f6a8d*/
      firstComponent = firstUnit + firstUnit - dbl_A2F928; /*0x6f6a9a*/
      secondUnit = FaceGen_CRTRandomUnitInterval();// Map the second independent call to polar component y = 2u - 1. /*0x6f6a9d*/
      secondComponent = secondUnit + secondUnit - 1.0; /*0x6f6aaa*/
      radiusSquared = secondComponent * secondComponent + firstComponent * firstComponent;// radiusSquared = x*x + y*y for Marsaglia polar rejection. /*0x6f6ab7*/
    }
    while ( radiusSquared > 1.0 );              // Stock acceptance bug: retries only when radiusSquared > 1, so the exact unit-circle boundary is accepted instead of requiring radiusSquared < 1. /*0x6f6ac3*/
  }
  while ( 0.0 == radiusSquared );               // Correctly rejects radiusSquared == 0 before log(radiusSquared)/radiusSquared. /*0x6f6ace*/
  return sqrt(log(radiusSquared) * kFaceGenPolarNegativeTwo / radiusSquared) * secondComponent;// Return y * scale. The equally valid x * scale sample is not cached and is discarded. /*0x6f6ae7*/
}
