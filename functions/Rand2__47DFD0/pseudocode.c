int __cdecl Rand2(int a1, int a2)
{
  unsigned int v2; // eax

  if ( byte_B069C3 )
  {
    v2 = _time64(0);
    srand(v2);
    byte_B069C3 = 0;
  }
  return a1 + (a2 - a1) * rand() / 0x7FFF;
}
