int __cdecl isdigit(int C)
{
  if ( dword_BA9E10 )
    return _isdigit_l(C, 0);
  else
    return off_B31988[C] & 4;
}
