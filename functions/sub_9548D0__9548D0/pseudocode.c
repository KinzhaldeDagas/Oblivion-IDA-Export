int __thiscall sub_9548D0(_DWORD **this, char a2, signed int a3)
{
  if ( a3 < 0 )
    return sub_9567C0(*(this + 4), a2 + 0x68, a3);
  if ( a3 < 0x100 )
    return sub_956580(*(this + 4), a2 + 0x60, a3);
  if ( a3 >= 0x10000 )
    return sub_9567C0(*(this + 4), a2 + 0x68, a3);
  else
    return sub_9565E0(*(this + 4), a2 + 0x64, a3);
}
