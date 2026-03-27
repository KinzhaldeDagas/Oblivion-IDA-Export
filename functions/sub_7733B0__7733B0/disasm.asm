0x7733B0: push    esi
0x7733B1: mov     esi, ecx
0x7733B3: call    sub_773470
0x7733B8: test    [esp+4+arg_0], 1
0x7733BD: jz      short loc_7733C8
0x7733BF: push    esi
0x7733C0: call    FormHeapFree
0x7733C5: add     esp, 4
0x7733C8: mov     eax, esi
0x7733CA: pop     esi
0x7733CB: retn    4
