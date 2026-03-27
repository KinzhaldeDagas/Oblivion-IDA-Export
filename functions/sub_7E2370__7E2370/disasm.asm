0x7E2370: mov     eax, [esp+arg_4]
0x7E2374: mov     cx, [esp+arg_8]
0x7E2379: mov     dl, [esp+arg_C]
0x7E237D: push    ebx
0x7E237E: push    esi
0x7E237F: mov     esi, [esp+8+arg_0]
0x7E2383: xor     ebx, ebx
0x7E2385: mov     [esi], eax
0x7E2387: mov     al, [esp+8+arg_10]
0x7E238B: cmp     al, bl
0x7E238D: mov     [esi+4], cx
0x7E2391: mov     [esi+8], al
0x7E2394: mov     [esi+6], dl
0x7E2397: mov     [esi+7], bl
0x7E239A: mov     [esi+0Ch], ebx
0x7E239D: jbe     short loc_7E23EA
0x7E239F: push    edi
0x7E23A0: movzx   edi, al
0x7E23A3: xor     ecx, ecx
0x7E23A5: mov     eax, edi
0x7E23A7: mov     edx, 4
0x7E23AC: mul     edx
0x7E23AE: seto    cl
0x7E23B1: neg     ecx
0x7E23B3: or      ecx, eax
0x7E23B5: push    ecx; Size
0x7E23B6: call    FormHeapAlloc
0x7E23BB: mov     [esi+0Ch], eax
0x7E23BE: add     esp, 4
0x7E23C1: xor     eax, eax
0x7E23C3: cmp     edi, ebx
0x7E23C5: jle     short loc_7E23E1
0x7E23C7: jmp     short loc_7E23D0
0x7E23C9: align 10h
0x7E23D0: mov     edx, [esp+eax*4+0Ch+arg_14]
0x7E23D4: mov     ecx, [esi+0Ch]
0x7E23D7: mov     [ecx+eax*4], edx
0x7E23DA: add     eax, 1
0x7E23DD: cmp     eax, edi
0x7E23DF: jl      short loc_7E23D0
0x7E23E1: pop     edi
0x7E23E2: mov     [esi+9], bl
0x7E23E5: mov     eax, esi
0x7E23E7: pop     esi
0x7E23E8: pop     ebx
0x7E23E9: retn
0x7E23EA: mov     [esi+9], bl
0x7E23ED: mov     eax, esi
0x7E23EF: pop     esi
0x7E23F0: pop     ebx
0x7E23F1: retn
