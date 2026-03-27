0x5706D0: push    esi
0x5706D1: mov     esi, ecx
0x5706D3: mov     eax, [esi+4]
0x5706D6: push    eax
0x5706D7: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiAVObject@@@@6B@; const NiTArray<NiAVObject *>::`vftable'
0x5706DD: call    FormHeapFree
0x5706E2: add     esp, 4
0x5706E5: test    [esp+4+arg_0], 1
0x5706EA: jz      short loc_5706F5
0x5706EC: push    esi
0x5706ED: call    FormHeapFree
0x5706F2: add     esp, 4
0x5706F5: mov     eax, esi
0x5706F7: pop     esi
0x5706F8: retn    4
