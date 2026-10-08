int __cdecl isalnum(int C)
{
  if ( dword_BA9E10[0] ) /*0x9851de*/
    return _isalnum_l(C, 0); /*0x985201*/
  else
    return off_B31988[C] & 0x107; /*0x9851f5*/
}
