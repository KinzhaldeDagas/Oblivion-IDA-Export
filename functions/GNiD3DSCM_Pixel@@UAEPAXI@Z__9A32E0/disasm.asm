0x9A32E0: push    esi
0x9A32E1: mov     esi, ecx
0x9A32E3: mov     dword ptr [esi], offset ??_7NiD3DSCM_Pixel@@6B@; const NiD3DSCM_Pixel::`vftable'
0x9A32E9: call    ??1NiD3DShaderConstantMap@@UAE@XZ; NiD3DShaderConstantMap::~NiD3DShaderConstantMap(void)
0x9A32EE: test    byte ptr [esp+4+arg_0], 1
0x9A32F3: jz      short loc_9A32FE
0x9A32F5: push    esi
0x9A32F6: call    FormHeapFree
0x9A32FB: add     esp, 4
0x9A32FE: mov     eax, esi
0x9A3300: pop     esi
0x9A3301: retn    4
