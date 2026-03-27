double __cdecl Rand4(float a1, float a2)
{
  unsigned int v2; // eax

  if ( byte_B069C3 )
  {
    v2 = _time64(0);
    srand(v2);
    byte_B069C3 = 0;
  }
  return (float)(a1 + (a2 - a1) * (double)rand() / dbl_A3D5A8);
}
