void __cdecl srand(unsigned int Seed)
{
  *(_DWORD *)(_getptd() + 0x14) = Seed;
}
