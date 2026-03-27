int __thiscall sub_533CE0(_DWORD **this)
{
  if ( *(this + 2) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 2) + 0x1C))(*(this + 2));
  else
    return 0xFFFFFFFF;
}
