int __thiscall sub_533CE0(_DWORD **this)
{
  if ( *(this + 2) ) /*0x533ce0*/
    return (*(int (__thiscall **)(_DWORD))(**(this + 2) + 0x1C))(*(this + 2)); /*0x533cee*/
  else
    return 0xFFFFFFFF; /*0x533cf0*/
}
