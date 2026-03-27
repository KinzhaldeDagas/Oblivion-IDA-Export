0x77F330: push    esi
0x77F331: mov     esi, ecx
0x77F333: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVNiD3DShaderProgramCreator@@@@6B@; const NiTPointerMap<char const *,NiD3DShaderProgramCreator *>::`vftable'
0x77F339: call    NiTMap_Clear
0x77F33E: mov     ecx, esi
0x77F340: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DShaderProgramCreator@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DShaderProgramCreator *>::`vftable'
0x77F346: call    NiTMap_Clear
0x77F34B: mov     eax, [esi+8]
0x77F34E: push    eax
0x77F34F: call    FormHeapFree
0x77F354: add     esp, 4
0x77F357: test    [esp+4+arg_0], 1
0x77F35C: jz      short loc_77F367
0x77F35E: push    esi
0x77F35F: call    FormHeapFree
0x77F364: add     esp, 4
0x77F367: mov     eax, esi
0x77F369: pop     esi
0x77F36A: retn    4
