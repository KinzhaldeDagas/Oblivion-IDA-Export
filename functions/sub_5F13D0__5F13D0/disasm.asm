0x5F13D0: push    0FFFFFFFFh
0x5F13D2: push    offset SEH_5F13D0
0x5F13D7: mov     eax, large fs:0
0x5F13DD: push    eax
0x5F13DE: sub     esp, 0Ch
0x5F13E1: push    ebx
0x5F13E2: push    ebp
0x5F13E3: push    esi
0x5F13E4: push    edi
0x5F13E5: mov     eax, ds:0B30AACh
0x5F13EA: xor     eax, esp
0x5F13EC: push    eax; int
0x5F13ED: lea     eax, [esp+2Ch+var_C]
0x5F13F1: mov     large fs:0, eax
0x5F13F7: mov     esi, ecx
0x5F13F9: mov     [esp+2Ch+var_10], esi
0x5F13FD: lea     ebx, [esi+5Ch]
0x5F1400: mov     dword ptr [esi], offset ??_7Actor@@6BActor@@@; const Actor::`vftable'{for `Actor'}
0x5F1406: mov     dword ptr [esi+18h], offset ??_7Actor@@6BTESChildCell@@@; const Actor::`vftable'{for `TESChildCell'}
0x5F140D: mov     dword ptr [ebx], offset ??_7Actor@@6BMagicCaster@@@; const Actor::`vftable'{for `MagicCaster'}
0x5F1413: mov     dword ptr [esi+68h], offset ??_7Actor@@6BMagicTarget@@@; const Actor::`vftable'{for `MagicTarget'}
0x5F141A: mov     eax, [esi+8]
0x5F141D: shr     eax, 0Eh
0x5F1420: test    al, 1
0x5F1422: mov     [esp+2Ch+var_4], 3
0x5F142A: jnz     loc_5F1543
0x5F1430: mov     ecx, ds:0B333C4h
0x5F1436: push    esi
0x5F1437: call    sub_65DEF0
0x5F143C: mov     ecx, [esi+58h]
0x5F143F: test    ecx, ecx
0x5F1441: jz      short loc_5F1455
0x5F1443: mov     edx, [ecx]
0x5F1445: mov     eax, [edx+1B8h]
0x5F144B: call    eax
0x5F144D: test    eax, eax
0x5F144F: jz      short loc_5F1455
0x5F1451: mov     byte ptr [eax+10h], 1
0x5F1455: lea     ebp, [esi+0A4h]
0x5F145B: mov     edi, ebp
0x5F145D: test    edi, edi
0x5F145F: jz      short loc_5F1477
0x5F1461: mov     eax, [edi]
0x5F1463: test    eax, eax
0x5F1465: jz      short loc_5F1477
0x5F1467: push    eax
0x5F1468: call    FormHeapFree
0x5F146D: mov     edi, [edi+4]
0x5F1470: add     esp, 4
0x5F1473: test    edi, edi
0x5F1475: jnz     short loc_5F1461
0x5F1477: mov     ecx, ebp
0x5F1479: call    BSSimpleList_Clear
0x5F147E: push    esi
0x5F147F: mov     ecx, offset unk_B3BD7C
0x5F1484: call    sub_642B40
0x5F1489: mov     ecx, esi; int
0x5F148B: call    sub_5EAE70
0x5F1490: mov     ecx, ds:0B33A98h
0x5F1496: mov     al, [ecx+0CD4h]
0x5F149C: test    al, al
0x5F149E: jnz     short loc_5F151D
0x5F14A0: mov     ecx, ds:0B3BF80h
0x5F14A6: test    ecx, ecx
0x5F14A8: jz      short loc_5F14B0
0x5F14AA: push    esi
0x5F14AB: call    sub_6826D0
0x5F14B0: push    1
0x5F14B2: mov     ecx, esi
0x5F14B4: call    sub_65A050
0x5F14B9: push    esi
0x5F14BA: mov     ecx, offset ActorProcessManager_ptr
0x5F14BF: call    sub_679C10
0x5F14C4: push    esi
0x5F14C5: mov     ecx, offset dword_B3BDB0
0x5F14CA: call    sub_67BF00
0x5F14CF: push    esi
0x5F14D0: mov     ecx, offset ActorProcessManager_ptr
0x5F14D5: call    sub_676F90
0x5F14DA: mov     ecx, [esi+58h]
0x5F14DD: test    ecx, ecx
0x5F14DF: jz      short loc_5F151D
0x5F14E1: mov     edx, [ecx]
0x5F14E3: mov     eax, [edx+8]
0x5F14E6: call    eax
0x5F14E8: cmp     eax, 1
0x5F14EB: jz      short loc_5F14FB
0x5F14ED: mov     ecx, [esi+58h]
0x5F14F0: mov     edx, [ecx]
0x5F14F2: mov     eax, [edx+8]
0x5F14F5: call    eax
0x5F14F7: test    eax, eax
0x5F14F9: jnz     short loc_5F1516
0x5F14FB: call    InitBSShaderAccumulator
0x5F1500: test    eax, eax
0x5F1502: jz      short loc_5F150F
0x5F1504: mov     ecx, [esi+0Ch]
0x5F1507: push    ecx
0x5F1508: mov     ecx, eax
0x5F150A: call    sub_7AD1E0
0x5F150F: mov     ecx, esi
0x5F1511: call    sub_5E4FC0
0x5F1516: mov     ecx, esi
0x5F1518: call    sub_5F0750
0x5F151D: push    esi
0x5F151E: mov     ecx, offset ActorProcessManager_ptr
0x5F1523: call    sub_674E10
0x5F1528: mov     ecx, esi
0x5F152A: call    sub_5E7B90
0x5F152F: lea     ecx, [esi+88h]
0x5F1535: call    AVCollection_ClearArrayAndList
0x5F153A: push    0; a2
0x5F153C: mov     ecx, esi; this
0x5F153E: call    TESObjectREFR_Set3D
0x5F1543: lea     ecx, [esi+88h]
0x5F1549: mov     byte ptr [esp+2Ch+var_4], 2
0x5F154E: call    AVCollection_destr
0x5F1553: lea     ecx, [esi+68h]
0x5F1556: mov     byte ptr [esp+2Ch+var_4], 1
0x5F155B: call    MagicTarget_destr
0x5F1560: mov     ecx, ebx
0x5F1562: mov     byte ptr [esp+2Ch+var_4], 0
0x5F1567: call    MagicCaster_destr
0x5F156C: mov     ecx, esi
0x5F156E: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x5F1576: call    MobileObject_destr
0x5F157B: mov     ecx, dword ptr [esp+2Ch+var_C]
0x5F157F: mov     large fs:0, ecx
0x5F1586: pop     ecx
0x5F1587: pop     edi
0x5F1588: pop     esi
0x5F1589: pop     ebp
0x5F158A: pop     ebx
0x5F158B: add     esp, 18h
0x5F158E: retn
