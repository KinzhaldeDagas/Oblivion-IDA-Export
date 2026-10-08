BOOL __cdecl Rand8(float a1)
{
  unsigned int v1; // eax
  float v3; // [esp+0h] [ebp-4h]

  if ( g_gameCRTRandomNeedsSeed ) /*0x47fb71*/
  {
    v1 = _time64(0); /*0x47fb7c*/
    srand(v1); /*0x47fb82*/
    g_gameCRTRandomNeedsSeed = 0; /*0x47fb8a*/
  }
  v3 = (1.0 - 0.0) * (double)rand() / dbl_A3D5A8 + 0.0; /*0x47fbae*/
  return a1 >= (double)v3; /*0x47fbc7*/
}
