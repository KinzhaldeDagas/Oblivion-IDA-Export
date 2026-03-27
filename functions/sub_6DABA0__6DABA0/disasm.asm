0x6DABA0: push    ebx
0x6DABA1: push    esi
0x6DABA2: mov     ebx, ecx
0x6DABA4: mov     esi, [ebx+18h]
0x6DABA7: push    edi
0x6DABA8: mov     edi, [esp+0Ch+arg_0]
0x6DABAC: cmp     esi, edi
0x6DABAE: jz      short loc_6DABE1
0x6DABB0: test    esi, esi
0x6DABB2: jz      short loc_6DABD0
0x6DABB4: lea     eax, [esi+4]
0x6DABB7: push    eax; lpAddend
0x6DABB8: call    dword ptr ds:0A2807Ch
0x6DABBE: test    eax, eax
0x6DABC0: jnz     short loc_6DABD0
0x6DABC2: test    esi, esi
0x6DABC4: jz      short loc_6DABD0
0x6DABC6: mov     edx, [esi]
0x6DABC8: mov     eax, [edx]
0x6DABCA: push    1
0x6DABCC: mov     ecx, esi
0x6DABCE: call    eax
0x6DABD0: test    edi, edi
0x6DABD2: mov     [ebx+18h], edi
0x6DABD5: jz      short loc_6DABE1
0x6DABD7: add     edi, 4
0x6DABDA: push    edi; lpAddend
0x6DABDB: call    dword ptr ds:0A28078h
0x6DABE1: pop     edi
0x6DABE2: pop     esi
0x6DABE3: pop     ebx
0x6DABE4: retn    4
