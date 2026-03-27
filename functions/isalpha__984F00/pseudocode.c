int __cdecl isalpha(int C)
{
  if ( dword_BA9E10 )
    return _isalpha_l(C, 0);
  else
    return off_B31988[C] & 0x103;
}
