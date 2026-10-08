0x77BD30: test    byte ptr [esp+arg_0], 1
0x77BD35: push    esi
0x77BD36: mov     esi, ecx
0x77BD38: mov     dword ptr [esi], offset ??_7NiD3DShaderProgramCreator@@6B@; const NiD3DShaderProgramCreator::`vftable'
0x77BD3E: jz      short loc_77BD49
0x77BD40: push    esi
0x77BD41: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x77BD46: add     esp, 4
0x77BD49: mov     eax, esi
0x77BD4B: pop     esi
0x77BD4C: retn    4
