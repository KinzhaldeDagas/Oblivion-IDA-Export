0x771100: push    esi
0x771101: mov     esi, ecx
0x771103: mov     eax, [esi+2Ch]
0x771106: push    eax
0x771107: mov     dword ptr [esi], offset ??_7NiDX9ShaderDeclaration@@6B@; const NiDX9ShaderDeclaration::`vftable'
0x77110D: call    FormHeapFree
0x771112: mov     eax, [esi+30h]
0x771115: add     esp, 4
0x771118: test    eax, eax
0x77111A: jz      short loc_77112B
0x77111C: mov     ecx, [eax]
0x77111E: mov     edx, [ecx+8]
0x771121: push    eax
0x771122: call    edx
0x771124: mov     dword ptr [esi+30h], 0
0x77112B: mov     ecx, esi; this
0x77112D: call    ??1NiD3DShaderDeclaration@@UAE@XZ; NiD3DShaderDeclaration::~NiD3DShaderDeclaration(void)
0x771132: test    [esp+4+arg_0], 1
0x771137: jz      short loc_771142
0x771139: push    esi
0x77113A: call    FormHeapFree
0x77113F: add     esp, 4
0x771142: mov     eax, esi
0x771144: pop     esi
0x771145: retn    4
