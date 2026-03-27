void __thiscall sub_46A9C0(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 2) |= 0x10u;
  else
    *(this + 2) &= ~0x10u;
}
