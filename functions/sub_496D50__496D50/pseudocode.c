int __thiscall sub_496D50(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // ebp
  _DWORD *v6; // edi
  _DWORD *v7; // edi
  int result; // eax

  v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x496d62*/
  v6 = *(_DWORD **)(*(this + 2) + 4 * v5); /*0x496d67*/
  if ( v6 ) /*0x496d6c*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v6[1]) ) /*0x496d80*/
    {
      v6 = (_DWORD *)*v6; /*0x496d82*/
      if ( !v6 ) /*0x496d86*/
        goto LABEL_4; /*0x496d86*/
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v6); /*0x496dc9*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, int))(*this + 0xC))(this, v6, a2, a3, a4); /*0x496dde*/
  }
  else
  {
LABEL_4:
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this); /*0x496d88*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int, int))(*this + 0xC))(this, v7, a2, a3, a4); /*0x496da6*/
    result = *(this + 2); /*0x496da8*/
    *v7 = *(_DWORD *)(result + 4 * v5); /*0x496dae*/
    *(_DWORD *)(*(this + 2) + 4 * v5) = v7; /*0x496db3*/
    ++*(this + 3); /*0x496db6*/
  }
  return result; /*0x496dba*/
}
