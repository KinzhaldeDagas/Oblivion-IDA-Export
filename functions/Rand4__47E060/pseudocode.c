double __cdecl Rand4(float a1, float a2)
{
  unsigned int v2; // eax

  if ( g_gameCRTRandomNeedsSeed ) /*0x47e061*/
  {
    v2 = _time64(0); /*0x47e06c*/
    srand(v2); /*0x47e072*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47e07a*/
  }
  return (float)(a1 + (a2 - a1) * (double)rand() / dbl_A3D5A8); /*0x47e0ad*/
}
