char __stdcall sub_782040(int a1)
{
  const unsigned int *v1; // eax
  IDirect3DPixelShader9 *PixelShader; // eax

  v1 = (const unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18))(a1); /*0x78204f*/
  if ( !v1 ) /*0x782053*/
    return 0; /*0x782053*/
  PixelShader = NiDX9Renderer__CreatePixelShader(v1); /*0x78205f*/
  if ( !PixelShader ) /*0x782066*/
    return 0; /*0x782056*/
  (*(void (__thiscall **)(int, IDirect3DPixelShader9 *))(*(_DWORD *)a1 + 0x3C))(a1, PixelShader); /*0x782070*/
  return 1; /*0x782055*/
}
