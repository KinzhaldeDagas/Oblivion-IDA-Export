int __cdecl isspace(int C)
{
  if ( dword_BA9E10[0] ) /*0x985161*/
    return _isspace_l(C, 0); /*0x985182*/
  else
    return off_B31988[C] & 8; /*0x985178*/
}
