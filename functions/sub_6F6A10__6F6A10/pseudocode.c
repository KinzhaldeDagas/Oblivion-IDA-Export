// FaceGen unit generator: lazily reseeds process-global CRT rand() from whole-second time, concatenates four base-32768 digits, and scales the integer by 2^-60 to the exact grid k/2^60 in [0,1).
double __cdecl FaceGen_CRTRandomUnitInterval()
{
  unsigned int seedSeconds; // eax
  int drawsRemaining; // esi
  double combinedInteger; // st7
  double accumulator; // [esp+8h] [ebp-8h]

  if ( !g_faceGenCRTRandomSeeded ) /*0x6f6a19*/
  {
    seedSeconds = _time64(0); /*0x6f6a25*/
    srand(seedSeconds); /*0x6f6a2b*/
    g_faceGenCRTRandomSeeded = 1; /*0x6f6a33*/
  }
  drawsRemaining = 4;                           // Build one unit sample from exactly four CRT rand() digits in radix 32768. /*0x6f6a3c*/
  accumulator = 0.0; /*0x6f6a41*/
  do /*0x6f6a69*/
  {
    --drawsRemaining; /*0x6f6a4e*/
    combinedInteger = (double)rand() + accumulator * kFaceGenCRTRandRadix32768;// Digit recurrence: accumulator = accumulator * 32768.0 + rand(). /*0x6f6a63*/
    accumulator = combinedInteger; /*0x6f6a65*/
  }
  while ( drawsRemaining ); /*0x6f6a69*/
  return combinedInteger * kFaceGenCRTFourDrawScale;// Scale the four-digit integer by 2^-60, producing the exact grid k/2^60 in [0,1). /*0x6f6a71*/
}
