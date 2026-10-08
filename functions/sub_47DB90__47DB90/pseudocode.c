// Lookup a VertexDist record by source vertex index and copy its three-field payload: primary target, secondary target, distance.
char __thiscall NiTMap_UInt_VertexDist_Get(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // esi

  v4 = *(_DWORD **)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2)); /*0x47dba4*/
  if ( !v4 ) /*0x47dba9*/
    return 0; /*0x47dbc8*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v4[1]) ) /*0x47dbc0*/
  {
    v4 = (_DWORD *)*v4; /*0x47dbc2*/
    if ( !v4 ) /*0x47dbc6*/
      return 0; /*0x47dbc6*/
  }
  *a3 = v4[2]; /*0x47dbd7*/
  a3[1] = v4[3]; /*0x47dbdc*/
  a3[2] = v4[4]; /*0x47dbe4*/
  return 1; /*0x47dbc8*/
}
