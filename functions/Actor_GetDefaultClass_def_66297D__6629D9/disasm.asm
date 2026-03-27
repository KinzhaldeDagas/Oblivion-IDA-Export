0x6629D9: lea     eax, [esi-3]; jumptable 0066297D default case
0x6629DC: cmp     eax, 3
0x6629DF: ja      short Actor_GetDefaultClass___def_6629E1
0x6629E1: jmp     ds:jpt_6629E1[eax*4]; switch jump
0x6629E8: mov     eax, ds:0B37C50h; jumptable 006629E1 case 6
0x6629ED: push    eax
0x6629EE: jmp     short loc_662A2D
0x6629F0: cmp     edi, 1; jumptable 006629E1 case 5
0x6629F3: jnz     short loc_6629FE
0x6629F5: mov     ecx, ds:0B37C58h
0x6629FB: push    ecx
0x6629FC: jmp     short loc_662A2D
0x6629FE: mov     edx, ds:0B37C48h
0x662A04: jmp     short loc_662A2C
0x662A06: cmp     edi, 2; jumptable 006629E1 case 4
0x662A09: jnz     short loc_662A13
0x662A0B: mov     eax, ds:0B37CD0h
0x662A10: push    eax
0x662A11: jmp     short loc_662A2D
0x662A13: mov     ecx, ds:0B37C60h
0x662A19: push    ecx
0x662A1A: jmp     short loc_662A2D
0x662A1C: cmp     edi, 3; jumptable 006629E1 case 3
0x662A1F: jg      short Actor_GetDefaultClass___def_6629E1
0x662A21: cmp     ebp, 3
0x662A24: jg      short Actor_GetDefaultClass___def_6629E1
0x662A26: mov     edx, ds:0B37C80h
0x662A2C: push    edx
0x662A2D: mov     ecx, ds:0B33A98h
0x662A33: call    TESDataHandler_LookupTESClassByFormID
0x662A38: mov     [ebx+650h], eax
