int __thiscall sub_5E02B0(_DWORD **this)
{
  int result; // eax

  if ( *(this + 0x16) ) /*0x5e02b0*/
    return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 0x16) + 0x194))(*(this + 0x16), this); /*0x5e02c4*/
  return result; /*0x5e02c6*/
}
