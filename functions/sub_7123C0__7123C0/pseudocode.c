char __thiscall sub_7123C0(_DWORD *this, int a2, _WORD *a3)
{
  int *v4; // edi

  v4 = *(int **)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2)); /*0x7123d4*/
  if ( !v4 ) /*0x7123d9*/
    return 0; /*0x7123f8*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, a2, v4[1]) ) /*0x7123f0*/
  {
    v4 = (int *)*v4; /*0x7123f2*/
    if ( !v4 ) /*0x7123f6*/
      return 0; /*0x7123f6*/
  }
  *a3 = *((_WORD *)v4 + 4); /*0x71240a*/
  return 1; /*0x7123f8*/
}
