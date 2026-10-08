BOOL __thiscall sub_782DE0(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x782de8*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x782de0*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x782ded*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 8; /*0x782e02*/
}
