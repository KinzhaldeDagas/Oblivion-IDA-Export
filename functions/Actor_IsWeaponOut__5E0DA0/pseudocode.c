char __thiscall Actor_IsWeaponOut(_DWORD **this)
{
  if ( *(this + 0x16) )
    return (*(char (__thiscall **)(_DWORD))(**(this + 0x16) + 0x304))(*(this + 0x16));
  else
    return 0;
}
