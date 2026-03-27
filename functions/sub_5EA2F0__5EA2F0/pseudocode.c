void __thiscall sub_5EA2F0(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 0x7D) |= 0x40000u;
  else
    *(this + 0x7D) &= ~0x40000u;
}
