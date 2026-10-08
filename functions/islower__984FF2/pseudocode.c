int __cdecl islower(int C)
{
  if ( dword_BA9E10[0] ) /*0x984ff2*/
    return _islower_l(C, 0); /*0x985013*/
  else
    return off_B31988[C] & 2; /*0x985009*/
}
