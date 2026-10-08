// Engine RNG range helper: returns min + (max-min)*rand()/0x7FFF after lazy time seed.
int __cdecl Game_RandomIntInRange(int a1, int a2)
{
  unsigned int v2; // eax

  if ( g_gameCRTRandomNeedsSeed ) /*0x47dfd0*/
  {
    v2 = _time64(0); /*0x47dfdb*/
    srand(v2); /*0x47dfe1*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47dfe9*/
  }
  return a1 + (a2 - a1) * rand() / 0x7FFF; /*0x47e01b*/
}
