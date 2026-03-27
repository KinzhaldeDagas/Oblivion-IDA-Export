0x783090: push    esi
0x783091: mov     esi, ecx
0x783093: push    esi
0x783094: mov     dword ptr [esi], offset ??_7NiD3DVertexShader@@6B@; const NiD3DVertexShader::`vftable'
0x78309A: call    sub_77EFA0
0x78309F: add     esp, 4
0x7830A2: cmp     dword ptr [esi+30h], 0
0x7830A6: jz      short loc_7830B1
0x7830A8: mov     ecx, [esi+20h]
0x7830AB: push    esi
0x7830AC: call    sub_763090
0x7830B1: mov     ecx, esi; this
0x7830B3: pop     esi
0x7830B4: jmp     ??1NiD3DShaderProgram@@UAE@XZ; NiD3DShaderProgram::~NiD3DShaderProgram(void)
