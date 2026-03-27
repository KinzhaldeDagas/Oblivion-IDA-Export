0x678D90: push    ecx
0x678D91: push    ebx
0x678D92: push    esi
0x678D93: xor     eax, eax
0x678D95: cmp     [ecx+4Ch], eax
0x678D98: lea     esi, [ecx+48h]
0x678D9B: push    edi
0x678D9C: mov     [esp+10h+var_4], eax
0x678DA0: jnz     short loc_678DB1
0x678DA2: xor     edi, edi
0x678DA4: cmp     [esi], edi
0x678DA6: mov     eax, 1
0x678DAB: jnz     short loc_678DB5
0x678DAD: mov     bl, al
0x678DAF: jmp     short loc_678DB7
0x678DB1: mov     edi, [esp+10h+arg_0]
0x678DB5: xor     bl, bl
0x678DB7: test    al, 1
0x678DB9: jz      short loc_678DD7
0x678DBB: test    edi, edi
0x678DBD: jz      short loc_678DD7
0x678DBF: lea     eax, [edi+4]
0x678DC2: push    eax; lpAddend
0x678DC3: call    dword ptr ds:0A2807Ch
0x678DC9: test    eax, eax
0x678DCB: jnz     short loc_678DD7
0x678DCD: mov     edx, [edi]
0x678DCF: mov     eax, [edx]
0x678DD1: push    1
0x678DD3: mov     ecx, edi
0x678DD5: call    eax
0x678DD7: test    bl, bl
0x678DD9: jnz     short loc_678E5A
0x678DDB: push    ebp
0x678DDC: mov     ebp, esi
0x678DDE: test    ebp, ebp
0x678DE0: jz      short loc_678E59
0x678DE2: mov     ebx, [esp+14h+arg_0]
0x678DE6: lea     ecx, [esp+14h+arg_0]
0x678DEA: push    ecx
0x678DEB: mov     ecx, ebp
0x678DED: call    sub_677C70
0x678DF2: mov     esi, [eax]
0x678DF4: mov     eax, [esp+14h+arg_0]
0x678DF8: test    eax, eax
0x678DFA: jz      short loc_678E1A
0x678DFC: mov     edi, eax
0x678DFE: add     eax, 4
0x678E01: push    eax; lpAddend
0x678E02: call    dword ptr ds:0A2807Ch
0x678E08: test    eax, eax
0x678E0A: jnz     short loc_678E1A
0x678E0C: test    edi, edi
0x678E0E: jz      short loc_678E1A
0x678E10: mov     edx, [edi]
0x678E12: mov     eax, [edx]
0x678E14: push    1
0x678E16: mov     ecx, edi
0x678E18: call    eax
0x678E1A: test    esi, esi
0x678E1C: jz      short loc_678E52
0x678E1E: mov     edx, [esi]
0x678E20: mov     eax, [edx+4]
0x678E23: mov     ecx, esi
0x678E25: call    eax
0x678E27: test    eax, eax
0x678E29: jz      short loc_678E52
0x678E2B: jmp     short loc_678E30
0x678E2D: align 10h
0x678E30: cmp     eax, offset unk_B3C0BC
0x678E35: jz      short loc_678E40
0x678E37: mov     eax, [eax+4]
0x678E3A: test    eax, eax
0x678E3C: jnz     short loc_678E30
0x678E3E: jmp     short loc_678E52
0x678E40: cmp     [esi+1Ch], ebx
0x678E43: jnz     short loc_678E52
0x678E45: mov     edx, [esi]
0x678E47: mov     eax, [edx+6Ch]
0x678E4A: mov     ecx, esi
0x678E4C: call    eax
0x678E4E: mov     byte ptr [esi+24h], 1
0x678E52: mov     ebp, [ebp+4]
0x678E55: test    ebp, ebp
0x678E57: jnz     short loc_678DE6
0x678E59: pop     ebp
0x678E5A: pop     edi
0x678E5B: pop     esi
0x678E5C: pop     ebx
0x678E5D: pop     ecx
0x678E5E: retn    4
