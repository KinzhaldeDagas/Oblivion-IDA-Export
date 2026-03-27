int __thiscall sub_496D50(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // ebp
  _DWORD *v6; // edi
  _DWORD *v7; // edi
  int result; // eax

  v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2);
  v6 = *(_DWORD **)(*(this + 2) + 4 * v5);
  if ( v6 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v6[1]) )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        goto LABEL_4;
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v6);
    return (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, int))(*this + 0xC))(this, v6, a2, a3, a4);
  }
  else
  {
LABEL_4:
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this);
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int, int))(*this + 0xC))(this, v7, a2, a3, a4);
    result = *(this + 2);
    *v7 = *(_DWORD *)(result + 4 * v5);
    *(_DWORD *)(*(this + 2) + 4 * v5) = v7;
    ++*(this + 3);
  }
  return result;
}
