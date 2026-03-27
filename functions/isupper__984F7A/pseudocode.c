int __cdecl isupper(int C)
{
  if ( dword_BA9E10 )
    return _isupper_l(C, 0);
  else
    return off_B31988[C] & 1;
}
