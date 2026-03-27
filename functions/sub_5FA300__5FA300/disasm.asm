0x5FA300: push    esi; int
0x5FA301: mov     esi, ecx
0x5FA303: call    sub_5F13D0
0x5FA308: test    [esp+4+arg_0], 1
0x5FA30D: jz      short loc_5FA318
0x5FA30F: push    esi
0x5FA310: call    FormHeapFree
0x5FA315: add     esp, 4
0x5FA318: mov     eax, esi
0x5FA31A: pop     esi
0x5FA31B: retn    4
