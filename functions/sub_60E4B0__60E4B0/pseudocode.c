void __thiscall sub_60E4B0(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 7) |= 0x200000u;
  else
    *(this + 7) &= ~0x200000u;
}
