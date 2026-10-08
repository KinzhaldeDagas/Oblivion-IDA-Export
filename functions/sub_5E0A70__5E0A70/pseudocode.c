int __thiscall sub_5E0A70(_DWORD **this)
{
  int result; // eax

  if ( *(this + 0x16) ) /*0x5e0a70*/
    return (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x21C))(*(this + 0x16)); /*0x5e0a81*/
  return result; /*0x5e0a83*/
}
