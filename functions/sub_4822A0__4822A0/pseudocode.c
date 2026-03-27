int __thiscall sub_4822A0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  _DWORD *v9; // eax
  int result; // eax

  v6 = *(this + 3);
  v7 = *(this + 4);
  v8 = *(_DWORD *)(v7 + 8 * (a3 + a2 * v6));
  v9 = (_DWORD *)(v7 + 8 * (a5 + a4 * v6));
  if ( v9 )
    *(_DWORD *)(*(this + 4) + 8 * (a3 + a2 * *(this + 3))) = *v9;
  else
    (*(void (__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a2, a3);
  result = a5 + a4 * *(this + 3);
  *(_DWORD *)(*(this + 4) + 8 * result) = v8;
  return result;
}
