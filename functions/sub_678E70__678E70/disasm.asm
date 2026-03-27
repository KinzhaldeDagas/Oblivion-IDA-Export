0x678E70: push    ecx
0x678E71: push    ebx
0x678E72: push    esi
0x678E73: xor     eax, eax
0x678E75: cmp     [ecx+4Ch], eax
0x678E78: lea     esi, [ecx+48h]
0x678E7B: push    edi
0x678E7C: mov     [esp+10h+var_4], eax
0x678E80: jnz     short loc_678E91
0x678E82: xor     edi, edi
0x678E84: cmp     [esi], edi
0x678E86: mov     eax, 1
0x678E8B: jnz     short loc_678E95
0x678E8D: mov     bl, al
0x678E8F: jmp     short loc_678E97
0x678E91: mov     edi, [esp+10h+arg_4]
0x678E95: xor     bl, bl
0x678E97: test    al, 1
0x678E99: jz      short loc_678EB7
0x678E9B: test    edi, edi
0x678E9D: jz      short loc_678EB7
0x678E9F: lea     eax, [edi+4]
0x678EA2: push    eax; lpAddend
0x678EA3: call    dword ptr ds:0A2807Ch
0x678EA9: test    eax, eax
0x678EAB: jnz     short loc_678EB7
0x678EAD: mov     edx, [edi]
0x678EAF: mov     eax, [edx]
0x678EB1: push    1
0x678EB3: mov     ecx, edi
0x678EB5: call    eax
0x678EB7: test    bl, bl
0x678EB9: jnz     short loc_678F3A
0x678EBB: mov     ebx, esi
0x678EBD: test    ebx, ebx
0x678EBF: jz      short loc_678F3A
0x678EC1: push    ebp
0x678EC2: mov     ebp, [esp+14h+arg_4]
0x678EC6: lea     ecx, [esp+14h+arg_4]
0x678ECA: push    ecx
0x678ECB: mov     ecx, ebx
0x678ECD: call    sub_677C70
0x678ED2: mov     esi, [eax]
0x678ED4: mov     eax, [esp+14h+arg_4]
0x678ED8: test    eax, eax
0x678EDA: jz      short loc_678EFA
0x678EDC: mov     edi, eax
0x678EDE: add     eax, 4
0x678EE1: push    eax; lpAddend
0x678EE2: call    dword ptr ds:0A2807Ch
0x678EE8: test    eax, eax
0x678EEA: jnz     short loc_678EFA
0x678EEC: test    edi, edi
0x678EEE: jz      short loc_678EFA
0x678EF0: mov     edx, [edi]
0x678EF2: mov     eax, [edx]
0x678EF4: push    1
0x678EF6: mov     ecx, edi
0x678EF8: call    eax
0x678EFA: test    esi, esi
0x678EFC: jz      short loc_678F32
0x678EFE: mov     edx, [esi]
0x678F00: mov     eax, [edx+4]
0x678F03: mov     ecx, esi
0x678F05: call    eax
0x678F07: test    eax, eax
0x678F09: jz      short loc_678F32
0x678F0B: jmp     short loc_678F10
0x678F0D: align 10h
0x678F10: cmp     eax, offset unk_B3C0D4
0x678F15: jz      short loc_678F20
0x678F17: mov     eax, [eax+4]
0x678F1A: test    eax, eax
0x678F1C: jnz     short loc_678F10
0x678F1E: jmp     short loc_678F32
0x678F20: mov     ecx, [esp+14h+arg_0]
0x678F24: cmp     [esi+1Ch], ecx
0x678F27: jnz     short loc_678F32
0x678F29: cmp     [esi+34h], ebp
0x678F2C: jnz     short loc_678F32
0x678F2E: mov     byte ptr [esi+24h], 1
0x678F32: mov     ebx, [ebx+4]
0x678F35: test    ebx, ebx
0x678F37: jnz     short loc_678EC6
0x678F39: pop     ebp
0x678F3A: pop     edi
0x678F3B: pop     esi
0x678F3C: pop     ebx
0x678F3D: pop     ecx
0x678F3E: retn    8
