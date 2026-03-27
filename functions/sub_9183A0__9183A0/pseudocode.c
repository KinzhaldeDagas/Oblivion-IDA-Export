_WORD *__thiscall sub_9183A0(_WORD *this, int a2, char a3)
{
  _WORD *result; // eax

  result = this;
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A9D1B8;
  *((_DWORD *)this + 2) = a2;
  *((_BYTE *)this + 0xC) = a3;
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  return result;
}
