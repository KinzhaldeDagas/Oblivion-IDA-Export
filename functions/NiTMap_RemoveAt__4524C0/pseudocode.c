char __thiscall NiTMap_RemoveAt(_DWORD *this, int a2)
{
  int v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v6; // ebx
  _DWORD *v7; // edi

  v3 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2);
  v4 = *(_DWORD **)(*(this + 2) + 4 * v3);
  if ( !v4 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v4[1]) )
  {
    *(_DWORD *)(*(this + 2) + 4 * v3) = *v4;
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v4);
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x18))(this, v4);
    --*(this + 3);
    return 1;
  }
  v6 = v4;
  v7 = (_DWORD *)*v4;
  if ( !v7 )
    return 0;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v7[1]) )
  {
    v6 = v7;
    v7 = (_DWORD *)*v7;
    if ( !v7 )
      return 0;
  }
  *v6 = *v7;
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v7);
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x18))(this, v7);
  --*(this + 3);
  return 1;
}
