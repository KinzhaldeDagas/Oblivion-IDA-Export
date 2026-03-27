0x706650: push    esi
0x706651: mov     esi, ds:0B3F980h
0x706657: test    esi, esi
0x706659: jz      short loc_706681
0x70665B: lea     eax, [esi+4]
0x70665E: push    eax; lpAddend
0x70665F: call    dword ptr ds:0A2807Ch
0x706665: test    eax, eax
0x706667: jnz     short loc_706677
0x706669: test    esi, esi
0x70666B: jz      short loc_706677
0x70666D: mov     edx, [esi]
0x70666F: mov     eax, [edx]
0x706671: push    1
0x706673: mov     ecx, esi
0x706675: call    eax
0x706677: mov     dword ptr ds:0B3F980h, 0
0x706681: pop     esi
0x706682: retn
