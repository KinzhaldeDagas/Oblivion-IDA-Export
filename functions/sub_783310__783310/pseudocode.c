BOOL __thiscall sub_783310(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x783318*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x783310*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x78331d*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 4; /*0x783332*/
}
