double Rand7()
{
  unsigned int v0; // eax
  int v1; // eax

  if ( byte_B069C3 )
  {
    v0 = _time64(0);
    srand(v0);
    byte_B069C3 = 0;
  }
  v1 = rand();
  return (float)(((double)v1 + (double)v1) / dbl_A3D5A8 - dbl_A2F928);
}
