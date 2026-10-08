0x782E40: push    esi
0x782E41: mov     esi, ecx
0x782E43: push    esi
0x782E44: mov     dword ptr [esi], offset ??_7NiD3DPixelShader@@6B@; const NiD3DPixelShader::`vftable'
0x782E4A: call    sub_77EFD0; MoonSugarEffect decode: pixel analog of 77EFA0. Removes wrapper from shaderProgramFactory+0x1C by key from wrapper base vtable +0x04.
0x782E4F: add     esp, 4
0x782E52: cmp     dword ptr [esi+28h], 0
0x782E56: jz      short loc_782E61
0x782E58: mov     ecx, [esi+20h]
0x782E5B: push    esi
0x782E5C: call    sub_7630E0; MoonSugarEffect decode: pixel shader handle release helper. Clears current pixel shader on renderer state, Releases IDirect3DPixelShader9, then stores null on the wrapper.
0x782E61: mov     dword ptr [esi+28h], 0
0x782E68: mov     ecx, esi; this
0x782E6A: pop     esi
0x782E6B: jmp     ??1NiD3DShaderProgram@@UAE@XZ; NiD3DShaderProgram::~NiD3DShaderProgram(void)
