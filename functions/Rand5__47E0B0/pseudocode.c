double __cdecl Rand5(float a1)
{
  unsigned int v1; // eax

  if ( g_gameCRTRandomNeedsSeed ) /*0x47e0b1*/
  {
    v1 = _time64(0); /*0x47e0bc*/
    srand(v1); /*0x47e0c2*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47e0ca*/
  }
  return (float)((double)rand() * a1 / dbl_A3D5A8); /*0x47e0ef*/
}
