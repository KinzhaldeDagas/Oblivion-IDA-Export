char __thiscall sub_782F30(_DWORD *this, int a2, int a3, unsigned int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // edi
  int v9; // ebx
  unsigned int i; // esi

  v6 = *(_DWORD *)(a2 + 0x14); /*0x782f3e*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x782f31*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x782f47*/
  if ( *(_DWORD *)(4 * (unsigned __int8)v6 + 0xB428D8) != 8 ) /*0x782f5a*/
  {
    v7 = *(_DWORD *)(a2 + 0x14); /*0x782f63*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x782f5c*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x782f68*/
    if ( *(_DWORD *)(4 * (unsigned __int8)v7 + 0xB428D8) != 9 ) /*0x782f7b*/
      return 0; /*0x782f7e*/
  }
  v9 = *(_DWORD *)(a2 + 0x1C); /*0x782f86*/
  for ( i = 0; i < a4; v9 += a5 ) /*0x782f92*/
    (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(*(this + 9) + 0xFF8) + 0x1B4))( /*0x782fcb*/
      *(_DWORD *)(*(this + 9) + 0xFF8),
      v9,
      a3 + 0x10 * a5 * *(unsigned __int16 *)(a6 + 2 * i++),
      a5);
  return 1; /*0x782f7d*/
}
