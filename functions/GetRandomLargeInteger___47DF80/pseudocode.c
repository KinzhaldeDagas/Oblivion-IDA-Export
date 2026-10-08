// Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
int __cdecl Game_RandomLargeInteger(unsigned int Seed)
{
  unsigned int v1; // eax

  if ( Seed ) /*0x47df86*/
  {
    srand(Seed); /*0x47df89*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47df91*/
  }
  else if ( g_gameCRTRandomNeedsSeed )          // Game RNG consults only g_gameCRTRandomNeedsSeed; it cannot observe FaceGen's separate srand call despite sharing the same CRT state. /*0x47df9d*/
  {
    v1 = _time64(0); /*0x47dfa8*/
    srand(v1); /*0x47dfae*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47dfb6*/
  }
  return rand();
}
