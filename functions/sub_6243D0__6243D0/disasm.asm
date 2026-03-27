0x6243D0: push    ebx
0x6243D1: mov     ebx, [esp+4+arg_0]
0x6243D5: test    ebx, ebx
0x6243D7: push    edi
0x6243D8: mov     edi, ecx
0x6243DA: jz      loc_62446C
0x6243E0: push    ebp
0x6243E1: push    esi
0x6243E2: mov     esi, [edi+40h]
0x6243E5: call    sub_6135F0
0x6243EA: mov     ebp, eax
0x6243EC: mov     eax, [esi]
0x6243EE: test    eax, eax
0x6243F0: jz      short loc_624410
0x6243F2: cmp     dword ptr [esi+4], 0
0x6243F6: jnz     short loc_624410
0x6243F8: cmp     [eax], ebx
0x6243FA: jnz     short loc_62446A
0x6243FC: cmp     byte ptr [eax+8], 0
0x624400: jnz     short loc_62446A
0x624402: mov     ecx, [esp+10h+arg_4]
0x624406: pop     esi
0x624407: pop     ebp
0x624408: pop     edi
0x624409: mov     [eax+4], ecx
0x62440C: pop     ebx
0x62440D: retn    8
0x624410: mov     eax, [esi+4]
0x624413: test    eax, eax
0x624415: jnz     short loc_62441B
0x624417: cmp     [esi], eax
0x624419: jz      short loc_62446A
0x62441B: mov     esi, [esi]
0x62441D: cmp     [esi], ebx
0x62441F: jnz     short loc_624427
0x624421: cmp     byte ptr [esi+8], 0
0x624425: jz      short loc_624434
0x624427: mov     esi, eax
0x624429: test    esi, esi
0x62442B: jnz     short loc_624410
0x62442D: pop     esi
0x62442E: pop     ebp
0x62442F: pop     edi
0x624430: pop     ebx
0x624431: retn    8
0x624434: mov     al, [esi+8]
0x624437: mov     edx, [esp+10h+arg_4]
0x62443B: neg     al
0x62443D: sbb     eax, eax
0x62443F: and     eax, ds:0B37210h
0x624445: add     eax, edx
0x624447: cmp     [esi+4], eax
0x62444A: jz      short loc_624456
0x62444C: mov     ecx, edi
0x62444E: mov     [esi+4], eax
0x624451: call    sub_619C90
0x624456: mov     ecx, edi
0x624458: call    sub_6135F0
0x62445D: cmp     ebp, eax
0x62445F: jz      short loc_62446A
0x624461: push    1
0x624463: mov     ecx, edi
0x624465: call    sub_624030
0x62446A: pop     esi
0x62446B: pop     ebp
0x62446C: pop     edi
0x62446D: pop     ebx
0x62446E: retn    8
