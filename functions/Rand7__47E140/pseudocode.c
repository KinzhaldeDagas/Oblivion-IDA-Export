double Rand7()
{
  unsigned int v0; // eax
  int v1; // eax

  if ( g_gameCRTRandomNeedsSeed ) /*0x47e141*/
  {
    v0 = _time64(0); /*0x47e14c*/
    srand(v0); /*0x47e152*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47e15a*/
  }
  v1 = rand(); /*0x47e161*/
  return (float)(((double)v1 + (double)v1) / dbl_A3D5A8 - dbl_A2F928); /*0x47e181*/
}
