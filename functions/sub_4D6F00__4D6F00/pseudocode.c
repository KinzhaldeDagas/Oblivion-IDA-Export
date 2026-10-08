unsigned int __thiscall sub_4D6F00(_DWORD *this, char a2)
{
  int v2; // eax
  unsigned int result; // eax

  v2 = *(this + 2); /*0x4d6f05*/
  if ( a2 ) /*0x4d6f08*/
    result = v2 | 0x100; /*0x4d6f0a*/
  else
    result = v2 & 0xFFFFFEFF; /*0x4d6f15*/
  *(this + 2) = result; /*0x4d6f0f*/
  return result; /*0x4d6f12*/
}
