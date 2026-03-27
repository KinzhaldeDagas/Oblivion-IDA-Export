0x60A210: push    esi
0x60A211: mov     esi, ecx
0x60A213: call    sub_608B60
0x60A218: test    [esp+4+arg_0], 1
0x60A21D: jz      short loc_60A228
0x60A21F: push    esi
0x60A220: call    FormHeapFree
0x60A225: add     esp, 4
0x60A228: mov     eax, esi
0x60A22A: pop     esi
0x60A22B: retn    4
