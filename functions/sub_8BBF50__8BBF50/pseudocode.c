_WORD *__thiscall sub_8BBF50(_WORD *this, int a2)
{
  _WORD *result; // eax

  result = this; /*0x8bbf50*/
  *(this + 3) = 1; /*0x8bbf56*/
  *(_DWORD *)this = &off_A98328; /*0x8bbf5c*/
  *((_DWORD *)this + 2) = a2; /*0x8bbf62*/
  if ( *(_WORD *)(a2 + 4) ) /*0x8bbf65*/
    ++*(_WORD *)(a2 + 6); /*0x8bbf6c*/
  return result; /*0x8bbf70*/
}
