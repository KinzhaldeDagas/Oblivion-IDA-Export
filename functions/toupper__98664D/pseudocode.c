int __cdecl toupper(int C)
{
  int result; // eax

  if ( dword_BA9E10[0] ) /*0x98664d*/
    return _toupper_l(C, 0); /*0x98666c*/
  result = C; /*0x986656*/
  if ( (unsigned int)(C - 0x61) <= 0x19 ) /*0x986660*/
    return C - 0x20; /*0x986662*/
  return result; /*0x986665*/
}
