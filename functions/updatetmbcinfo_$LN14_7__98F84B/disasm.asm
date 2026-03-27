0x98F84B: test    esi, esi
0x98F84D: jnz     short loc_98F857
0x98F84F: push    20h ; ' '
0x98F851: call    __amsg_exit
0x98F856: pop     ecx
0x98F857: mov     eax, esi
0x98F859: call    __SEH_epilog4
0x98F85E: retn
