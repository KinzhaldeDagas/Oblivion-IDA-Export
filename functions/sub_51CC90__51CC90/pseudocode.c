int __thiscall sub_51CC90(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 1) |= 0x800u;
  else
    *(this + 1) &= ~0x800u;
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x50))(this, 0x10);
}
