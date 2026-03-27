_DWORD *__thiscall sub_8F0C10(_WORD *this, int a2, int a3)
{
  sub_9156C0(this);
  *(_DWORD *)this = &off_A9B198;
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  return this;
}
