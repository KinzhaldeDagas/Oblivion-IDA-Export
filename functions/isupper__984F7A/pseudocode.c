int __cdecl isupper(int C)
{
  if ( dword_BA9E10[0] ) /*0x984f7a*/
    return _isupper_l(C, 0); /*0x984f9b*/
  else
    return off_B31988[C] & 1; /*0x984f91*/
}
