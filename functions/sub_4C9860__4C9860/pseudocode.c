int __thiscall sub_4C9860(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x24) |= 0x40u;
  else
    *(this + 0x24) &= ~0x40u;
  return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x40))(this, 8);
}
