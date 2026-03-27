0x69C980: push    esi
0x69C981: mov     esi, ecx
0x69C983: call    sub_69C140
0x69C988: test    [esp+4+arg_0], 1
0x69C98D: jz      short loc_69C998
0x69C98F: push    esi
0x69C990: call    FormHeapFree
0x69C995: add     esp, 4
0x69C998: mov     eax, esi
0x69C99A: pop     esi
0x69C99B: retn    4
