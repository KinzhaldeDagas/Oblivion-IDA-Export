int __cdecl Rand3(int a1)
{
  unsigned int v1; // eax

  if ( byte_B069C3 )
  {
    v1 = _time64(0);
    srand(v1);
    byte_B069C3 = 0;
  }
  return a1 * rand() / 0x7FFF;
}
