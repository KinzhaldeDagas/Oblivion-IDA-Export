0x9584F0: push    ebx
0x9584F1: mov     ebx, [esp+4+arg_4]
0x9584F5: push    esi
0x9584F6: mov     esi, [esp+8+arg_0]
0x9584FA: cmp     esi, ebx
0x9584FC: jnb     short loc_95854C
0x9584FE: push    edi
0x9584FF: mov     edi, [esp+0Ch+arg_8]
0x958503: mov     eax, [esi]
0x958505: push    eax
0x958506: push    eax
0x958507: mov     ecx, edi
0x958509: call    sub_8B0E80
0x95850E: mov     eax, [esi]
0x958510: movsx   eax, byte ptr [eax]
0x958513: add     eax, 0FFFFFFBBh; switch 44 cases
0x958516: cmp     eax, 2Bh
0x958519: ja      short def_958522; jumptable 00958522 default case, cases 70-75,78,79,81,82,85-107,109-111
0x95851B: movzx   ecx, ds:byte_958564[eax]
0x958522: jmp     ds:jpt_958522[ecx*4]; switch jump
0x958529: add     esi, 0Ch; jumptable 00958522 cases 69,83,84,108
0x95852C: jmp     short loc_958547
0x95852E: mov     eax, [esi+0Ch]; jumptable 00958522 case 76
0x958531: push    eax
0x958532: push    eax
0x958533: mov     ecx, edi
0x958535: call    sub_8B0E80
0x95853A: add     esi, 10h
0x95853D: jmp     short loc_958547
0x95853F: add     esi, 8; jumptable 00958522 case 77
0x958542: jmp     short loc_958547
0x958544: add     esi, 4; jumptable 00958522 cases 80,112
0x958547: cmp     esi, ebx
0x958549: jb      short loc_958503
0x95854B: pop     edi; jumptable 00958522 default case, cases 70-75,78,79,81,82,85-107,109-111
0x95854C: pop     esi
0x95854D: pop     ebx
0x95854E: retn
