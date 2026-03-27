int __thiscall sub_4C9840(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x24) |= 0x20u;
  else
    *(this + 0x24) &= ~0x20u;
  return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x40))(this, 8);
}
