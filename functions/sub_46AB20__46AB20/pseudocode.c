void __thiscall sub_46AB20(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 2) |= 0x100000u;
  else
    *(this + 2) &= ~0x100000u;
}
