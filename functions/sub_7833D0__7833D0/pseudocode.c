BOOL __thiscall sub_7833D0(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x7833d8*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x7833d0*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x7833dd*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 0xA; /*0x7833f2*/
}
