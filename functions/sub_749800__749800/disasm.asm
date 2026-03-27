0x749800: push    ebx
0x749801: push    ebp
0x749802: push    esi
0x749803: mov     esi, ecx
0x749805: mov     eax, [esi]
0x749807: mov     edx, [eax+4]
0x74980A: push    edi
0x74980B: call    edx
0x74980D: mov     ebp, [esp+10h+arg_0]
0x749811: mov     edi, eax
0x749813: mov     ebx, [edi+8]
0x749816: cmp     ebx, [ebp+0]
0x749819: jz      short loc_74984F
0x74981B: test    ebx, ebx
0x74981D: jz      short loc_74983B
0x74981F: lea     eax, [ebx+4]
0x749822: push    eax; lpAddend
0x749823: call    dword ptr ds:0A2807Ch
0x749829: test    eax, eax
0x74982B: jnz     short loc_74983B
0x74982D: test    ebx, ebx
0x74982F: jz      short loc_74983B
0x749831: mov     edx, [ebx]
0x749833: mov     eax, [edx]
0x749835: push    1
0x749837: mov     ecx, ebx
0x749839: call    eax
0x74983B: mov     eax, [ebp+0]
0x74983E: test    eax, eax
0x749840: mov     [edi+8], eax
0x749843: jz      short loc_74984F
0x749845: add     eax, 4
0x749848: push    eax; lpAddend
0x749849: call    dword ptr ds:0A28078h
0x74984F: mov     dword ptr [edi+4], 0
0x749856: mov     ecx, [esi+4]
0x749859: mov     [edi], ecx
0x74985B: mov     eax, [esi+4]
0x74985E: test    eax, eax
0x749860: jz      short loc_749873
0x749862: mov     [eax+4], edi
0x749865: add     dword ptr [esi+0Ch], 1
0x749869: mov     [esi+4], edi
0x74986C: pop     edi
0x74986D: pop     esi
0x74986E: pop     ebp
0x74986F: pop     ebx
0x749870: retn    4
0x749873: add     dword ptr [esi+0Ch], 1
0x749877: mov     [esi+8], edi
0x74987A: mov     [esi+4], edi
0x74987D: pop     edi
0x74987E: pop     esi
0x74987F: pop     ebp
0x749880: pop     ebx
0x749881: retn    4
