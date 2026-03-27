void __thiscall sub_5EA320(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 0x7D) |= 0x100000u;
  else
    *(this + 0x7D) &= ~0x100000u;
}
