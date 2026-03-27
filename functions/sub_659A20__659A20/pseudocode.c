int __thiscall sub_659A20(_DWORD **this)
{
  int result; // eax

  if ( *(this + 0x16) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x20))(*(this + 0x16));
  return result;
}
