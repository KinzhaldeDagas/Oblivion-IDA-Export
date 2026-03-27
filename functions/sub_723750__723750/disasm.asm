0x723750: push    ebx
0x723751: push    esi
0x723752: mov     ebx, ecx
0x723754: mov     esi, [ebx+0FCh]
0x72375A: push    edi
0x72375B: mov     edi, [esp+0Ch+arg_0]
0x72375F: cmp     esi, edi
0x723761: jz      short loc_723797
0x723763: test    esi, esi
0x723765: jz      short loc_723783
0x723767: lea     eax, [esi+4]
0x72376A: push    eax; lpAddend
0x72376B: call    dword ptr ds:0A2807Ch
0x723771: test    eax, eax
0x723773: jnz     short loc_723783
0x723775: test    esi, esi
0x723777: jz      short loc_723783
0x723779: mov     edx, [esi]
0x72377B: mov     eax, [edx]
0x72377D: push    1
0x72377F: mov     ecx, esi
0x723781: call    eax
0x723783: test    edi, edi
0x723785: mov     [ebx+0FCh], edi
0x72378B: jz      short loc_723797
0x72378D: add     edi, 4
0x723790: push    edi; lpAddend
0x723791: call    dword ptr ds:0A28078h
0x723797: pop     edi
0x723798: pop     esi
0x723799: pop     ebx
0x72379A: retn    4
