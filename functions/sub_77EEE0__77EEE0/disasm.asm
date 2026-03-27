0x77EEE0: push    esi
0x77EEE1: mov     esi, ecx
0x77EEE3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DVertexShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DVertexShader *>::`vftable'
0x77EEE9: call    NiTMap_Clear
0x77EEEE: mov     eax, [esi+8]
0x77EEF1: push    eax
0x77EEF2: call    FormHeapFree
0x77EEF7: add     esp, 4
0x77EEFA: test    [esp+4+arg_0], 1
0x77EEFF: jz      short loc_77EF0A
0x77EF01: push    esi
0x77EF02: call    FormHeapFree
0x77EF07: add     esp, 4
0x77EF0A: mov     eax, esi
0x77EF0C: pop     esi
0x77EF0D: retn    4
