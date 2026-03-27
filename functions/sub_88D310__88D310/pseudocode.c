_WORD *__thiscall sub_88D310(_WORD *this, int a2, int a3)
{
  _WORD *result; // eax

  result = this;
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A96248;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  return result;
}
