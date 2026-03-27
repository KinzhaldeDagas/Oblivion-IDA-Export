0x7472B0: push    esi
0x7472B1: mov     esi, eax
0x7472B3: mov     ecx, [esi+0B14h]
0x7472B9: lea     eax, [esi+8Ch]
0x7472BF: push    esi
0x7472C0: call    sub_746110
0x7472C5: mov     ecx, [esi+0B20h]
0x7472CB: lea     eax, [esi+980h]
0x7472D1: push    esi
0x7472D2: call    sub_746110
0x7472D7: lea     eax, [esi+0B28h]
0x7472DD: push    eax
0x7472DE: call    sub_7470B0
0x7472E3: add     esp, 0Ch
0x7472E6: mov     eax, 12h
0x7472EB: jmp     short loc_7472F0
0x7472ED: align 10h
0x7472F0: movzx   ecx, ds:byte_A849FC[eax]
0x7472F7: cmp     word ptr [esi+ecx*4+0A76h], 0
0x747300: jnz     short loc_74736D
0x747302: movzx   edx, ds:byte_A849FB[eax]
0x747309: cmp     word ptr [esi+edx*4+0A76h], 0
0x747312: jnz     short loc_74734C
0x747314: movzx   ecx, ds:byte_A849FA[eax]
0x74731B: cmp     word ptr [esi+ecx*4+0A76h], 0
0x747324: jnz     short loc_74735B
0x747326: movzx   edx, ds:byte_A849F9[eax]
0x74732D: cmp     word ptr [esi+edx*4+0A76h], 0
0x747336: jnz     short loc_74736A
0x747338: sub     eax, 4
0x74733B: cmp     eax, 3
0x74733E: jge     short loc_7472F0
0x747340: lea     ecx, [eax+eax*2+11h]
0x747344: add     [esi+16A0h], ecx
0x74734A: pop     esi
0x74734B: retn
0x74734C: sub     eax, 1
0x74734F: lea     ecx, [eax+eax*2+11h]
0x747353: add     [esi+16A0h], ecx
0x747359: pop     esi
0x74735A: retn
0x74735B: sub     eax, 2
0x74735E: lea     ecx, [eax+eax*2+11h]
0x747362: add     [esi+16A0h], ecx
0x747368: pop     esi
0x747369: retn
0x74736A: sub     eax, 3
0x74736D: lea     ecx, [eax+eax*2+11h]
0x747371: add     [esi+16A0h], ecx
0x747377: pop     esi
0x747378: retn
