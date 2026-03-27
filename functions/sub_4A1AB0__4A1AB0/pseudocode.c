char __thiscall sub_4A1AB0(_DWORD *this, int a2, int *a3)
{
  _DWORD *v4; // edi

  v4 = *(_DWORD **)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2));
  if ( !v4 )
    return 0;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v4[1]) )
  {
    v4 = (_DWORD *)*v4;
    if ( !v4 )
      return 0;
  }
  sub_55E2A0(a3, v4 + 2);
  return 1;
}
