int __thiscall sub_47DAD0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // ebp
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int result; // eax

  v6 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2);
  v7 = *(_DWORD **)(*(this + 2) + 4 * v6);
  if ( v7 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v7[1]) )
    {
      v7 = (_DWORD *)*v7;
      if ( !v7 )
        goto LABEL_4;
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v7);
    return (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, int, int))(*this + 0xC))(this, v7, a2, a3, a4, a5);
  }
  else
  {
LABEL_4:
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this);
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int, int, int))(*this + 0xC))(this, v8, a2, a3, a4, a5);
    result = *(this + 2);
    *v8 = *(_DWORD *)(result + 4 * v6);
    *(_DWORD *)(*(this + 2) + 4 * v6) = v8;
    ++*(this + 3);
  }
  return result;
}
