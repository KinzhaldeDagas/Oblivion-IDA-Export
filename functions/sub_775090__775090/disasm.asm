0x775090: push    ebx
0x775091: mov     ebx, [esp+4+arg_0]
0x775095: test    ebx, ebx
0x775097: jnz     short loc_77509F
0x775099: xor     eax, eax
0x77509B: pop     ebx
0x77509C: retn    4
0x77509F: mov     eax, [ecx+14h]
0x7750A2: mov     ecx, [eax]
0x7750A4: lea     edx, [eax+8]
0x7750A7: mov     eax, [edx]
0x7750A9: sub     eax, ebx
0x7750AB: push    ebp
0x7750AC: cdq
0x7750AD: push    esi
0x7750AE: mov     esi, eax
0x7750B0: xor     esi, edx
0x7750B2: sub     esi, edx
0x7750B4: xor     ebp, ebp
0x7750B6: test    ecx, ecx
0x7750B8: jz      short loc_7750DE
0x7750BA: push    edi
0x7750BB: jmp     short loc_7750C0
0x7750BD: align 10h
0x7750C0: mov     edi, [ecx+8]
0x7750C3: lea     eax, [ecx+8]
0x7750C6: mov     ecx, [ecx]
0x7750C8: mov     eax, edi
0x7750CA: sub     eax, ebx
0x7750CC: cdq
0x7750CD: xor     eax, edx
0x7750CF: sub     eax, edx
0x7750D1: cmp     eax, esi
0x7750D3: jnb     short loc_7750D9
0x7750D5: mov     esi, eax
0x7750D7: mov     ebp, edi
0x7750D9: test    ecx, ecx
0x7750DB: jnz     short loc_7750C0
0x7750DD: pop     edi
0x7750DE: pop     esi
0x7750DF: mov     eax, ebp
0x7750E1: pop     ebp
0x7750E2: pop     ebx
0x7750E3: retn    4
