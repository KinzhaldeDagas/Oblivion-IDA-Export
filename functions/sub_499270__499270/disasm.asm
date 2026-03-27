0x499270: push    ebx
0x499271: push    esi
0x499272: mov     ebx, ecx
0x499274: mov     esi, [ebx+108h]
0x49927A: push    edi
0x49927B: mov     edi, [esp+0Ch+arg_0]
0x49927F: cmp     esi, edi
0x499281: jz      short loc_4992B7
0x499283: test    esi, esi
0x499285: jz      short loc_4992A3
0x499287: lea     eax, [esi+4]
0x49928A: push    eax; lpAddend
0x49928B: call    dword ptr ds:0A2807Ch
0x499291: test    eax, eax
0x499293: jnz     short loc_4992A3
0x499295: test    esi, esi
0x499297: jz      short loc_4992A3
0x499299: mov     edx, [esi]
0x49929B: mov     eax, [edx]
0x49929D: push    1
0x49929F: mov     ecx, esi
0x4992A1: call    eax
0x4992A3: test    edi, edi
0x4992A5: mov     [ebx+108h], edi
0x4992AB: jz      short loc_4992B7
0x4992AD: add     edi, 4
0x4992B0: push    edi; lpAddend
0x4992B1: call    dword ptr ds:0A28078h
0x4992B7: pop     edi
0x4992B8: pop     esi
0x4992B9: pop     ebx
0x4992BA: retn    4
