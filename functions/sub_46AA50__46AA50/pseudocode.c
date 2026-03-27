int __thiscall sub_46AA50(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 2) |= 0x2000u;
  else
    *(this + 2) &= ~0x2000u;
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 1);
}
