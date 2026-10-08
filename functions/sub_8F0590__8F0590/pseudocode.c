_WORD *__thiscall sub_8F0590(_WORD *this, int a2, char a3)
{
  _WORD *result; // eax

  result = this; /*0x8f0590*/
  *(this + 3) = 1; /*0x8f0596*/
  *((_DWORD *)this + 2) = 0; /*0x8f059c*/
  *(_DWORD *)this = &off_A9B120; /*0x8f05a3*/
  *((_DWORD *)this + 3) = a2; /*0x8f05a9*/
  if ( *(_WORD *)(a2 + 4) ) /*0x8f05ac*/
    ++*(_WORD *)(a2 + 6); /*0x8f05b3*/
  *(_DWORD *)this = &off_A9B148; /*0x8f05bb*/
  *((_BYTE *)this + 0x10) = a3; /*0x8f05c1*/
  return result; /*0x8f05c4*/
}
