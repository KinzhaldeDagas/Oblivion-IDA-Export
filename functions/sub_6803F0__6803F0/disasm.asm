0x6803F0: mov     eax, [ecx+8]
0x6803F3: mov     edx, [esp+arg_0]
0x6803F7: push    esi
0x6803F8: xor     esi, esi
0x6803FA: cmp     edx, eax
0x6803FC: jnz     short loc_680405
0x6803FE: mov     eax, [ecx+10h]
0x680401: pop     esi
0x680402: retn    4
0x680405: cmp     edx, [ecx+10h]
0x680408: jz      short loc_68040C
0x68040A: mov     eax, esi
0x68040C: pop     esi
0x68040D: retn    4
