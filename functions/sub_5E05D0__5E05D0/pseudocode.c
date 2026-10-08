int __thiscall sub_5E05D0(_DWORD **this)
{
  int result; // eax

  if ( *(this + 0x16) ) /*0x5e05d0*/
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 0x16) + 0x2C8))(*(this + 0x16), 0); /*0x5e05e3*/
  return result; /*0x5e05e5*/
}
