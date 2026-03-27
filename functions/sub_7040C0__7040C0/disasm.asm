0x7040C0: push    esi
0x7040C1: mov     esi, ds:0B3F974h
0x7040C7: test    esi, esi
0x7040C9: jz      short loc_7040F1
0x7040CB: lea     eax, [esi+4]
0x7040CE: push    eax; lpAddend
0x7040CF: call    dword ptr ds:0A2807Ch
0x7040D5: test    eax, eax
0x7040D7: jnz     short loc_7040E7
0x7040D9: test    esi, esi
0x7040DB: jz      short loc_7040E7
0x7040DD: mov     edx, [esi]
0x7040DF: mov     eax, [edx]
0x7040E1: push    1
0x7040E3: mov     ecx, esi
0x7040E5: call    eax
0x7040E7: mov     dword ptr ds:0B3F974h, 0
0x7040F1: pop     esi
0x7040F2: retn
