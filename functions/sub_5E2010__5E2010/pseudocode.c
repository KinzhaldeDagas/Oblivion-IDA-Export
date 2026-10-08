int __thiscall sub_5E2010(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // eax

  result = ((int (__thiscall *)(_DWORD **))(*this)[0xE0])(this); /*0x5e201b*/
  if ( result ) /*0x5e201f*/
  {
    result = ((int (__thiscall *)(_DWORD **))(*this)[0x63])(this); /*0x5e202b*/
    if ( result == 4 ) /*0x5e2030*/
    {
      v4 = ((int (__thiscall *)(_DWORD **))(*this)[0xE0])(this); /*0x5e203c*/
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v4 + 0x58) + 0xC4))(*(_DWORD *)(v4 + 0x58), 1); /*0x5e204b*/
    }
  }
  if ( *(this + 0x16) ) /*0x5e204d*/
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0xC4))(*(this + 0x16), a2); /*0x5e205f*/
  return result; /*0x5e2061*/
}
