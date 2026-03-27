_WORD *__thiscall sub_704130(_WORD *this, int a2, __int16 a3, char a4, char a5, int a6)
{
  __int16 v7; // dx

  *(_DWORD *)this = &NiTexturingProperty::Map::`vftable';
  *(this + 2) = 0;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  LOBYTE(v7) = 0;
  HIBYTE(v7) = a5 | (0x10 * a4);
  *((_DWORD *)this + 3) = a6;
  *(this + 2) = a3 | *(this + 2) & 0xC000 | v7 & 0xFF00;
  return this;
}
