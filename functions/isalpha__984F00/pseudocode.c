int __cdecl isalpha(int C)
{
  if ( dword_BA9E10[0] ) /*0x984f00*/
    return _isalpha_l(C, 0); /*0x984f23*/
  else
    return off_B31988[C] & 0x103; /*0x984f17*/
}
