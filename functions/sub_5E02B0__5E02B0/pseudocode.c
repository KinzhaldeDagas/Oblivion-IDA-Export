int __thiscall sub_5E02B0(_DWORD **this)
{
  int result; // eax

  if ( *(this + 0x16) )
    return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 0x16) + 0x194))(*(this + 0x16), this);
  return result;
}
