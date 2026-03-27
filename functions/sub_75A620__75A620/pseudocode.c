_DWORD **__thiscall sub_75A620(_DWORD *this, _DWORD **a2)
{
  _DWORD **result; // eax
  int v4; // ecx

  result = sub_752D80(this, a2);
  v4 = *(this + 6);
  if ( v4 )
    return (_DWORD **)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v4 + 0x38))(v4, a2);
  return result;
}
