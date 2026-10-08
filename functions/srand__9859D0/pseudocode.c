void __cdecl srand(unsigned int Seed)
{
  _getptd()[5] = Seed; /*0x9859d9*/
}
