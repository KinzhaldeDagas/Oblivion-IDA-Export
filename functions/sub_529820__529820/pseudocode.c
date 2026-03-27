int __thiscall sub_529820(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x3C) |= 1u;
  else
    *(this + 0x3C) &= ~1u;
  return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x40))(this, 4);
}
