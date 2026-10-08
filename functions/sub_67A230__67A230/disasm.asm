0x67A230: push    esi
0x67A231: lea     esi, [ecx+60h]
0x67A234: push    offset CompareActorDistanceToPlayer
0x67A239: mov     ecx, esi
0x67A23B: call    BSSimpleList_SortViaArrayAndRebuild
0x67A240: mov     eax, esi; MEF v56 periodic trim shares checked suffix helper; success67A285, fallback explicitly resumes67A246 after displacedMOV/XOR/TEST. Emitted test caught unsafe assembler symbol+6 expression; dedicated continuation constant now used and verified. Original timer/unsigned budget and sorting retained.
0x67A242: xor     ecx, ecx
0x67A244: test    eax, eax
0x67A246: jz      short loc_67A285
0x67A248: cmp     dword ptr [eax], 0
0x67A24B: jz      short loc_67A250
0x67A24D: add     ecx, 1
0x67A250: mov     eax, [eax+4]
0x67A253: test    eax, eax
0x67A255: jnz     short loc_67A248
0x67A257: cmp     ecx, ds:0B36CD0h
0x67A25D: jbe     short loc_67A285
0x67A25F: mov     eax, esi
0x67A261: test    eax, eax
0x67A263: jz      short loc_67A240; MEF LARGE PERF 2026-09-08: PERF-7 second trim loop after actor-distance sort uses the same recount/tail/Remove pattern.6-byte window8BC633C985C0 starts at loop entry, with ESI embedded head; completion67A285 restoresESI. Player caller ignores incidentalEAX. Coordinate both trim paths with one proved unique/dense suffix-trim contract.
0x67A265: cmp     dword ptr [eax], 0
0x67A268: jz      short loc_67A240; MEF LARGE PERF 2026-09-08: PERF-7 second trim loop after actor-distance sort uses the same recount/tail/Remove pattern.6-byte window8BC633C985C0 starts at loop entry, with ESI embedded head; completion67A285 restoresESI. Player caller ignores incidentalEAX. Coordinate both trim paths with one proved unique/dense suffix-trim contract.
0x67A26A: mov     ecx, [eax+4]
0x67A26D: test    ecx, ecx
0x67A26F: jz      short loc_67A279
0x67A271: mov     eax, ecx
0x67A273: test    eax, eax
0x67A275: jnz     short loc_67A265
0x67A277: jmp     short loc_67A240; MEF LARGE PERF 2026-09-08: PERF-7 second trim loop after actor-distance sort uses the same recount/tail/Remove pattern.6-byte window8BC633C985C0 starts at loop entry, with ESI embedded head; completion67A285 restoresESI. Player caller ignores incidentalEAX. Coordinate both trim paths with one proved unique/dense suffix-trim contract.
0x67A279: mov     eax, [eax]
0x67A27B: push    eax
0x67A27C: mov     ecx, esi
0x67A27E: call    BSSimpleList_Remove
0x67A283: jmp     short loc_67A240; MEF LARGE PERF 2026-09-08: PERF-7 second trim loop after actor-distance sort uses the same recount/tail/Remove pattern.6-byte window8BC633C985C0 starts at loop entry, with ESI embedded head; completion67A285 restoresESI. Player caller ignores incidentalEAX. Coordinate both trim paths with one proved unique/dense suffix-trim contract.
0x67A285: pop     esi
0x67A286: retn
