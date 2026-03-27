0x706DD0: push    esi
0x706DD1: mov     esi, ds:0B3F998h
0x706DD7: test    esi, esi
0x706DD9: jz      short loc_706E01
0x706DDB: lea     eax, [esi+4]
0x706DDE: push    eax; lpAddend
0x706DDF: call    dword ptr ds:0A2807Ch
0x706DE5: test    eax, eax
0x706DE7: jnz     short loc_706DF7
0x706DE9: test    esi, esi
0x706DEB: jz      short loc_706DF7
0x706DED: mov     edx, [esi]
0x706DEF: mov     eax, [edx]
0x706DF1: push    1
0x706DF3: mov     ecx, esi
0x706DF5: call    eax
0x706DF7: mov     dword ptr ds:0B3F998h, 0
0x706E01: pop     esi
0x706E02: retn
