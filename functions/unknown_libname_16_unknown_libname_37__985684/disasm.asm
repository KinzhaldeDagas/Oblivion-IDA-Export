0x985684: lea     esi, [ecx+esi-4]
0x985688: lea     edi, [ecx+edi-4]
0x98568C: test    edi, 3
0x985692: jnz     short unknown_libname_38___unknown_libname_39
0x985694: shr     ecx, 2
0x985697: and     edx, 3
0x98569A: cmp     ecx, 8
0x98569D: jb      short unknown_libname_38
0x98569F: std
0x9856A0: rep movsd
0x9856A2: cld
0x9856A3: jmp     ds:jpt_9856D0[edx*4]; switch 4 cases
