char __stdcall sub_781070(int a1)
{
  int v1; // esi
  const unsigned int *v2; // edi
  int v4; // eax
  IDirect3DVertexShader9 *VertexShader; // eax
  int unused2; // [esp+Ch] [ebp-4h] BYREF

  v1 = a1; /*0x781073*/
  v2 = (const unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18))(a1); /*0x781083*/
  if ( !v2 ) /*0x781087*/
    return 0; /*0x781087*/
  unused2 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x48))(v1); /*0x78109d*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x38))(v1); /*0x7810ac*/
  VertexShader = NiDX9Renderer__CreateVertexShader(v2, (int)&unused2, v4, 0, 0, 0); /*0x7810b7*/
  if ( !VertexShader ) /*0x7810be*/
    return 0; /*0x78108b*/
  (*(void (__thiscall **)(int, IDirect3DVertexShader9 *))(*(_DWORD *)v1 + 0x44))(v1, VertexShader); /*0x7810c8*/
  if ( D3DXGetShaderConstantTable_0((int)v2, (int)&a1) >= 0 ) /*0x7810d7*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x74))(v1, a1); /*0x7810e5*/
  if ( a1 ) /*0x7810ed*/
    (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x7810f5*/
  return 1; /*0x781089*/
}
