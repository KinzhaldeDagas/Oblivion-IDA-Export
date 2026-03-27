0x4CA180: push    esi
0x4CA181: mov     esi, ecx
0x4CA183: mov     eax, [esi+4]
0x4CA186: push    eax
0x4CA187: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVTESObjectREFR@@@@6B@; const NiTArray<TESObjectREFR *>::`vftable'
0x4CA18D: call    FormHeapFree
0x4CA192: add     esp, 4
0x4CA195: test    [esp+4+arg_0], 1
0x4CA19A: jz      short loc_4CA1A5
0x4CA19C: push    esi
0x4CA19D: call    FormHeapFree
0x4CA1A2: add     esp, 4
0x4CA1A5: mov     eax, esi
0x4CA1A7: pop     esi
0x4CA1A8: retn    4
