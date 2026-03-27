0x77C370: push    edi
0x77C371: mov     edi, [esp+4+arg_0]
0x77C375: test    edi, edi
0x77C377: jnz     short loc_77C37F
0x77C379: xor     al, al
0x77C37B: pop     edi
0x77C37C: retn    4
0x77C37F: mov     ecx, [edi+0BCh]
0x77C385: test    ecx, ecx
0x77C387: jz      short loc_77C3C0
0x77C389: push    esi
0x77C38A: call    sub_452A60
0x77C38F: mov     esi, [edi+0BCh]
0x77C395: test    esi, esi
0x77C397: jz      short loc_77C3BF
0x77C399: lea     eax, [esi+4]
0x77C39C: push    eax; lpAddend
0x77C39D: call    dword ptr ds:0A2807Ch
0x77C3A3: test    eax, eax
0x77C3A5: jnz     short loc_77C3B5
0x77C3A7: test    esi, esi
0x77C3A9: jz      short loc_77C3B5
0x77C3AB: mov     edx, [esi]
0x77C3AD: mov     eax, [edx]
0x77C3AF: push    1
0x77C3B1: mov     ecx, esi
0x77C3B3: call    eax
0x77C3B5: mov     dword ptr [edi+0BCh], 0
0x77C3BF: pop     esi
0x77C3C0: mov     al, 1
0x77C3C2: pop     edi
0x77C3C3: retn    4
