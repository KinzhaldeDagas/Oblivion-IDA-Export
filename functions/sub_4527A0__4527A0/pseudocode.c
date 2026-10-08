char __thiscall sub_4527A0(_DWORD *this, int a2, _DWORD *a3)
{
  int **v4; // edi

  v4 = *(int ***)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2)); /*0x4527b4*/
  if ( !v4 ) /*0x4527b9*/
    return 0; /*0x4527d9*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))( /*0x4527d1*/
             this,
             a2,
             *((unsigned __int8 *)v4 + 4)) )
  {
    v4 = (int **)*v4; /*0x4527d3*/
    if ( !v4 ) /*0x4527d7*/
      return 0; /*0x4527d7*/
  }
  *a3 = v4[2]; /*0x4527ea*/
  return 1; /*0x4527d9*/
}
