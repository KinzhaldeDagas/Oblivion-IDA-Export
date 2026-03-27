char __thiscall sub_4708B0(_DWORD *this, int a2)
{
  int v3; // ebx
  int **v4; // edi
  _DWORD *v6; // ebx
  int *v7; // edi

  v3 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2);
  v4 = *(int ***)(*(this + 2) + 4 * v3);
  if ( !v4 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, *((unsigned __int16 *)v4 + 2)) )
  {
    *(_DWORD *)(*(this + 2) + 4 * v3) = *v4;
    (*(void (__thiscall **)(_DWORD *, int **))(*this + 0x10))(this, v4);
    (*(void (__thiscall **)(_DWORD *, int **))(*this + 0x18))(this, v4);
    --*(this + 3);
    return 1;
  }
  v6 = v4;
  v7 = *v4;
  if ( !v7 )
    return 0;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(
             this,
             a2,
             *((unsigned __int16 *)v7 + 2)) )
  {
    v6 = v7;
    v7 = (int *)*v7;
    if ( !v7 )
      return 0;
  }
  *v6 = *v7;
  (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x10))(this, v7);
  (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x18))(this, v7);
  --*(this + 3);
  return 1;
}
