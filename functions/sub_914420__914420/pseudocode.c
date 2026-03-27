_WORD *__thiscall sub_914420(_WORD *this, int a2, int a3)
{
  _WORD *result; // eax

  result = this;
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_A9B120;
  *((_DWORD *)this + 3) = a2;
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  *(_DWORD *)this = &off_A9CE84;
  *((_DWORD *)this + 4) = a3;
  if ( *(_WORD *)(a3 + 4) )
    ++*(_WORD *)(a3 + 6);
  return result;
}
