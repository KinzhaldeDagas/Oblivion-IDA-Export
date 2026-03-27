0x568370: mov     ecx, [esp+arg_0]
0x568374: push    ebx
0x568375: xor     bl, bl
0x568377: test    ecx, ecx
0x568379: jz      loc_568567
0x56837F: push    esi
0x568380: mov     esi, [esp+8+arg_4]
0x568384: test    esi, esi
0x568386: jz      def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x56838C: movzx   eax, byte ptr [ecx+4]
0x568390: add     eax, 0FFFFFFF0h; switch 25 cases
0x568393: cmp     eax, 18h
0x568396: ja      def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x56839C: jmp     ds:jpt_56839C[eax*4]; switch jump
0x5683A3: cmp     esi, 1; jumptable 0056839C case 18
0x5683A6: jmp     loc_568562
0x5683AB: cmp     esi, 2; jumptable 0056839C case 19
0x5683AE: jmp     loc_568562
0x5683B3: cmp     esi, 4; jumptable 0056839C case 21
0x5683B6: jmp     loc_568562
0x5683BB: cmp     esi, 6; jumptable 0056839C case 23
0x5683BE: jmp     loc_568562
0x5683C3: cmp     esi, 7; jumptable 0056839C case 24
0x5683C6: jmp     loc_568562
0x5683CB: cmp     esi, 9; jumptable 0056839C case 26
0x5683CE: jmp     loc_568562
0x5683D3: cmp     esi, 0Ah; jumptable 0056839C case 27
0x5683D6: jmp     loc_568562
0x5683DB: cmp     esi, 0Bh; jumptable 0056839C case 31
0x5683DE: jmp     loc_568562
0x5683E3: cmp     esi, 0Ch; jumptable 0056839C case 32
0x5683E6: jmp     loc_568562
0x5683EB: cmp     esi, 0Fh; jumptable 0056839C case 35
0x5683EE: jmp     loc_568562
0x5683F3: cmp     esi, 10h; jumptable 0056839C case 36
0x5683F6: jmp     loc_568562
0x5683FB: cmp     esi, 11h; jumptable 0056839C case 38
0x5683FE: jmp     loc_568562
0x568403: cmp     esi, 12h; jumptable 0056839C case 39
0x568406: jmp     loc_568562
0x56840B: cmp     esi, 13h; jumptable 0056839C case 40
0x56840E: jz      loc_568564; jumptable 0056849A cases 13,21,22
0x568414: cmp     esi, 14h
0x568417: jnz     def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x56841D: call    AlchemyItem_IsEdible
0x568422: test    al, al
0x568424: jz      def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x56842A: mov     bl, 1
0x56842C: pop     esi
0x56842D: mov     al, bl
0x56842F: pop     ebx
0x568430: retn
0x568431: cmp     esi, 8; jumptable 0056839C case 25
0x568434: jz      loc_568564; jumptable 0056849A cases 13,21,22
0x56843A: cmp     esi, 14h
0x56843D: jnz     def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x568443: test    byte ptr [ecx+7Ch], 2
0x568447: jz      def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x56844D: mov     bl, 1
0x56844F: pop     esi
0x568450: mov     al, bl
0x568452: pop     ebx
0x568453: retn
0x568454: cmp     esi, 5; jumptable 0056839C case 22
0x568457: jz      loc_568564; jumptable 0056849A cases 13,21,22
0x56845D: cmp     esi, 16h
0x568460: jmp     loc_568562
0x568465: cmp     esi, 3; jumptable 0056839C case 20
0x568468: jz      loc_568564; jumptable 0056849A cases 13,21,22
0x56846E: cmp     esi, 14h
0x568471: jle     def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x568477: cmp     esi, 16h
0x56847A: jg      def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x568480: mov     bl, 1
0x568482: pop     esi
0x568483: mov     al, bl
0x568485: pop     ebx
0x568486: retn
0x568487: lea     eax, [esi-0Dh]; jumptable 0056839C case 33
0x56848A: cmp     eax, 0Ch
0x56848D: ja      def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x568493: movzx   eax, ds:byte_5685DC[eax]
0x56849A: jmp     ds:jpt_56849A[eax*4]; switch jump
0x5684A1: movsx   eax, byte ptr [ecx+90h]; jumptable 0056849A cases 24,25
0x5684A8: cmp     eax, 5; switch 6 cases
0x5684AB: ja      def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x5684B1: jmp     ds:jpt_5684B1[eax*4]; switch jump
0x5684B8: cmp     esi, 18h; jumptable 005684B1 cases 0-3
0x5684BB: jmp     loc_568562
0x5684C0: cmp     esi, 19h; jumptable 005684B1 cases 4,5
0x5684C3: jmp     loc_568562
0x5684C8: cmp     esi, 0Eh; jumptable 0056839C case 34
0x5684CB: jmp     short loc_568468
0x5684CD: lea     eax, [esi-1Ah]; jumptable 0056839C case 16
0x5684D0: cmp     eax, 9
0x5684D3: ja      def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x5684D9: movzx   edx, ds:byte_568610[eax]
0x5684E0: jmp     ds:jpt_5684E0[edx*4]; switch jump
0x5684E7: sub     esi, 1Bh; jumptable 005684E0 cases 27-29
0x5684EA: jz      short loc_56851C
0x5684EC: sub     esi, 1
0x5684EF: jz      short loc_568509
0x5684F1: sub     esi, 1
0x5684F4: jnz     short def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x5684F6: add     ecx, 24h ; '$'
0x5684F9: call    EffectItemList_HasSelfEffect
0x5684FE: test    al, al
0x568500: jz      short def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x568502: mov     bl, 1
0x568504: pop     esi
0x568505: mov     al, bl
0x568507: pop     ebx
0x568508: retn
0x568509: add     ecx, 24h ; '$'
0x56850C: call    EffectItemList_HasTouchEffect
0x568511: test    al, al
0x568513: jz      short def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x568515: mov     bl, 1
0x568517: pop     esi
0x568518: mov     al, bl
0x56851A: pop     ebx
0x56851B: retn
0x56851C: add     ecx, 24h ; '$'
0x56851F: call    EffectItemList_HasOnTarget
0x568524: test    al, al
0x568526: jz      short def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x568528: mov     bl, 1
0x56852A: pop     esi
0x56852B: mov     al, bl
0x56852D: pop     ebx
0x56852E: retn
0x56852F: add     ecx, 24h ; '$'; jumptable 005684E0 cases 30-35
0x568532: call    EffectItemList_GetSchoolAV
0x568537: add     eax, 0FFFFFFECh; switch 6 cases
0x56853A: cmp     eax, 5
0x56853D: ja      short def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x56853F: jmp     ds:jpt_56853F[eax*4]; switch jump
0x568546: cmp     esi, 1Eh; jumptable 0056853F case 20
0x568549: jmp     short loc_568562
0x56854B: cmp     esi, 1Fh; jumptable 0056853F case 21
0x56854E: jmp     short loc_568562
0x568550: cmp     esi, 20h ; ' '; jumptable 0056853F case 22
0x568553: jmp     short loc_568562
0x568555: cmp     esi, 21h ; '!'; jumptable 0056853F case 23
0x568558: jmp     short loc_568562
0x56855A: cmp     esi, 22h ; '"'; jumptable 0056853F case 24
0x56855D: jmp     short loc_568562
0x56855F: cmp     esi, 23h ; '#'; jumptable 0056853F case 25
0x568562: jnz     short def_56839C; jumptable 0056839C default case, cases 17,28-30,37
0x568564: mov     bl, 1; jumptable 0056849A cases 13,21,22
0x568566: pop     esi; jumptable 0056839C default case, cases 17,28-30,37
0x568567: mov     al, bl
0x568569: pop     ebx
0x56856A: retn
