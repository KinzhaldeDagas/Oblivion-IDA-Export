0x77DCE0: push    esi
0x77DCE1: mov     esi, ecx
0x77DCE3: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVNiVBSet@@@@6B@; const NiTPointerMap<uint,NiVBSet *>::`vftable'
0x77DCE9: call    NiTMap_Clear
0x77DCEE: mov     ecx, esi
0x77DCF0: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBSet@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBSet *>::`vftable'
0x77DCF6: call    NiTMap_Clear
0x77DCFB: mov     eax, [esi+8]
0x77DCFE: push    eax
0x77DCFF: call    FormHeapFree
0x77DD04: add     esp, 4
0x77DD07: test    [esp+4+arg_0], 1
0x77DD0C: jz      short loc_77DD17
0x77DD0E: push    esi
0x77DD0F: call    FormHeapFree
0x77DD14: add     esp, 4
0x77DD17: mov     eax, esi
0x77DD19: pop     esi
0x77DD1A: retn    4
