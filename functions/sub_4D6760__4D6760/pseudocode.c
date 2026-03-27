char __thiscall sub_4D6760(_DWORD *this, int a2, _BYTE *a3)
{
  int *v4; // edi

  v4 = *(int **)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2));
  if ( !v4 )
    return 0;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, a2, v4[1]) )
  {
    v4 = (int *)*v4;
    if ( !v4 )
      return 0;
  }
  *a3 = *((_BYTE *)v4 + 8);
  return 1;
}
