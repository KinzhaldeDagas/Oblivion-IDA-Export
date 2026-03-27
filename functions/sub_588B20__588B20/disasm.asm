0x588B20: cmp     byte ptr [ecx+4], 0
0x588B24: jnz     short locret_588B4A
0x588B26: cmp     byte ptr [ecx+5], 0
0x588B2A: jnz     short locret_588B4A
0x588B2C: push    esi
0x588B2D: mov     esi, [ecx+34h]
0x588B30: test    esi, esi
0x588B32: mov     byte ptr [ecx+5], 1
0x588B36: jz      short loc_588B49
0x588B38: mov     ecx, [esi+8]
0x588B3B: lea     eax, [esi+8]
0x588B3E: mov     esi, [esi]
0x588B40: call    sub_588B20
0x588B45: test    esi, esi
0x588B47: jnz     short loc_588B38
0x588B49: pop     esi
0x588B4A: retn
