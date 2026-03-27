0x5B1F00: push    esi
0x5B1F01: mov     esi, ecx
0x5B1F03: call    ??1?$NiTList@PAVMagicItemAndIndex@@@@UAE@XZ; NiTList<MagicItemAndIndex *>::~NiTList<MagicItemAndIndex *>(void)
0x5B1F08: test    [esp+4+arg_0], 1
0x5B1F0D: jz      short loc_5B1F18
0x5B1F0F: push    esi
0x5B1F10: call    FormHeapFree
0x5B1F15: add     esp, 4
0x5B1F18: mov     eax, esi
0x5B1F1A: pop     esi
0x5B1F1B: retn    4
