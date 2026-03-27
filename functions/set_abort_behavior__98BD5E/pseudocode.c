unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_B310A8;
  dword_B310A8 = Mask & Flags | dword_B310A8 & ~Mask;
  return result;
}
