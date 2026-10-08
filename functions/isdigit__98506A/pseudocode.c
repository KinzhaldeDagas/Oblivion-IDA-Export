int __cdecl isdigit(int C)
{
  if ( dword_BA9E10[0] ) /*0x98506a*/
    return _isdigit_l(C, 0); /*0x98508b*/
  else
    return off_B31988[C] & 4; /*0x985081*/
}
