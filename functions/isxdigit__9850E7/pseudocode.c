int __cdecl isxdigit(int C)
{
  if ( dword_BA9E10[0] ) /*0x9850e7*/
    return _isxdigit_l(C, 0); /*0x98510a*/
  else
    return off_B31988[C] & 0x80; /*0x9850fe*/
}
