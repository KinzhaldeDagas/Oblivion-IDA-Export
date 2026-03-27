0x51ED00: push    esi; int
0x51ED01: mov     esi, ecx
0x51ED03: call    sub_51E9A0
0x51ED08: test    [esp+4+arg_0], 1
0x51ED0D: jz      short loc_51ED18
0x51ED0F: push    esi
0x51ED10: call    FormHeapFree
0x51ED15: add     esp, 4
0x51ED18: mov     eax, esi
0x51ED1A: pop     esi
0x51ED1B: retn    4
