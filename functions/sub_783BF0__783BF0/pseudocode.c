// Calls IDirect3DDevice9::CreateVertexShader for compiled DWORD bytecode and reports a failed HRESULT.
IDirect3DVertexShader9 *__stdcall NiDX9Renderer__CreateVertexShader(
        const unsigned int *bytecode,
        int unused2,
        int unused3,
        int unused4,
        int unused5,
        int unused6)
{
  HRESULT v6; // eax

  v6 = g_ShaderD3DDevice->lpVtbl->CreateVertexShader(g_ShaderD3DDevice, bytecode, &bytecode); /*0x783c08*/
  if ( (int)v6 >= 0 ) /*0x783c0c*/
    return (IDirect3DVertexShader9 *)bytecode; /*0x783c25*/
  sub_738460(1, 0, "Failed to create vertex shader\nError 0x%08x\n", v6); /*0x783c18*/
  return 0; /*0x783c22*/
}
