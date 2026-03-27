0x6A12D0: sub     esp, 0B8h
0x6A12D6: push    ebx
0x6A12D7: push    ebp
0x6A12D8: mov     ebp, ecx
0x6A12DA: mov     ecx, ds:0B333C4h
0x6A12E0: cmp     [ebp+1Ch], ecx
0x6A12E3: setz    bl
0x6A12E6: test    bl, bl
0x6A12E8: jz      short loc_6A12FB
0x6A12EA: test    ecx, ecx
0x6A12EC: jz      short loc_6A12FB
0x6A12EE: cmp     [ecx+5E0h], ebp
0x6A12F4: mov     [esp+0C0h+var_B7], 1
0x6A12F9: jz      short loc_6A1300
0x6A12FB: mov     [esp+0C0h+var_B7], 0
0x6A1300: test    bl, bl
0x6A1302: jz      short loc_6A1339
0x6A1304: test    ecx, ecx
0x6A1306: jz      short loc_6A1339
0x6A1308: push    0
0x6A130A: call    PlayerCharacter_GetPlayerNode
0x6A130F: test    eax, eax
0x6A1311: jz      short loc_6A1333
0x6A1313: mov     ecx, ds:0B333C4h
0x6A1319: push    0
0x6A131B: call    PlayerCharacter_GetPlayerNode
0x6A1320: test    byte ptr [eax+18h], 1
0x6A1324: jz      short loc_6A1333
0x6A1326: mov     ecx, ds:0B333C4h
0x6A132C: mov     [esp+0C0h+var_B6], 1
0x6A1331: jmp     short loc_6A133E
0x6A1333: mov     ecx, ds:0B333C4h
0x6A1339: mov     [esp+0C0h+var_B6], 0
0x6A133E: cmp     byte ptr [ebp+28h], 0
0x6A1342: jnz     short loc_6A1364
0x6A1344: test    bl, bl
0x6A1346: jz      short loc_6A1353
0x6A1348: push    0
0x6A134A: call    PlayerCharacter_GetPlayerNode
0x6A134F: mov     ebx, eax
0x6A1351: jmp     short loc_6A1386
0x6A1353: mov     ecx, [ebp+1Ch]
0x6A1356: mov     eax, [ecx]
0x6A1358: mov     edx, [eax+154h]
0x6A135E: call    edx
0x6A1360: mov     ebx, eax
0x6A1362: jmp     short loc_6A1386
0x6A1364: lea     eax, [esp+0C0h+var_B4]
0x6A1368: push    eax
0x6A1369: lea     ecx, [esp+0C4h+var_AC]
0x6A136D: push    ecx
0x6A136E: lea     edx, [esp+0C8h+var_B0]
0x6A1372: push    edx
0x6A1373: lea     eax, [esp+0CCh+var_B5]
0x6A1377: mov     ecx, eax
0x6A1379: push    eax
0x6A137A: push    ecx
0x6A137B: mov     ecx, ebp
0x6A137D: call    sub_6A0D90
0x6A1382: mov     ebx, [esp+0C0h+var_B4]
0x6A1386: mov     eax, [ebp+40h]
0x6A1389: test    eax, eax
0x6A138B: jz      loc_6A1558
0x6A1391: test    ebx, ebx
0x6A1393: jz      loc_6A1558
0x6A1399: cmp     byte ptr [ebp+28h], 0
0x6A139D: push    esi
0x6A139E: lea     esi, [ebx+64h]
0x6A13A1: jnz     short loc_6A13A8
0x6A13A3: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6A13A8: cmp     [esp+0C4h+var_B7], 0
0x6A13AD: push    edi
0x6A13AE: mov     ecx, 9
0x6A13B3: lea     edi, [esp+0C8h+var_9C]
0x6A13B7: rep movsd
0x6A13B9: jz      loc_6A143F
0x6A13BF: mov     esi, [eax+1Ch]
0x6A13C2: push    1; arg1
0x6A13C4: push    0; canCreate
0x6A13C6: call    InterfaceManager_GetSingleton
0x6A13CB: add     esp, 8
0x6A13CE: cmp     esi, [eax+60h]
0x6A13D1: jz      short loc_6A13F5
0x6A13D3: push    1; arg1
0x6A13D5: push    0; canCreate
0x6A13D7: call    InterfaceManager_GetSingleton
0x6A13DC: mov     edx, [eax+60h]
0x6A13DF: mov     ecx, [edx+1Ch]
0x6A13E2: mov     eax, [ecx]
0x6A13E4: mov     edx, [ebp+40h]
0x6A13E7: mov     eax, [eax+84h]
0x6A13ED: add     esp, 8
0x6A13F0: push    1
0x6A13F2: push    edx
0x6A13F3: call    eax
0x6A13F5: mov     esi, [ebp+40h]
0x6A13F8: mov     eax, [esi+1Ch]
0x6A13FB: add     ebx, 88h ; 'ˆ'
0x6A1401: push    ebx
0x6A1402: lea     ecx, [esp+0CCh+var_A8]
0x6A1406: push    ecx
0x6A1407: lea     ecx, [eax+64h]
0x6A140A: call    sub_7101F0
0x6A140F: mov     edx, [eax]
0x6A1411: mov     [esi+54h], edx
0x6A1414: mov     ecx, [eax+4]
0x6A1417: mov     [esi+58h], ecx
0x6A141A: mov     edx, [eax+8]
0x6A141D: mov     [esi+5Ch], edx
0x6A1420: mov     edi, [ebp+40h]
0x6A1423: mov     eax, [edi+1Ch]
0x6A1426: lea     ecx, [esp+0C8h+var_9C]
0x6A142A: push    ecx
0x6A142B: lea     edx, [esp+0CCh+var_6C]
0x6A142F: push    edx
0x6A1430: lea     ecx, [eax+64h]
0x6A1433: call    NiMAtrix33_Multiply
0x6A1438: mov     esi, eax
0x6A143A: jmp     loc_6A154C
0x6A143F: cmp     [esp+0C8h+var_B6], 0
0x6A1444: jz      loc_6A1525
0x6A144A: mov     ecx, ds:0B333C4h
0x6A1450: push    1
0x6A1452: call    PlayerCharacter_GetPlayerNode
0x6A1457: test    eax, eax
0x6A1459: jz      loc_6A1525
0x6A145F: mov     ecx, ds:0B333C4h
0x6A1465: push    1
0x6A1467: call    PlayerCharacter_GetPlayerNode
0x6A146C: push    eax
0x6A146D: push    offset dword_B3FAB0
0x6A1472: call    NiRTTI_Cast
0x6A1477: add     esp, 8
0x6A147A: test    eax, eax
0x6A147C: jz      short loc_6A1495
0x6A147E: mov     ecx, [ebp+40h]
0x6A1481: cmp     eax, [ecx+1Ch]
0x6A1484: jz      short loc_6A1495
0x6A1486: mov     edx, [eax]
0x6A1488: push    1
0x6A148A: push    ecx
0x6A148B: mov     ecx, eax
0x6A148D: mov     eax, [edx+84h]
0x6A1493: call    eax
0x6A1495: mov     edi, [ebp+40h]
0x6A1498: mov     eax, [edi+1Ch]
0x6A149B: lea     ecx, [esp+0C8h+var_9C]
0x6A149F: push    ecx
0x6A14A0: lea     edx, [esp+0CCh+var_6C]
0x6A14A4: push    edx
0x6A14A5: lea     ecx, [esp+0D0h+var_48]
0x6A14AC: push    ecx
0x6A14AD: lea     ecx, [eax+64h]
0x6A14B0: call    sub_7103C0
0x6A14B5: mov     ecx, eax
0x6A14B7: call    NiMAtrix33_Multiply
0x6A14BC: mov     esi, eax
0x6A14BE: add     edi, 30h ; '0'
0x6A14C1: mov     ecx, 9
0x6A14C6: rep movsd
0x6A14C8: mov     esi, [ebp+40h]
0x6A14CB: mov     edi, [esi+1Ch]
0x6A14CE: lea     edx, [edi+88h]
0x6A14D4: push    edx
0x6A14D5: lea     eax, [esp+0CCh+var_A8]
0x6A14D9: push    eax
0x6A14DA: lea     ecx, [ebx+88h]
0x6A14E0: call    sub_4121A0
0x6A14E5: push    eax
0x6A14E6: lea     ecx, [esp+0CCh+var_78]
0x6A14EA: push    ecx
0x6A14EB: lea     edx, [esp+0D0h+var_24]
0x6A14F2: push    edx
0x6A14F3: lea     ecx, [edi+64h]
0x6A14F6: call    sub_7103C0
0x6A14FB: mov     ecx, eax
0x6A14FD: call    sub_7101F0
0x6A1502: fldz
0x6A1504: mov     ecx, [eax]
0x6A1506: mov     [esi+54h], ecx
0x6A1509: mov     edx, [eax+4]
0x6A150C: mov     [esi+58h], edx
0x6A150F: mov     eax, [eax+8]
0x6A1512: push    0; a3
0x6A1514: push    ecx
0x6A1515: mov     [esi+5Ch], eax
0x6A1518: fstp    [esp+0D0h+a2]; a2
0x6A151B: mov     ecx, [ebp+40h]; this
0x6A151E: call    NiAVObject_UpdateNiAVObject
0x6A1523: jmp     short loc_6A1556
0x6A1525: mov     eax, [ebp+40h]
0x6A1528: mov     edx, [ebx+88h]
0x6A152E: lea     ecx, [ebx+88h]
0x6A1534: add     eax, 54h ; 'T'
0x6A1537: mov     [eax], edx
0x6A1539: mov     edx, [ecx+4]
0x6A153C: mov     [eax+4], edx
0x6A153F: mov     ecx, [ecx+8]
0x6A1542: mov     [eax+8], ecx
0x6A1545: mov     edi, [ebp+40h]
0x6A1548: lea     esi, [esp+0C8h+var_9C]
0x6A154C: mov     ecx, 9
0x6A1551: add     edi, 30h ; '0'
0x6A1554: rep movsd
0x6A1556: pop     edi
0x6A1557: pop     esi
0x6A1558: cmp     [esp+0C0h+var_B6], 0
0x6A155D: jnz     short loc_6A157A
0x6A155F: cmp     [esp+0C0h+var_B7], 0
0x6A1564: jnz     short loc_6A157A
0x6A1566: mov     edx, [ebp+40h]
0x6A1569: push    edx
0x6A156A: mov     ecx, ebp
0x6A156C: call    sub_69DC90
0x6A1571: pop     ebp
0x6A1572: pop     ebx
0x6A1573: add     esp, 0B8h
0x6A1579: retn
0x6A157A: push    0
0x6A157C: mov     ecx, ebp
0x6A157E: call    sub_69DC90
0x6A1583: pop     ebp
0x6A1584: pop     ebx
0x6A1585: add     esp, 0B8h
0x6A158B: retn
