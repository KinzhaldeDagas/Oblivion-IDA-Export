BOOL __thiscall sub_783370(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x783378*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x783370*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x78337d*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 6; /*0x783392*/
}
