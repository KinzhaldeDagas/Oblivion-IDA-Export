char __stdcall sub_781100(int a1)
{
  int v1; // edi
  const unsigned int *v2; // eax
  int v3; // esi
  IDirect3DPixelShader9 *PixelShader; // eax

  v1 = a1; /*0x781103*/
  v2 = (const unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18))(a1); /*0x781110*/
  v3 = (int)v2; /*0x781112*/
  if ( !v2 ) /*0x781116*/
    return 0; /*0x781116*/
  PixelShader = NiDX9Renderer__CreatePixelShader(v2); /*0x781123*/
  if ( !PixelShader ) /*0x78112a*/
    return 0; /*0x78111a*/
  (*(void (__thiscall **)(int, IDirect3DPixelShader9 *))(*(_DWORD *)v1 + 0x3C))(v1, PixelShader); /*0x781134*/
  if ( D3DXGetShaderConstantTable_0(v3, (int)&a1) >= 0 ) /*0x781143*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x5C))(v1, a1); /*0x781151*/
  if ( a1 ) /*0x781159*/
    (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x781161*/
  return 1; /*0x781118*/
}
