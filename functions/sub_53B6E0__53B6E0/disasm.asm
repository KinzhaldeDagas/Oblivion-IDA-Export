0x53B6E0: push    ebx
0x53B6E1: push    esi
0x53B6E2: push    edi
0x53B6E3: mov     ebx, ecx
0x53B6E5: xor     edi, edi
0x53B6E7: mov     esi, [ebx+edi*4+8]
0x53B6EB: test    esi, esi
0x53B6ED: jz      short loc_53B713
0x53B6EF: lea     eax, [esi+4]
0x53B6F2: push    eax; lpAddend
0x53B6F3: call    dword ptr ds:0A2807Ch
0x53B6F9: test    eax, eax
0x53B6FB: jnz     short loc_53B70B
0x53B6FD: test    esi, esi
0x53B6FF: jz      short loc_53B70B
0x53B701: mov     edx, [esi]
0x53B703: mov     eax, [edx]
0x53B705: push    1
0x53B707: mov     ecx, esi
0x53B709: call    eax
0x53B70B: mov     dword ptr [ebx+edi*4+8], 0
0x53B713: lea     eax, [edi+1]
0x53B716: xor     edx, edx
0x53B718: mov     ecx, 3
0x53B71D: div     ecx
0x53B71F: mov     edi, edx
0x53B721: cmp     edi, 2
0x53B724: jl      short loc_53B6E7
0x53B726: pop     edi
0x53B727: pop     esi
0x53B728: pop     ebx
0x53B729: retn
