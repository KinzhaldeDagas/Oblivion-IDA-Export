int __thiscall Actor_GetCurrentAction(_DWORD **this)
{
  if ( *(this + 0x16) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x2D0))(*(this + 0x16));
  else
    return 0xFFFFFFFF;
}
