char __thiscall NiTMap_GetAt(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi

  v4 = *(_DWORD **)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2)); /*0x55e014*/
  if ( !v4 ) /*0x55e019*/
    return 0; /*0x55e038*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v4[1]) ) /*0x55e030*/
  {
    v4 = (_DWORD *)*v4; /*0x55e032*/
    if ( !v4 ) /*0x55e036*/
      return 0; /*0x55e036*/
  }
  *a3 = v4[2]; /*0x55e049*/
  return 1; /*0x55e038*/
}
