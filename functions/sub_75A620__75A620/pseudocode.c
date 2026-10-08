_DWORD **__thiscall sub_75A620(_DWORD *this, _DWORD **a2)
{
  _DWORD **result; // eax
  int v4; // ecx

  result = sub_752D80(this, a2); /*0x75a629*/
  v4 = *(this + 6); /*0x75a62e*/
  if ( v4 ) /*0x75a633*/
    return (*(_DWORD **(__thiscall **)(int, _DWORD **))(*(_DWORD *)v4 + 0x38))(v4, a2); /*0x75a63b*/
  return result; /*0x75a63d*/
}
