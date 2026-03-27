int __thiscall sub_5E0270(_DWORD **this, int a2)
{
  int result; // eax

  if ( *(this + 0x16) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0xBC))(*(this + 0x16), a2);
    (*(void (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0x68))(*(this + 0x16), 1);
    return (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x350))(*(this + 0x16));
  }
  return result;
}
