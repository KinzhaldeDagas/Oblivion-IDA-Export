int __thiscall sub_659A40(_DWORD **this, int a2)
{
  int result; // eax

  if ( *(this + 0x16) ) /*0x659a40*/
    return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 0x16) + 0x10))(*(this + 0x16), this); /*0x659a54*/
  return result; /*0x659a56*/
}
