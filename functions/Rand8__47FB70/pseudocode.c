BOOL __cdecl Rand8(float a1)
{
  unsigned int v1; // eax
  float v3; // [esp+0h] [ebp-4h]

  if ( byte_B069C3 )
  {
    v1 = _time64(0);
    srand(v1);
    byte_B069C3 = 0;
  }
  v3 = (1.0 - 0.0) * (double)rand() / dbl_A3D5A8 + 0.0;
  return a1 >= (double)v3;
}
