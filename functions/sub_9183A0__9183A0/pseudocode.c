_WORD *__thiscall sub_9183A0(_WORD *this, int a2, char a3)
{
  _WORD *result; // eax

  result = this; /*0x9183a4*/
  *(this + 3) = 1; /*0x9183aa*/
  *(_DWORD *)this = &off_A9D1B8; /*0x9183b0*/
  *((_DWORD *)this + 2) = a2; /*0x9183b6*/
  *((_BYTE *)this + 0xC) = a3; /*0x9183b9*/
  if ( *(_WORD *)(a2 + 4) ) /*0x9183bc*/
    ++*(_WORD *)(a2 + 6); /*0x9183c3*/
  return result; /*0x9183c7*/
}
