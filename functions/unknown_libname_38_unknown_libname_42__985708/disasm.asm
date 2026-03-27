0x985708: mov     al, [esi+3]
0x98570B: and     edx, ecx
0x98570D: mov     [edi+3], al
0x985710: mov     al, [esi+2]
0x985713: shr     ecx, 2
0x985716: mov     [edi+2], al
0x985719: sub     esi, 2
0x98571C: sub     edi, 2
0x98571F: cmp     ecx, 8
0x985722: jb      short unknown_libname_38
0x985724: std
0x985725: rep movsd
0x985727: cld
0x985728: jmp     ds:jpt_9856D0[edx*4]; switch 4 cases
