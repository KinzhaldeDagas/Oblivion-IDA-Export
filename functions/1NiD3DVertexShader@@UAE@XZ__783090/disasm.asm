0x783090: push    esi; MoonSugarEffect decode: NiD3DVertexShader destructor. Removes shader-program-factory mapping, clears/release-binds the live vertex shader through renderer state, releases the D3D handle, then destructs base program.
0x783091: mov     esi, ecx
0x783093: push    esi
0x783094: mov     dword ptr [esi], offset ??_7NiD3DVertexShader@@6B@; const NiD3DVertexShader::`vftable'
0x78309A: call    sub_77EFA0; MoonSugarEffect decode: removes a vertex shader wrapper from shaderProgramFactory+0x18 by key from wrapper base vtable +0x04. Destructor bookkeeping only; pass refs are still handled separately.
0x78309F: add     esp, 4
0x7830A2: cmp     dword ptr [esi+30h], 0
0x7830A6: jz      short loc_7830B1
0x7830A8: mov     ecx, [esi+20h]
0x7830AB: push    esi
0x7830AC: call    sub_763090; MoonSugarEffect decode: vertex shader handle release helper. Clears current vertex shader on renderer state, calls wrapper +0x40 getter, Releases IDirect3DVertexShader9, then wrapper +0x44 stores null.
0x7830B1: mov     ecx, esi; this
0x7830B3: pop     esi
0x7830B4: jmp     ??1NiD3DShaderProgram@@UAE@XZ; NiD3DShaderProgram::~NiD3DShaderProgram(void)
