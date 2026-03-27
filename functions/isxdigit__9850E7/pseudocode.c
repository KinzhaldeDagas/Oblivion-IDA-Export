int __cdecl isxdigit(int C)
{
  if ( dword_BA9E10 )
    return _isxdigit_l(C, 0);
  else
    return off_B31988[C] & 0x80;
}
