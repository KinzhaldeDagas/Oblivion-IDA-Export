int __cdecl toupper(int C)
{
  int result; // eax

  if ( dword_BA9E10 )
    return _toupper_l(C, 0);
  result = C;
  if ( (unsigned int)(C - 0x61) <= 0x19 )
    return C - 0x20;
  return result;
}
