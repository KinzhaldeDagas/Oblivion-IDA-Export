void __thiscall sub_60E470(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 7) |= 0x1000u;
  else
    *(this + 7) &= ~0x1000u;
}
