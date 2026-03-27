void __thiscall sub_46AB00(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 2) |= 0x20000u;
  else
    *(this + 2) &= ~0x20000u;
}
