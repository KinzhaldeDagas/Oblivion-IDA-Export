0x450050: push    esi
0x450051: mov     esi, ecx
0x450053: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESFile@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESFile *>::`vftable'
0x450059: call    NiTMap_Clear
0x45005E: mov     eax, [esi+8]
0x450061: push    eax
0x450062: call    FormHeapFree
0x450067: add     esp, 4
0x45006A: test    [esp+4+arg_0], 1
0x45006F: jz      short loc_45007A
0x450071: push    esi
0x450072: call    FormHeapFree
0x450077: add     esp, 4
0x45007A: mov     eax, esi
0x45007C: pop     esi
0x45007D: retn    4
