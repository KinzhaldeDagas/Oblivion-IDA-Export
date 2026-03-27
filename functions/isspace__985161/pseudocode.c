int __cdecl isspace(int C)
{
  if ( dword_BA9E10 )
    return _isspace_l(C, 0);
  else
    return off_B31988[C] & 8;
}
