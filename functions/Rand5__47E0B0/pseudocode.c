double __cdecl Rand5(float a1)
{
  unsigned int v1; // eax

  if ( byte_B069C3 )
  {
    v1 = _time64(0);
    srand(v1);
    byte_B069C3 = 0;
  }
  return (float)((double)rand() * a1 / dbl_A3D5A8);
}
