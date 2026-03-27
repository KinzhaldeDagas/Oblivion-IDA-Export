int __thiscall sub_482260(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  _DWORD *v6; // esi
  int result; // eax

  v5 = *(this + 4);
  v6 = (_DWORD *)(v5 + 8 * (a3 + a2 * *(this + 3)));
  if ( !v6 )
    return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a4, a5);
  result = a5 + a4 * *(this + 3);
  *(_DWORD *)(v5 + 8 * result) = *v6;
  return result;
}
