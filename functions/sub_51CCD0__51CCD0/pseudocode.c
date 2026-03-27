int __thiscall sub_51CCD0(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 1) |= 0x1000u;
  else
    *(this + 1) &= ~0x1000u;
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x50))(this, 0x10);
}
