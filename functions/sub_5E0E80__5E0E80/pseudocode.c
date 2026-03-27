char __thiscall sub_5E0E80(_DWORD **this)
{
  if ( *(this + 0x16) )
    return (*(char (__thiscall **)(_DWORD))(**(this + 0x16) + 0x388))(*(this + 0x16));
  else
    return 0;
}
