int __thiscall Quest_CompleteQuest(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x3C) |= 2u;
  else
    *(this + 0x3C) &= ~2u;
  return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x40))(this, 4);
}
