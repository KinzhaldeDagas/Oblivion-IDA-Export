0x98909C: add     ecx, 1
0x98909F: mov     al, [esi]
0x9890A1: or      al, al
0x9890A3: jz      short _strcspn___dstdone_0
0x9890A5: add     esi, 1
0x9890A8: bt      [esp+0], eax
0x9890AC: jnb     short _strcspn___dstnext_0
