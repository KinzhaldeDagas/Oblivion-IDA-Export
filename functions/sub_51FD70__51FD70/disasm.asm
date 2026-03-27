0x51FD70: push    esi
0x51FD71: mov     esi, ecx
0x51FD73: call    sub_51FCD0
0x51FD78: test    [esp+4+arg_0], 1
0x51FD7D: jz      short loc_51FD88
0x51FD7F: push    esi
0x51FD80: call    FormHeapFree
0x51FD85: add     esp, 4
0x51FD88: mov     eax, esi
0x51FD8A: pop     esi
0x51FD8B: retn    4
