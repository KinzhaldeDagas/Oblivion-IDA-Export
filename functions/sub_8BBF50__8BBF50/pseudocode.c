_WORD *__thiscall sub_8BBF50(_WORD *this, int a2)
{
  _WORD *result; // eax

  result = this;
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A98328;
  *((_DWORD *)this + 2) = a2;
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  return result;
}
