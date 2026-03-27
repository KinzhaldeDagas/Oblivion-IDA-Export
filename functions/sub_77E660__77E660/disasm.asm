0x77E660: push    esi
0x77E661: mov     esi, ecx
0x77E663: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBDynamicSet@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBDynamicSet *>::`vftable'
0x77E669: call    NiTMap_Clear
0x77E66E: mov     eax, [esi+8]
0x77E671: push    eax
0x77E672: call    FormHeapFree
0x77E677: add     esp, 4
0x77E67A: test    [esp+4+arg_0], 1
0x77E67F: jz      short loc_77E68A
0x77E681: push    esi
0x77E682: call    FormHeapFree
0x77E687: add     esp, 4
0x77E68A: mov     eax, esi
0x77E68C: pop     esi
0x77E68D: retn    4
