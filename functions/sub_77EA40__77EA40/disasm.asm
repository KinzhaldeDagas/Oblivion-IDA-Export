0x77EA40: push    esi
0x77EA41: mov     esi, ecx
0x77EA43: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVNiVBDynamicSet@@@@6B@; const NiTPointerMap<uint,NiVBDynamicSet *>::`vftable'
0x77EA49: call    NiTMap_Clear
0x77EA4E: mov     ecx, esi
0x77EA50: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBDynamicSet@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBDynamicSet *>::`vftable'
0x77EA56: call    NiTMap_Clear
0x77EA5B: mov     eax, [esi+8]
0x77EA5E: push    eax
0x77EA5F: call    FormHeapFree
0x77EA64: add     esp, 4
0x77EA67: test    [esp+4+arg_0], 1
0x77EA6C: jz      short loc_77EA77
0x77EA6E: push    esi
0x77EA6F: call    FormHeapFree
0x77EA74: add     esp, 4
0x77EA77: mov     eax, esi
0x77EA79: pop     esi
0x77EA7A: retn    4
