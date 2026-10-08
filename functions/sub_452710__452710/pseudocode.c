int __thiscall sub_452710(_DWORD *this, int a2, int a3)
{
  int v4; // ebp
  int *v5; // edi
  _DWORD *v6; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x452722*/
  v5 = *(int **)(*(this + 2) + 4 * v4); /*0x452727*/
  if ( v5 ) /*0x45272c*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))( /*0x452741*/
               this,
               a2,
               *((unsigned __int8 *)v5 + 4)) )
    {
      v5 = (int *)*v5; /*0x452743*/
      if ( !v5 ) /*0x452747*/
        goto LABEL_4; /*0x452747*/
    }
    (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x10))(this, v5); /*0x452785*/
    return (*(int (__thiscall **)(_DWORD *, int *, int, int))(*this + 0xC))(this, v5, a2, a3); /*0x452795*/
  }
  else
  {
LABEL_4:
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this); /*0x452749*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int))(*this + 0xC))(this, v6, a2, a3); /*0x452762*/
    result = *(this + 2); /*0x452764*/
    *v6 = *(_DWORD *)(result + 4 * v4); /*0x45276a*/
    *(_DWORD *)(*(this + 2) + 4 * v4) = v6; /*0x45276f*/
    ++*(this + 3); /*0x452772*/
  }
  return result; /*0x452776*/
}
