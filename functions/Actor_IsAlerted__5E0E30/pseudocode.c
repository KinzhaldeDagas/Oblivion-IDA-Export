char __thiscall Actor_IsAlerted(_DWORD **this)
{
  if ( *(this + 0x16) ) /*0x5e0e30*/
    return (*(char (__thiscall **)(_DWORD))(**(this + 0x16) + 0x210))(*(this + 0x16)); /*0x5e0e41*/
  else
    return 0; /*0x5e0e43*/
}
