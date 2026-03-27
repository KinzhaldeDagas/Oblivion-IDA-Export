0x7583A0: push    ebx
0x7583A1: mov     ebx, [esp+4+a2]
0x7583A5: push    esi
0x7583A6: push    ebx; a2
0x7583A7: mov     esi, ecx
0x7583A9: call    sub_700670
0x7583AE: test    al, al
0x7583B0: jnz     short loc_7583B9
0x7583B2: pop     esi
0x7583B3: xor     al, al
0x7583B5: pop     ebx
0x7583B6: retn    4
0x7583B9: mov     ecx, [esi+8]
0x7583BC: cmp     [ebx+8], ecx
0x7583BF: jnz     short loc_7583B2
0x7583C1: mov     eax, [esi+10h]
0x7583C4: cmp     [ebx+10h], eax
0x7583C7: jnz     short loc_7583B2
0x7583C9: mov     edx, [ebx+18h]
0x7583CC: cmp     edx, [esi+18h]
0x7583CF: jnz     short loc_7583B2
0x7583D1: mov     dl, [ebx+14h]
0x7583D4: cmp     dl, [esi+14h]
0x7583D7: jnz     short loc_7583B2
0x7583D9: push    ebp
0x7583DA: mov     ebp, ds:0B3D4A0h[eax*4]
0x7583E1: push    edi
0x7583E2: xor     edi, edi
0x7583E4: test    ecx, ecx
0x7583E6: jbe     short loc_758414
0x7583E8: jmp     short loc_7583F0
0x7583EA: align 10h
0x7583F0: movzx   eax, byte ptr [esi+14h]
0x7583F4: mov     ecx, [esi+0Ch]
0x7583F7: imul    eax, edi
0x7583FA: mov     edx, [ebx+0Ch]
0x7583FD: add     ecx, eax
0x7583FF: add     edx, eax
0x758401: push    ecx
0x758402: push    edx
0x758403: call    ebp ; dword_B3D4A0
0x758405: add     esp, 8
0x758408: test    al, al
0x75840A: jz      short loc_75844D
0x75840C: add     edi, 1
0x75840F: cmp     edi, [esi+8]
0x758412: jb      short loc_7583F0
0x758414: xor     edi, edi
0x758416: cmp     [esi+18h], edi
0x758419: jbe     short loc_758444
0x75841B: jmp     short loc_758420
0x75841D: align 10h
0x758420: movzx   eax, byte ptr [esi+24h]
0x758424: mov     ecx, [esi+1Ch]
0x758427: imul    eax, edi
0x75842A: mov     edx, [ebx+1Ch]
0x75842D: add     ecx, eax
0x75842F: add     edx, eax
0x758431: push    ecx
0x758432: push    edx
0x758433: call    ebp ; dword_B3D4A0
0x758435: add     esp, 8
0x758438: test    al, al
0x75843A: jz      short loc_75844D
0x75843C: add     edi, 1
0x75843F: cmp     edi, [esi+18h]
0x758442: jb      short loc_758420
0x758444: pop     edi
0x758445: pop     ebp
0x758446: pop     esi
0x758447: mov     al, 1
0x758449: pop     ebx
0x75844A: retn    4
0x75844D: pop     edi
0x75844E: pop     ebp
0x75844F: pop     esi
0x758450: xor     al, al
0x758452: pop     ebx
0x758453: retn    4
