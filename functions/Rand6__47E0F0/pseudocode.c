double Rand6()
{
  unsigned int v0; // eax

  if ( g_gameCRTRandomNeedsSeed ) /*0x47e0f1*/
  {
    v0 = _time64(0); /*0x47e0fc*/
    srand(v0); /*0x47e102*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47e10a*/
  }
  return (float)((1.0 - 0.0) * (double)rand() / dbl_A3D5A8 + 0.0); /*0x47e135*/
}
