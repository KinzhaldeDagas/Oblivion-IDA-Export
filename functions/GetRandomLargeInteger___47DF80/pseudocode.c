int __cdecl GetRandomLargeInteger_(unsigned int Seed)
{
  unsigned int v1; // eax

  if ( Seed )
  {
    srand(Seed);
    byte_B069C3 = 0;
  }
  else if ( byte_B069C3 )
  {
    v1 = _time64(0);
    srand(v1);
    byte_B069C3 = 0;
  }
  return rand();
}
