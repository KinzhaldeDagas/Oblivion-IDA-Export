0x6772E0: push    ebx
0x6772E1: push    ebp
0x6772E2: push    esi
0x6772E3: push    edi
0x6772E4: mov     ebp, ecx
0x6772E6: xor     ebx, ebx
0x6772E8: mov     eax, ebx
0x6772EA: sub     eax, 0
0x6772ED: jz      short loc_6772F8
0x6772EF: sub     eax, 1
0x6772F2: jnz     short loc_67734F
0x6772F4: push    2
0x6772F6: jmp     short loc_6772FA
0x6772F8: push    3; a2
0x6772FA: mov     ecx, ebp; this
0x6772FC: call    sub_673A50
0x677301: test    eax, eax
0x677303: jz      short loc_67734F
0x677305: mov     ecx, eax; this
0x677307: call    sub_7616D0
0x67730C: mov     edi, eax
0x67730E: test    edi, edi
0x677310: jz      short loc_67734F
0x677312: mov     esi, [edi]
0x677314: test    esi, esi
0x677316: jz      short loc_677348
0x677318: mov     eax, [esi]
0x67731A: mov     edx, [eax+190h]
0x677320: mov     ecx, esi
0x677322: call    edx
0x677324: test    al, al
0x677326: jz      short loc_677348
0x677328: mov     eax, [esi]
0x67732A: mov     edx, [eax+198h]
0x677330: push    0
0x677332: mov     ecx, esi
0x677334: call    edx
0x677336: test    al, al
0x677338: jnz     short loc_677348
0x67733A: mov     eax, [esi]
0x67733C: mov     edx, [eax+184h]
0x677342: push    1
0x677344: mov     ecx, esi
0x677346: call    edx
0x677348: mov     edi, [edi+4]
0x67734B: test    edi, edi
0x67734D: jnz     short loc_677312
0x67734F: add     ebx, 1
0x677352: cmp     ebx, 2
0x677355: jl      short loc_6772E8
0x677357: pop     edi
0x677358: pop     esi
0x677359: pop     ebp
0x67735A: pop     ebx
0x67735B: retn
