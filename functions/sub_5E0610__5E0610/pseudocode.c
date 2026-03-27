int __thiscall sub_5E0610(_DWORD **this, int a2)
{
  int result; // eax

  if ( *(this + 0x16) )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(this + 0x16) + 0x2C4))(*(this + 0x16), a2, 1);
  return result;
}
