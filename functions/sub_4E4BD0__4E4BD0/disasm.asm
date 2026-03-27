0x4E4BD0: push    ebx
0x4E4BD1: push    esi
0x4E4BD2: mov     esi, ecx
0x4E4BD4: push    edi
0x4E4BD5: mov     edi, [esi+1Ch]
0x4E4BD8: xor     ebx, ebx
0x4E4BDA: cmp     edi, ebx
0x4E4BDC: jz      short loc_4E4BFD
0x4E4BDE: lea     eax, [edi+4]
0x4E4BE1: push    eax; lpAddend
0x4E4BE2: call    dword ptr ds:0A2807Ch
0x4E4BE8: test    eax, eax
0x4E4BEA: jnz     short loc_4E4BFA
0x4E4BEC: cmp     edi, ebx
0x4E4BEE: jz      short loc_4E4BFA
0x4E4BF0: mov     edx, [edi]
0x4E4BF2: mov     eax, [edx]
0x4E4BF4: push    1
0x4E4BF6: mov     ecx, edi
0x4E4BF8: call    eax
0x4E4BFA: mov     [esi+1Ch], ebx
0x4E4BFD: pop     edi
0x4E4BFE: mov     [esi+20h], ebx
0x4E4C01: mov     [esi+24h], ebx
0x4E4C04: mov     [esi+30h], bx
0x4E4C08: mov     ecx, esi
0x4E4C0A: pop     esi
0x4E4C0B: pop     ebx
0x4E4C0C: jmp     j_TESForm_InitializeComponents
