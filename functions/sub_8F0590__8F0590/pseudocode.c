_WORD *__thiscall sub_8F0590(_WORD *this, int a2, char a3)
{
  _WORD *result; // eax

  result = this;
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_A9B120;
  *((_DWORD *)this + 3) = a2;
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  *(_DWORD *)this = &off_A9B148;
  *((_BYTE *)this + 0x10) = a3;
  return result;
}
