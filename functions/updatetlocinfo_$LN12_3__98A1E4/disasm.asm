0x98A1E4: test    esi, esi
0x98A1E6: jnz     short loc_98A1F0
0x98A1E8: push    20h ; ' '
0x98A1EA: call    __amsg_exit
0x98A1EF: pop     ecx
0x98A1F0: mov     eax, esi
0x98A1F2: call    __SEH_epilog4
0x98A1F7: retn
