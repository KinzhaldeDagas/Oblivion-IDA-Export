_WORD *__thiscall sub_914420(_WORD *this, int a2, int a3)
{
  _WORD *result; // eax

  result = this; /*0x914420*/
  *(this + 3) = 1; /*0x914426*/
  *((_DWORD *)this + 2) = 0; /*0x91442c*/
  *(_DWORD *)this = &off_A9B120; /*0x914433*/
  *((_DWORD *)this + 3) = a2; /*0x914439*/
  if ( *(_WORD *)(a2 + 4) ) /*0x91443c*/
    ++*(_WORD *)(a2 + 6); /*0x914443*/
  *(_DWORD *)this = &off_A9CE84; /*0x91444b*/
  *((_DWORD *)this + 4) = a3; /*0x914451*/
  if ( *(_WORD *)(a3 + 4) ) /*0x914454*/
    ++*(_WORD *)(a3 + 6); /*0x91445b*/
  return result; /*0x91445f*/
}
