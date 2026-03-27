0x4D1340: sub     esp, 8
0x4D1343: push    ebp
0x4D1344: mov     ebp, [esp+0Ch+arg_0]
0x4D1348: test    ebp, ebp
0x4D134A: push    edi
0x4D134B: mov     edi, ecx
0x4D134D: mov     [esp+10h+var_4], edi
0x4D1351: jnz     short loc_4D135D
0x4D1353: pop     edi
0x4D1354: xor     al, al
0x4D1356: pop     ebp
0x4D1357: add     esp, 8
0x4D135A: retn    4
0x4D135D: mov     ecx, ebp
0x4D135F: call    TESFile_GetIsMaster
0x4D1364: test    al, al
0x4D1366: jnz     short loc_4D1372
0x4D1368: pop     edi
0x4D1369: mov     al, 1
0x4D136B: pop     ebp
0x4D136C: add     esp, 8
0x4D136F: retn    4
0x4D1372: push    ebx
0x4D1373: lea     ebx, [ebp+23Ch]
0x4D1379: push    esi
0x4D137A: mov     esi, ebx
0x4D137C: mov     eax, [esi]
0x4D137E: cmp     eax, ds:0B06048h
0x4D1384: jnz     short loc_4D13F0
0x4D1386: mov     ecx, [ebp+248h]
0x4D138C: cmp     ecx, [edi+0Ch]
0x4D138F: jnz     short loc_4D1407
0x4D1391: push    1
0x4D1393: mov     ecx, ebp
0x4D1395: call    TESFile_NextRecordEx; NextForm?
0x4D139A: push    ebx
0x4D139B: call    sub_4CCD00
0x4D13A0: add     esp, 4
0x4D13A3: test    al, al
0x4D13A5: jz      short loc_4D13E4
0x4D13A7: mov     edx, [ebx]
0x4D13A9: cmp     edx, ds:0B05E20h
0x4D13AF: jnz     short loc_4D1407
0x4D13B1: cmp     dword ptr [ebx+0Ch], 6
0x4D13B5: jnz     short loc_4D1407
0x4D13B7: push    1
0x4D13B9: mov     ecx, ebp
0x4D13BB: call    TESFile_NextRecordEx; NextForm?
0x4D13C0: mov     eax, [esi]
0x4D13C2: cmp     eax, ds:0B05E20h
0x4D13C8: jnz     short loc_4D1407
0x4D13CA: cmp     dword ptr [esi+0Ch], 8
0x4D13CE: jnz     short loc_4D13F0
0x4D13D0: mov     ecx, ebp
0x4D13D2: call    TESFile__NextGroup
0x4D13D7: push    esi
0x4D13D8: call    sub_4CCD00
0x4D13DD: add     esp, 4
0x4D13E0: test    al, al
0x4D13E2: jnz     short loc_4D13F0
0x4D13E4: pop     esi
0x4D13E5: pop     ebx
0x4D13E6: pop     edi
0x4D13E7: mov     al, 1
0x4D13E9: pop     ebp
0x4D13EA: add     esp, 8
0x4D13ED: retn    4
0x4D13F0: mov     ecx, ds:0B05E20h
0x4D13F6: cmp     [esi], ecx
0x4D13F8: jnz     short loc_4D1407
0x4D13FA: mov     esi, [esi+0Ch]
0x4D13FD: cmp     esi, 9
0x4D1400: jz      short loc_4D1413
0x4D1402: cmp     esi, 0Ah
0x4D1405: jz      short loc_4D1413
0x4D1407: pop     esi
0x4D1408: pop     ebx
0x4D1409: pop     edi
0x4D140A: xor     al, al
0x4D140C: pop     ebp
0x4D140D: add     esp, 8
0x4D1410: retn    4
0x4D1413: push    1
0x4D1415: mov     ecx, ebp
0x4D1417: call    TESFile_NextRecordEx; NextForm?
0x4D141C: mov     edx, ds:0BA9DE4h
0x4D1422: mov     ecx, large fs:2Ch
0x4D1429: mov     esi, [ecx+edx*4]
0x4D142C: neg     al
0x4D142E: mov     ds:0B33A9Ch, edi
0x4D1434: mov     [esp+18h+var_8], esi
0x4D1438: mov     byte ptr [esi+184h], 1
0x4D143F: sbb     eax, eax
0x4D1441: and     eax, ebx
0x4D1443: test    eax, eax
0x4D1445: jz      short loc_4D1466
0x4D1447: mov     edx, [eax]
0x4D1449: cmp     edx, ds:0B05E20h
0x4D144F: jnz     short loc_4D1466
0x4D1451: cmp     dword ptr [eax+0Ch], 9
0x4D1455: jnz     short loc_4D1466
0x4D1457: push    1
0x4D1459: mov     ecx, ebp
0x4D145B: call    TESFile_NextRecordEx; NextForm?
0x4D1460: neg     al
0x4D1462: sbb     eax, eax
0x4D1464: and     eax, ebx
0x4D1466: test    eax, eax
0x4D1468: mov     byte ptr [esi+186h], 1
0x4D146F: mov     byte ptr [esp+18h+arg_0], 1
0x4D1474: jz      loc_4D1541
0x4D147A: jmp     short loc_4D1484
0x4D147C: align 10h
0x4D1480: mov     esi, [esp+18h+var_8]
0x4D1484: mov     eax, [eax]
0x4D1486: push    eax
0x4D1487: call    TESForm_GetFormTypeFromChunkType
0x4D148C: add     esp, 4
0x4D148F: cmp     al, 31h ; '1'
0x4D1491: jb      loc_4D1541
0x4D1497: cmp     al, 34h ; '4'
0x4D1499: jbe     short loc_4D14A3
0x4D149B: cmp     al, 36h ; '6'
0x4D149D: jnz     loc_4D1541
0x4D14A3: mov     esi, [ebp+248h]
0x4D14A9: push    esi; a1
0x4D14AA: call    TESForm_LookupByFormID
0x4D14AF: add     esp, 4
0x4D14B2: push    esi
0x4D14B3: push    0; int
0x4D14B5: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4D14BA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D14BF: mov     edi, eax
0x4D14C1: push    0; int
0x4D14C3: push    edi; void *
0x4D14C4: call    OblivionDynamicCast
0x4D14C9: mov     esi, [esp+30h+var_4]
0x4D14CD: mov     ecx, ds:0B33B00h
0x4D14D3: add     esp, 14h
0x4D14D6: push    eax
0x4D14D7: push    esi
0x4D14D8: call    sub_453970
0x4D14DD: test    edi, edi
0x4D14DF: jnz     short loc_4D14FB
0x4D14E1: test    al, al
0x4D14E3: jnz     short loc_4D14FB
0x4D14E5: mov     ecx, ds:0B33A98h
0x4D14EB: push    0
0x4D14ED: push    ebp
0x4D14EE: call    TESDataHandler_LoadFormRecord
0x4D14F3: test    eax, eax
0x4D14F5: jnz     short loc_4D14FB
0x4D14F7: mov     byte ptr [esp+18h+arg_0], al
0x4D14FB: push    1
0x4D14FD: mov     ecx, ebp
0x4D14FF: call    TESFile_NextRecordEx; NextForm?
0x4D1504: test    al, al
0x4D1506: jz      short loc_4D153D
0x4D1508: mov     eax, ebx
0x4D150A: test    eax, eax
0x4D150C: jz      short loc_4D153D
0x4D150E: mov     ecx, [eax]
0x4D1510: cmp     ecx, ds:0B05E20h
0x4D1516: jnz     short loc_4D1535
0x4D1518: cmp     dword ptr [eax+0Ch], 9
0x4D151C: jnz     short loc_4D1535
0x4D151E: mov     edx, [eax+8]
0x4D1521: cmp     edx, [esi+0Ch]
0x4D1524: jnz     short loc_4D1535
0x4D1526: push    1
0x4D1528: mov     ecx, ebp
0x4D152A: call    TESFile_NextRecordEx; NextForm?
0x4D152F: test    al, al
0x4D1531: jz      short loc_4D153D
0x4D1533: mov     eax, ebx
0x4D1535: test    eax, eax
0x4D1537: jnz     loc_4D1480
0x4D153D: mov     esi, [esp+18h+var_8]
0x4D1541: mov     al, byte ptr [esp+18h+arg_0]
0x4D1545: mov     byte ptr [esi+186h], 0
0x4D154C: mov     byte ptr [esi+184h], 0
0x4D1553: pop     esi
0x4D1554: pop     ebx
0x4D1555: pop     edi
0x4D1556: mov     dword ptr ds:0B33A9Ch, 0
0x4D1560: pop     ebp
0x4D1561: add     esp, 8
0x4D1564: retn    4
