0x77BD50: push    esi
0x77BD51: mov     esi, ecx
0x77BD53: mov     eax, [esi+8]
0x77BD56: push    eax
0x77BD57: mov     dword ptr [esi], offset ??_7NiD3DShaderProgramCreatorAsm@@6B@; const NiD3DShaderProgramCreatorAsm::`vftable'
0x77BD5D: call    FormHeapFree
0x77BD62: add     esp, 4
0x77BD65: test    [esp+4+arg_0], 1
0x77BD6A: mov     dword ptr [esi], offset ??_7NiD3DShaderProgramCreator@@6B@; const NiD3DShaderProgramCreator::`vftable'
0x77BD70: jz      short loc_77BD7B
0x77BD72: push    esi
0x77BD73: call    FormHeapFree
0x77BD78: add     esp, 4
0x77BD7B: mov     eax, esi
0x77BD7D: pop     esi
0x77BD7E: retn    4
