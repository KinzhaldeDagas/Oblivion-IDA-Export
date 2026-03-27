0x694FF0: push    esi
0x694FF1: mov     esi, ecx
0x694FF3: call    sub_694D20
0x694FF8: test    [esp+4+arg_0], 1
0x694FFD: jz      short loc_695008
0x694FFF: push    esi
0x695000: call    FormHeapFree
0x695005: add     esp, 4
0x695008: mov     eax, esi
0x69500A: pop     esi
0x69500B: retn    4
