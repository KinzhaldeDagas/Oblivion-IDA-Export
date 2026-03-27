void __thiscall sub_60E4D0(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 7) |= 0x100000u;
  else
    *(this + 7) &= ~0x100000u;
}
