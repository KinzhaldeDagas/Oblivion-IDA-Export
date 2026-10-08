// Calls IDirect3DDevice9::CreatePixelShader for compiled DWORD bytecode and reports a failed HRESULT.
IDirect3DPixelShader9 *__stdcall NiDX9Renderer__CreatePixelShader(const unsigned int *bytecode)
{
  HRESULT v1; // eax

  v1 = g_ShaderD3DDevice->lpVtbl->CreatePixelShader(g_ShaderD3DDevice, bytecode, &bytecode); /*0x783c48*/
  if ( (int)v1 >= 0 ) /*0x783c4c*/
    return (IDirect3DPixelShader9 *)bytecode; /*0x783c65*/
  sub_738460(1, 0, "Failed to create pixel shader\nError 0x%08x\n", v1); /*0x783c58*/
  return 0; /*0x783c62*/
}
