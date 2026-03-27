0x95A250: mov     eax, ds:0BA9A68h
0x95A255: push    esi
0x95A256: mov     esi, ecx
0x95A258: mov     ecx, eax
0x95A25A: add     eax, 1
0x95A25D: test    ecx, ecx
0x95A25F: mov     ds:0BA9A68h, eax
0x95A264: jnz     short loc_95A278
0x95A266: push    offset sub_95A1B0
0x95A26B: push    offset sub_959F00
0x95A270: call    sub_747C40
0x95A275: add     esp, 8
0x95A278: mov     eax, esi
0x95A27A: pop     esi
0x95A27B: retn
