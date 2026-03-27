0x9854A8: mov     al, [esi]
0x9854AA: or      al, al
0x9854AC: jz      short _strpbrk___dstdone
0x9854AE: add     esi, 1
0x9854B1: bt      [esp+0], eax
0x9854B5: jnb     short _strpbrk___dstnext
0x9854B7: lea     eax, [esi-1]
