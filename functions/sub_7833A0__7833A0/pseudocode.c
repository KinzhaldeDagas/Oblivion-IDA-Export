BOOL __thiscall sub_7833A0(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x7833a8*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x7833a0*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x7833ad*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 7; /*0x7833c2*/
}
