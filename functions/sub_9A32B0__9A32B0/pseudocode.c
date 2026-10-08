BOOL __thiscall sub_9A32B0(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x9a32b8*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a32bb*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a32bd*/
  return g_D3DXParameterClassDispatch[(unsigned __int8)v1] == 0xB; /*0x9a32d2*/
}
