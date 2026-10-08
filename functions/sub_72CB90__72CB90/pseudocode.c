int __thiscall sub_72CB90(_DWORD *this, int a2, float a3)
{
  int v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x72cba2*/
  v5 = *(_DWORD **)(*(this + 2) + 4 * v4); /*0x72cba7*/
  if ( v5 ) /*0x72cbac*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v5[1]) ) /*0x72cbc0*/
    {
      v5 = (_DWORD *)*v5; /*0x72cbc2*/
      if ( !v5 ) /*0x72cbc6*/
        goto LABEL_4; /*0x72cbc6*/
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v5); /*0x72cc07*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*this + 0xC))(this, v5, a2, LODWORD(a3)); /*0x72cc1a*/
  }
  else
  {
LABEL_4:
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this); /*0x72cbc8*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*this + 0xC))(this, v6, a2, LODWORD(a3)); /*0x72cbe4*/
    result = *(this + 2); /*0x72cbe6*/
    *v6 = *(_DWORD *)(result + 4 * v4); /*0x72cbec*/
    *(_DWORD *)(*(this + 2) + 4 * v4) = v6; /*0x72cbf1*/
    ++*(this + 3); /*0x72cbf4*/
  }
  return result; /*0x72cbf8*/
}
