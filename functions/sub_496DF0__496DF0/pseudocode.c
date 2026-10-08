char __thiscall sub_496DF0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // esi

  v4 = *(_DWORD **)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2)); /*0x496e04*/
  if ( !v4 ) /*0x496e09*/
    return 0; /*0x496e28*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v4[1]) ) /*0x496e20*/
  {
    v4 = (_DWORD *)*v4; /*0x496e22*/
    if ( !v4 ) /*0x496e26*/
      return 0; /*0x496e26*/
  }
  *a3 = v4[2]; /*0x496e37*/
  a3[1] = v4[3]; /*0x496e3e*/
  return 1; /*0x496e28*/
}
