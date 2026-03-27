0x4A12E0: push    0FFFFFFFFh
0x4A12E2: push    offset SEH_4A12E0
0x4A12E7: mov     eax, large fs:0
0x4A12ED: push    eax
0x4A12EE: sub     esp, 10h
0x4A12F1: push    ebx
0x4A12F2: push    ebp
0x4A12F3: push    esi
0x4A12F4: push    edi
0x4A12F5: mov     eax, ds:0B30AACh
0x4A12FA: xor     eax, esp
0x4A12FC: push    eax
0x4A12FD: lea     eax, [esp+30h+var_C]
0x4A1301: mov     large fs:0, eax
0x4A1307: mov     ebp, ecx
0x4A1309: mov     [esp+30h+var_14], ebp
0x4A130D: xor     esi, esi
0x4A130F: push    esi
0x4A1310: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4A1315: mov     ebx, [esp+30h+arg_0]
0x4A1319: mov     edi, ebx
0x4A131B: mov     [esp+30h+var_4], esi
0x4A131F: mov     dword ptr [ebp+0], offset ??_7BSFadeNode@@6B@; const BSFadeNode::`vftable'
0x4A1326: mov     [esp+30h+var_18], edi
0x4A132A: mov     [esp+30h+arg_0], esi
0x4A132E: mov     eax, [ebx+8]
0x4A1331: push    eax; Src
0x4A1332: mov     ecx, ebp
0x4A1334: mov     byte ptr [esp+34h+var_4], 1
0x4A1339: call    NiObjectNET_SetName
0x4A133E: cmp     [ebx+0Ch], esi
0x4A1341: jnz     loc_4A13E4
0x4A1347: mov     eax, [ebx]
0x4A1349: mov     edx, [eax+4]
0x4A134C: mov     ecx, ebx
0x4A134E: call    edx
0x4A1350: test    eax, eax
0x4A1352: jz      short loc_4A1366
0x4A1354: cmp     eax, offset dword_B3FD4C
0x4A1359: jz      loc_4A13E4
0x4A135F: mov     eax, [eax+4]
0x4A1362: test    eax, eax
0x4A1364: jnz     short loc_4A1354
0x4A1366: push    (offset stru_B26AF0.unk2C+2A8h)
0x4A136B: lea     ecx, [ebx+30h]
0x4A136E: call    sub_70FF20
0x4A1373: test    al, al
0x4A1375: jnz     short loc_4A13CB
0x4A1377: push    0DCh ; 'Ü'; Size
0x4A137C: mov     esi, ebx
0x4A137E: call    FormHeapAlloc
0x4A1383: add     esp, 4
0x4A1386: mov     [esp+30h+var_1C], eax
0x4A138A: test    eax, eax
0x4A138C: mov     byte ptr [esp+30h+var_4], 3
0x4A1391: jz      short loc_4A139E
0x4A1393: push    0
0x4A1395: mov     ecx, eax; this
0x4A1397: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4A139C: jmp     short loc_4A13A0
0x4A139E: xor     eax, eax
0x4A13A0: push    eax; a2
0x4A13A1: lea     ecx, [esp+34h+arg_0]; this
0x4A13A5: mov     byte ptr [esp+34h+var_4], 1
0x4A13AA: call    NiSmartPointer_Set??
0x4A13AF: mov     ecx, [esp+30h+arg_0]
0x4A13B3: mov     eax, [ecx]
0x4A13B5: mov     edx, [eax+84h]
0x4A13BB: push    0
0x4A13BD: push    esi
0x4A13BE: mov     ebx, ecx
0x4A13C0: call    edx
0x4A13C2: push    offset aFadenodeRot; "FadeNode Rot"
0x4A13C7: mov     ecx, esi
0x4A13C9: jmp     short loc_4A1448
0x4A13CB: mov     eax, [ebx+0A8h]
0x4A13D1: push    eax
0x4A13D2: mov     ecx, ebp
0x4A13D4: call    sub_435CE0
0x4A13D9: push    0
0x4A13DB: mov     ecx, ebx
0x4A13DD: call    sub_435CE0
0x4A13E2: jmp     short loc_4A144D
0x4A13E4: push    0DCh ; 'Ü'; Size
0x4A13E9: mov     [esp+34h+var_1C], ebx
0x4A13ED: call    FormHeapAlloc
0x4A13F2: add     esp, 4
0x4A13F5: mov     [esp+30h+var_10], eax
0x4A13F9: test    eax, eax
0x4A13FB: mov     byte ptr [esp+30h+var_4], 2
0x4A1400: jz      short loc_4A140D
0x4A1402: push    0
0x4A1404: mov     ecx, eax; this
0x4A1406: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4A140B: jmp     short loc_4A140F
0x4A140D: xor     eax, eax
0x4A140F: test    eax, eax
0x4A1411: mov     byte ptr [esp+30h+var_4], 1
0x4A1416: jz      short loc_4A142A
0x4A1418: mov     [esp+30h+arg_0], eax
0x4A141C: add     eax, 4
0x4A141F: push    eax; lpAddend
0x4A1420: call    dword ptr ds:0A28078h
0x4A1426: mov     esi, [esp+30h+arg_0]
0x4A142A: mov     ecx, [esp+30h+var_1C]
0x4A142E: mov     eax, [esi]
0x4A1430: mov     edx, [eax+84h]
0x4A1436: push    0
0x4A1438: push    ecx
0x4A1439: mov     ecx, esi
0x4A143B: mov     ebx, esi
0x4A143D: call    edx
0x4A143F: mov     ecx, [esp+30h+var_1C]
0x4A1443: push    offset aFadenodeAnim; "FadeNode Anim"
0x4A1448: call    NiObjectNET_SetName
0x4A144D: movzx   eax, word ptr [ebx+0B6h]
0x4A1454: xor     esi, esi
0x4A1456: test    eax, eax
0x4A1458: jbe     short loc_4A1483
0x4A145A: cmp     eax, esi
0x4A145C: jbe     short loc_4A1475
0x4A145E: mov     eax, [ebx+0B0h]
0x4A1464: mov     eax, [eax+esi*4]
0x4A1467: test    eax, eax
0x4A1469: jz      short loc_4A1475
0x4A146B: push    1
0x4A146D: push    eax
0x4A146E: mov     ecx, ebp
0x4A1470: call    NiNode__AddObject
0x4A1475: movzx   eax, word ptr [ebx+0B6h]
0x4A147C: add     esi, 1
0x4A147F: cmp     eax, esi
0x4A1481: ja      short loc_4A145E
0x4A1483: push    ebp
0x4A1484: push    ebp
0x4A1485: call    sub_4A0760
0x4A148A: add     esp, 8
0x4A148D: cmp     dword ptr [edi+0A4h], 0
0x4A1494: jz      short loc_4A14B8
0x4A1496: mov     ecx, [edi+9Ch]
0x4A149C: mov     esi, [ecx+8]
0x4A149F: push    esi; a2
0x4A14A0: mov     ecx, ebp; this
0x4A14A2: call    sub_405680
0x4A14A7: push    esi
0x4A14A8: mov     ecx, edi
0x4A14AA: call    sub_4A1220
0x4A14AF: cmp     dword ptr [edi+0A4h], 0
0x4A14B6: jnz     short loc_4A1496
0x4A14B8: cmp     dword ptr [edi+0C8h], 0
0x4A14BF: jz      short loc_4A14E3
0x4A14C1: mov     edx, [edi+0C0h]
0x4A14C7: mov     esi, [edx+8]
0x4A14CA: push    esi
0x4A14CB: mov     ecx, ebp
0x4A14CD: call    sub_708E40
0x4A14D2: push    esi
0x4A14D3: mov     ecx, edi
0x4A14D5: call    sub_70B930
0x4A14DA: cmp     dword ptr [edi+0C8h], 0
0x4A14E1: jnz     short loc_4A14C1
0x4A14E3: mov     eax, [ebx+54h]
0x4A14E6: mov     [ebp+54h], eax
0x4A14E9: mov     ecx, [ebx+58h]
0x4A14EC: mov     [ebp+58h], ecx
0x4A14EF: mov     edx, [ebx+5Ch]
0x4A14F2: mov     [ebp+5Ch], edx
0x4A14F5: lea     esi, [ebx+30h]
0x4A14F8: lea     edi, [ebp+30h]
0x4A14FB: mov     ecx, 9
0x4A1500: rep movsd
0x4A1502: fld     dword ptr [ebx+60h]
0x4A1505: fstp    [esp+30h+var_1C]
0x4A1509: fld     [esp+30h+var_1C]
0x4A150D: fabs
0x4A150F: fstp    [esp+30h+var_1C]
0x4A1513: fld     [esp+30h+var_1C]
0x4A1517: fstp    dword ptr [ebp+60h]
0x4A151A: push    offset stru_B3F600; lpCriticalSection
0x4A151F: call    dword ptr ds:0A2806Ch
0x4A1525: call    dword ptr ds:0A2808Ch
0x4A152B: mov     esi, [esp+30h+var_18]
0x4A152F: mov     edi, 1
0x4A1534: add     ds:0B3F67Ch, edi
0x4A153A: mov     ds:0B3F678h, eax
0x4A153F: movzx   eax, word ptr [esi+14h]
0x4A1543: push    eax
0x4A1544: mov     ecx, ebp
0x4A1546: call    sub_6FF760
0x4A154B: movzx   eax, word ptr [esi+14h]
0x4A154F: test    ax, ax
0x4A1552: jz      short loc_4A1573
0x4A1554: mov     eax, [esi+10h]
0x4A1557: mov     eax, [eax]
0x4A1559: push    eax
0x4A155A: mov     ecx, ebp
0x4A155C: call    NiNode_AddNiExtraData
0x4A1561: push    0
0x4A1563: mov     ecx, esi
0x4A1565: call    sub_6FFBE0
0x4A156A: movzx   eax, word ptr [esi+14h]
0x4A156E: test    ax, ax
0x4A1571: jnz     short loc_4A1554
0x4A1573: sub     ds:0B3F67Ch, edi
0x4A1579: jnz     short loc_4A1585
0x4A157B: mov     dword ptr ds:0B3F678h, 0
0x4A1585: push    offset stru_B3F600; lpCriticalSection
0x4A158A: call    dword ptr ds:0A28074h
0x4A1590: mov     ecx, ebp
0x4A1592: call    sub_4A07E0
0x4A1597: mov     ecx, ebp
0x4A1599: call    sub_70A360
0x4A159E: mov     ecx, ebp
0x4A15A0: call    sub_70A9C0
0x4A15A5: mov     esi, [esp+30h+arg_0]
0x4A15A9: test    esi, esi
0x4A15AB: mov     byte ptr [esp+30h+var_4], 0
0x4A15B0: jz      short loc_4A15C9
0x4A15B2: lea     ecx, [esi+4]
0x4A15B5: push    ecx; lpAddend
0x4A15B6: call    dword ptr ds:0A2807Ch
0x4A15BC: test    eax, eax
0x4A15BE: jnz     short loc_4A15C9
0x4A15C0: mov     edx, [esi]
0x4A15C2: mov     eax, [edx]
0x4A15C4: push    edi
0x4A15C5: mov     ecx, esi
0x4A15C7: call    eax
0x4A15C9: mov     eax, ebp
0x4A15CB: mov     ecx, dword ptr [esp+30h+var_C]
0x4A15CF: mov     large fs:0, ecx
0x4A15D6: pop     ecx
0x4A15D7: pop     edi
0x4A15D8: pop     esi
0x4A15D9: pop     ebp
0x4A15DA: pop     ebx
0x4A15DB: add     esp, 1Ch
0x4A15DE: retn    4
