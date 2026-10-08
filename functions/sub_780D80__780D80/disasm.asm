0x780D80: mov     eax, [esp+arg_0]; MoonSugarEffect decode: NiD3DVertexShader constructor. Base NiD3DShaderProgram attach, clears +0x28/+0x2C/+0x30/+0x34, installs NiD3DVertexShader vtable; CreateVertexShader allocates this 0x38-byte wrapper.
0x780D84: push    esi
0x780D85: push    eax
0x780D86: mov     esi, ecx
0x780D88: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x780D8D: xor     eax, eax
0x780D8F: mov     [esi+28h], al
0x780D92: mov     [esi+2Ch], eax
0x780D95: mov     [esi+30h], eax
0x780D98: mov     [esi+34h], eax
0x780D9B: mov     dword ptr [esi], offset ??_7NiD3DVertexShader@@6B@; const NiD3DVertexShader::`vftable'
0x780DA1: mov     eax, esi
0x780DA3: pop     esi
0x780DA4: retn    4
