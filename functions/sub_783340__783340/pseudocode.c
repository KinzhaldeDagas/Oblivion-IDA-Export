BOOL __thiscall sub_783340(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 5); /*0x783348*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x783340*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x78334d*/
  return *(_DWORD *)(4 * (unsigned __int8)v1 + 0xB428D8) == 5; /*0x783362*/
}
