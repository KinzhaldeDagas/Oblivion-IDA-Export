BOOL __thiscall sub_7832B0(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x7832b8*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x7832b0*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x7832bd*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 1; /*0x7832d2*/
}
