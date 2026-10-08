// Engine RNG upper-bound helper: returns max*rand()/0x7FFF after lazy time seed.
int __cdecl Game_RandomIntBelow(int a1)
{
  unsigned int v1; // eax

  if ( g_gameCRTRandomNeedsSeed ) /*0x47e020*/
  {
    v1 = _time64(0); /*0x47e02b*/
    srand(v1); /*0x47e031*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47e039*/
  }
  return a1 * rand() / 0x7FFF; /*0x47e05f*/
}
