_WORD *__thiscall sub_9479F0(_WORD *this, int a2, char a3)
{
  _WORD *result; // eax

  result = this; /*0x9479f4*/
  *(this + 3) = 1; /*0x9479fa*/
  *(_DWORD *)this = &off_A98328; /*0x947a00*/
  *((_DWORD *)this + 2) = a2; /*0x947a06*/
  *((_BYTE *)this + 0xC) = a3; /*0x947a09*/
  if ( *(_WORD *)(a2 + 4) ) /*0x947a0c*/
    ++*(_WORD *)(a2 + 6); /*0x947a13*/
  return result; /*0x947a17*/
}
