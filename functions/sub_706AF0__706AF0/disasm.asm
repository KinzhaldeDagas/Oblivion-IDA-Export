0x706AF0: push    esi
0x706AF1: mov     esi, ds:0B3F984h
0x706AF7: test    esi, esi
0x706AF9: jz      short loc_706B21
0x706AFB: lea     eax, [esi+4]
0x706AFE: push    eax; lpAddend
0x706AFF: call    dword ptr ds:0A2807Ch
0x706B05: test    eax, eax
0x706B07: jnz     short loc_706B17
0x706B09: test    esi, esi
0x706B0B: jz      short loc_706B17
0x706B0D: mov     edx, [esi]
0x706B0F: mov     eax, [edx]
0x706B11: push    1
0x706B13: mov     ecx, esi
0x706B15: call    eax
0x706B17: mov     dword ptr ds:0B3F984h, 0
0x706B21: pop     esi
0x706B22: retn
