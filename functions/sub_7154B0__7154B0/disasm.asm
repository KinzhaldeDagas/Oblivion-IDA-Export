0x7154B0: push    ebx
0x7154B1: push    esi
0x7154B2: push    edi
0x7154B3: mov     esi, ecx
0x7154B5: call    sub_7152A0
0x7154BA: mov     edi, [esp+0Ch+arg_0]
0x7154BE: mov     eax, [edi+220h]
0x7154C4: mov     edx, [eax+8]
0x7154C7: push    1
0x7154C9: lea     ecx, [esp+10h+arg_0]
0x7154CD: push    ecx
0x7154CE: mov     ebx, 4
0x7154D3: push    ebx
0x7154D4: push    esi
0x7154D5: push    eax
0x7154D6: mov     [esp+20h+arg_0], ebx
0x7154DA: call    edx
0x7154DC: mov     eax, [edi+220h]
0x7154E2: push    1
0x7154E4: lea     ecx, [esp+24h+arg_0]
0x7154E8: push    ecx
0x7154E9: push    ebx
0x7154EA: lea     edx, [esi+4]
0x7154ED: push    edx
0x7154EE: push    eax
0x7154EF: mov     eax, [eax+8]
0x7154F2: mov     [esp+34h+arg_0], ebx
0x7154F6: call    eax
0x7154F8: mov     eax, [edi+220h]
0x7154FE: push    1
0x715500: lea     ecx, [esp+38h+arg_0]
0x715504: push    ecx
0x715505: push    ebx
0x715506: lea     edx, [esi+8]
0x715509: push    edx
0x71550A: push    eax
0x71550B: mov     eax, [eax+8]
0x71550E: mov     [esp+48h+arg_0], ebx
0x715512: call    eax
0x715514: mov     edi, [edi+220h]
0x71551A: mov     edx, [edi+8]
0x71551D: push    1
0x71551F: lea     ecx, [esp+4Ch+arg_0]
0x715523: push    ecx
0x715524: push    ebx
0x715525: add     esi, 0Ch
0x715528: push    esi
0x715529: push    edi
0x71552A: mov     [esp+5Ch+arg_0], ebx
0x71552E: call    edx
0x715530: add     esp, 50h
0x715533: pop     edi
0x715534: pop     esi
0x715535: pop     ebx
0x715536: retn    4
