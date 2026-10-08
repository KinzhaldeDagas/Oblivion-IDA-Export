int __thiscall Actor_SetAlerted(_DWORD **this, int a2)
{
  int result; // eax

  if ( *(this + 0x16) ) /*0x5e0e10*/
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0x214))(*(this + 0x16), a2); /*0x5e0e21*/
  return result; /*0x5e0e23*/
}
