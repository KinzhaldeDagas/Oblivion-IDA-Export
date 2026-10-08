BOOL __thiscall sub_7832E0(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x7832e8*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x7832e0*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x7832ed*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 3; /*0x783302*/
}
