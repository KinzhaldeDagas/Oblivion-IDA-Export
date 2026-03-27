int __thiscall sub_5E03C0(_DWORD **this, int a2)
{
  int result; // eax

  if ( *(this + 0x16) )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0xD0))(*(this + 0x16), a2);
  return result;
}
