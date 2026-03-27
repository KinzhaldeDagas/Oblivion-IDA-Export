int __thiscall sub_5E2010(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // eax

  result = ((int (__thiscall *)(_DWORD **))(*this)[0xE0])(this);
  if ( result )
  {
    result = ((int (__thiscall *)(_DWORD **))(*this)[0x63])(this);
    if ( result == 4 )
    {
      v4 = ((int (__thiscall *)(_DWORD **))(*this)[0xE0])(this);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v4 + 0x58) + 0xC4))(*(_DWORD *)(v4 + 0x58), 1);
    }
  }
  if ( *(this + 0x16) )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0xC4))(*(this + 0x16), a2);
  return result;
}
