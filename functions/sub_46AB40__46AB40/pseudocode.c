void __thiscall sub_46AB40(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 2) |= 0x80000u;
  else
    *(this + 2) &= ~0x80000u;
}
