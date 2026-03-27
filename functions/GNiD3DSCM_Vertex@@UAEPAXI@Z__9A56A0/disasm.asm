0x9A56A0: push    esi
0x9A56A1: mov     esi, ecx
0x9A56A3: mov     dword ptr [esi], offset ??_7NiD3DSCM_Vertex@@6B@; const NiD3DSCM_Vertex::`vftable'
0x9A56A9: call    ??1NiD3DShaderConstantMap@@UAE@XZ; NiD3DShaderConstantMap::~NiD3DShaderConstantMap(void)
0x9A56AE: test    byte ptr [esp+4+arg_0], 1
0x9A56B3: jz      short loc_9A56BE
0x9A56B5: push    esi
0x9A56B6: call    FormHeapFree
0x9A56BB: add     esp, 4
0x9A56BE: mov     eax, esi
0x9A56C0: pop     esi
0x9A56C1: retn    4
