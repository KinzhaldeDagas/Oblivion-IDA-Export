0x5D6250: cmp     [esp+arg_0], 63h ; 'c'
0x5D6255: push    esi
0x5D6256: mov     esi, ecx
0x5D6258: jnz     short loc_5D626C
0x5D625A: call    sub_5D5A00
0x5D625F: test    eax, eax
0x5D6261: jle     short loc_5D626C
0x5D6263: push    0FFFFFFFFh
0x5D6265: mov     ecx, esi
0x5D6267: call    sub_5D5B40
0x5D626C: pop     esi
0x5D626D: retn    8
