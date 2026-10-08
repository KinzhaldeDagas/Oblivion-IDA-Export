unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_B310A8; /*0x98bd62*/
  dword_B310A8 = Mask & Flags | dword_B310A8 & ~Mask; /*0x98bd75*/
  return result; /*0x98bd7b*/
}
