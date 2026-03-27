0x77DBF0: push    esi
0x77DBF1: mov     esi, ecx
0x77DBF3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBSet@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBSet *>::`vftable'
0x77DBF9: call    NiTMap_Clear
0x77DBFE: mov     eax, [esi+8]
0x77DC01: push    eax
0x77DC02: call    FormHeapFree
0x77DC07: add     esp, 4
0x77DC0A: test    [esp+4+arg_0], 1
0x77DC0F: jz      short loc_77DC1A
0x77DC11: push    esi
0x77DC12: call    FormHeapFree
0x77DC17: add     esp, 4
0x77DC1A: mov     eax, esi
0x77DC1C: pop     esi
0x77DC1D: retn    4
