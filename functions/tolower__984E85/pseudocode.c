int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_BA9E10[0] ) /*0x984e85*/
    return _tolower_l(C, 0); /*0x984ea4*/
  result = C; /*0x984e8e*/
  if ( (unsigned int)(C - 0x41) <= 0x19 ) /*0x984e98*/
    return C + 0x20; /*0x984e9a*/
  return result; /*0x984e9d*/
}
