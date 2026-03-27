0x772040: push    esi
0x772041: mov     esi, ecx
0x772043: call    sub_7724D0
0x772048: test    [esp+4+arg_0], 1
0x77204D: jz      short loc_772058
0x77204F: push    esi
0x772050: call    FormHeapFree
0x772055: add     esp, 4
0x772058: mov     eax, esi
0x77205A: pop     esi
0x77205B: retn    4
