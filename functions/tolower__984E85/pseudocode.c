int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_BA9E10 )
    return _tolower_l(C, 0);
  result = C;
  if ( (unsigned int)(C - 0x41) <= 0x19 )
    return C + 0x20;
  return result;
}
