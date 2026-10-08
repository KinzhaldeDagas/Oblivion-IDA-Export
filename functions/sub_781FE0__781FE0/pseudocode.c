char __stdcall sub_781FE0(int unused2)
{
  int v1; // esi
  const unsigned int *v2; // edi
  int v4; // eax
  IDirect3DVertexShader9 *VertexShader; // eax

  v1 = unused2; /*0x781fe2*/
  v2 = (const unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)unused2 + 0x18))(unused2); /*0x781ff2*/
  if ( !v2 ) /*0x781ff6*/
    return 0; /*0x781ff6*/
  unused2 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x48))(v1); /*0x78200b*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x38))(v1); /*0x78201a*/
  VertexShader = NiDX9Renderer__CreateVertexShader(v2, (int)&unused2, v4, 0, 0, 0); /*0x782025*/
  if ( !VertexShader ) /*0x78202c*/
    return 0; /*0x781ffa*/
  (*(void (__thiscall **)(int, IDirect3DVertexShader9 *))(*(_DWORD *)v1 + 0x44))(v1, VertexShader); /*0x782036*/
  return 1; /*0x781ff8*/
}
