0x77E070: push    esi
0x77E071: mov     esi, ecx
0x77E073: mov     eax, [esi+4]
0x77E076: push    eax
0x77E077: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiVBDynamicSet@@@@6B@; const NiTArray<NiVBDynamicSet *>::`vftable'
0x77E07D: call    FormHeapFree
0x77E082: add     esp, 4
0x77E085: test    [esp+4+arg_0], 1
0x77E08A: jz      short loc_77E095
0x77E08C: push    esi
0x77E08D: call    FormHeapFree
0x77E092: add     esp, 4
0x77E095: mov     eax, esi
0x77E097: pop     esi
0x77E098: retn    4
