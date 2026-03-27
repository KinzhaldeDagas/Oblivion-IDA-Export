0x8DC770: push    ebx
0x8DC771: push    esi
0x8DC772: mov     esi, [esp+8+arg_0]
0x8DC776: push    edi
0x8DC777: mov     edi, [esi+0ECh]
0x8DC77D: dec     edi
0x8DC77E: js      short loc_8DC79A
0x8DC780: mov     ebx, [esp+0Ch+arg_4]
0x8DC784: mov     eax, [esi+0E8h]
0x8DC78A: mov     ecx, [eax+edi*4]
0x8DC78D: test    ecx, ecx
0x8DC78F: jz      short loc_8DC797
0x8DC791: mov     edx, [ecx]
0x8DC793: push    ebx
0x8DC794: call    dword ptr [edx+8]
0x8DC797: dec     edi
0x8DC798: jns     short loc_8DC784
0x8DC79A: mov     edx, [esi+0ECh]
0x8DC7A0: dec     edx
0x8DC7A1: js      short loc_8DC7ED
0x8DC7A3: mov     eax, [esi+0E8h]
0x8DC7A9: cmp     dword ptr [eax+edx*4], 0
0x8DC7AD: jnz     short loc_8DC7EA
0x8DC7AF: mov     ebx, [esi+0ECh]
0x8DC7B5: dec     ebx
0x8DC7B6: mov     ecx, ebx
0x8DC7B8: cmp     edx, ecx
0x8DC7BA: mov     [esi+0ECh], ebx
0x8DC7C0: mov     eax, edx
0x8DC7C2: jge     short loc_8DC7EA
0x8DC7C4: jmp     short loc_8DC7D0
0x8DC7C6: align 10h
0x8DC7D0: mov     ecx, [esi+0E8h]
0x8DC7D6: mov     edi, [ecx+eax*4+4]
0x8DC7DA: lea     ecx, [ecx+eax*4]
0x8DC7DD: mov     [ecx], edi
0x8DC7DF: mov     ecx, [esi+0ECh]
0x8DC7E5: inc     eax
0x8DC7E6: cmp     eax, ecx
0x8DC7E8: jl      short loc_8DC7D0
0x8DC7EA: dec     edx
0x8DC7EB: jns     short loc_8DC7A3
0x8DC7ED: pop     edi
0x8DC7EE: pop     esi
0x8DC7EF: pop     ebx
0x8DC7F0: retn
