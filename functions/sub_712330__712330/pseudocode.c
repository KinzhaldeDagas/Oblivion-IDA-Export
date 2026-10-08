__int16 __thiscall sub_712330(_DWORD *this, int a2, int a3)
{
  int v4; // ebp
  int *v5; // edi
  _DWORD *v6; // edi
  int v7; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x712342*/
  v5 = *(int **)(*(this + 2) + 4 * v4); /*0x712347*/
  if ( v5 ) /*0x71234c*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, a2, v5[1]) ) /*0x712360*/
    {
      v5 = (int *)*v5; /*0x712362*/
      if ( !v5 ) /*0x712366*/
        goto LABEL_4; /*0x712366*/
    }
    if ( !*((_BYTE *)this + 0x10) ) /*0x71239c*/
      v5[1] = a2; /*0x7123a2*/
    *((_WORD *)v5 + 4) = a3; /*0x7123aa*/
    LOWORD(v7) = a3; /*0x7123a5*/
  }
  else
  {
LABEL_4:
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this); /*0x712368*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int))(*this + 0xC))(this, v6, a2, a3); /*0x712381*/
    v7 = *(this + 2); /*0x712383*/
    *v6 = *(_DWORD *)(v7 + 4 * v4); /*0x712389*/
    *(_DWORD *)(*(this + 2) + 4 * v4) = v6; /*0x71238e*/
    ++*(this + 3); /*0x712391*/
  }
  return v7; /*0x712395*/
}
