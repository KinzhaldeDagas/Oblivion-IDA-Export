0x7DADE0: push    esi
0x7DADE1: mov     esi, ecx
0x7DADE3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVShaderBufferEntry@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,ShaderBufferEntry *>::`vftable'
0x7DADE9: call    NiTMap_Clear
0x7DADEE: mov     eax, [esi+8]
0x7DADF1: push    eax
0x7DADF2: call    FormHeapFree
0x7DADF7: add     esp, 4
0x7DADFA: test    [esp+4+arg_0], 1
0x7DADFF: jz      short loc_7DAE0A
0x7DAE01: push    esi
0x7DAE02: call    FormHeapFree
0x7DAE07: add     esp, 4
0x7DAE0A: mov     eax, esi
0x7DAE0C: pop     esi
0x7DAE0D: retn    4
