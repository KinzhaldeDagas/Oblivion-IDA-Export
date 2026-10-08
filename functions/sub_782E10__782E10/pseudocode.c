BOOL __thiscall sub_782E10(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x782e18*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x782e10*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x782e1d*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 9; /*0x782e32*/
}
