int __thiscall sub_470820(_DWORD *this, int a2, int a3)
{
  int v4; // ebp
  int *v5; // edi
  _DWORD *v6; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2);
  v5 = *(int **)(*(this + 2) + 4 * v4);
  if ( v5 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(
               this,
               a2,
               *((unsigned __int16 *)v5 + 2)) )
    {
      v5 = (int *)*v5;
      if ( !v5 )
        goto LABEL_4;
    }
    (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x10))(this, v5);
    return (*(int (__thiscall **)(_DWORD *, int *, int, int))(*this + 0xC))(this, v5, a2, a3);
  }
  else
  {
LABEL_4:
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this);
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int))(*this + 0xC))(this, v6, a2, a3);
    result = *(this + 2);
    *v6 = *(_DWORD *)(result + 4 * v4);
    *(_DWORD *)(*(this + 2) + 4 * v4) = v6;
    ++*(this + 3);
  }
  return result;
}
