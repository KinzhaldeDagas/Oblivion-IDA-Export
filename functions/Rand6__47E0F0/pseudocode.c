double Rand6()
{
  unsigned int v0; // eax

  if ( byte_B069C3 )
  {
    v0 = _time64(0);
    srand(v0);
    byte_B069C3 = 0;
  }
  return (float)((1.0 - 0.0) * (double)rand() / dbl_A3D5A8 + 0.0);
}
