0x98C0F5: push    esi
0x98C0F6: call    __getptd_noexit
0x98C0FB: mov     esi, eax
0x98C0FD: test    esi, esi
0x98C0FF: jnz     short loc_98C109
0x98C101: push    10h
0x98C103: call    __amsg_exit
0x98C108: pop     ecx
0x98C109: mov     eax, esi
0x98C10B: pop     esi
0x98C10C: retn
