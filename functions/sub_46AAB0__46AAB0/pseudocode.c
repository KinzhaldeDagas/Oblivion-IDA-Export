int __thiscall sub_46AAB0(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 2) |= 0x40u;
  else
    *(this + 2) &= ~0x40u;
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 1);
}
