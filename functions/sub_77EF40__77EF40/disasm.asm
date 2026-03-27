0x77EF40: push    esi
0x77EF41: mov     esi, ecx
0x77EF43: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DShaderProgramCreator@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DShaderProgramCreator *>::`vftable'
0x77EF49: call    NiTMap_Clear
0x77EF4E: mov     eax, [esi+8]
0x77EF51: push    eax
0x77EF52: call    FormHeapFree
0x77EF57: add     esp, 4
0x77EF5A: test    [esp+4+arg_0], 1
0x77EF5F: jz      short loc_77EF6A
0x77EF61: push    esi
0x77EF62: call    FormHeapFree
0x77EF67: add     esp, 4
0x77EF6A: mov     eax, esi
0x77EF6C: pop     esi
0x77EF6D: retn    4
