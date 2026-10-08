char __thiscall Actor_IsWeaponOut(_DWORD **this)
{
  if ( *(this + 0x16) ) /*0x5e0da0*/
    return (*(char (__thiscall **)(_DWORD))(**(this + 0x16) + 0x304))(*(this + 0x16)); /*0x5e0db1*/
  else
    return 0; /*0x5e0db3*/
}
