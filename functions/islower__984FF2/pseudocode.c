int __cdecl islower(int C)
{
  if ( dword_BA9E10 )
    return _islower_l(C, 0);
  else
    return off_B31988[C] & 2;
}
