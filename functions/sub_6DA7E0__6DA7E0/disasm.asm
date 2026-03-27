0x6DA7E0: push    ebx
0x6DA7E1: push    esi
0x6DA7E2: push    edi
0x6DA7E3: mov     edi, [esp+0Ch+arg_0]
0x6DA7E7: push    edi
0x6DA7E8: mov     esi, ecx
0x6DA7EA: call    sub_6EC2B0
0x6DA7EF: push    edi
0x6DA7F0: lea     ecx, [esi+0Ch]
0x6DA7F3: call    sub_709430
0x6DA7F8: mov     ecx, edi
0x6DA7FA: call    sub_712A90
0x6DA7FF: mov     edi, [esi+18h]
0x6DA802: mov     ebx, eax
0x6DA804: cmp     edi, ebx
0x6DA806: jz      short loc_6DA839
0x6DA808: test    edi, edi
0x6DA80A: jz      short loc_6DA828
0x6DA80C: lea     eax, [edi+4]
0x6DA80F: push    eax; lpAddend
0x6DA810: call    dword ptr ds:0A2807Ch
0x6DA816: test    eax, eax
0x6DA818: jnz     short loc_6DA828
0x6DA81A: test    edi, edi
0x6DA81C: jz      short loc_6DA828
0x6DA81E: mov     edx, [edi]
0x6DA820: mov     eax, [edx]
0x6DA822: push    1
0x6DA824: mov     ecx, edi
0x6DA826: call    eax
0x6DA828: test    ebx, ebx
0x6DA82A: mov     [esi+18h], ebx
0x6DA82D: jz      short loc_6DA839
0x6DA82F: add     ebx, 4
0x6DA832: push    ebx; lpAddend
0x6DA833: call    dword ptr ds:0A28078h
0x6DA839: pop     edi
0x6DA83A: pop     esi
0x6DA83B: pop     ebx
0x6DA83C: retn    4
