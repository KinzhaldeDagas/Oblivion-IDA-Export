0x7D1320: sub     esp, 18h
0x7D1323: push    ebx
0x7D1324: push    ebp
0x7D1325: push    esi
0x7D1326: push    edi
0x7D1327: push    1; a1
0x7D1329: call    GetShaderDefinition
0x7D132E: mov     esi, [eax+4]
0x7D1331: add     eax, 4
0x7D1334: push    0Eh; a1
0x7D1336: call    GetShaderDefinition
0x7D133B: mov     edi, [eax+4]
0x7D133E: add     eax, 4
0x7D1341: push    0Fh; a1
0x7D1343: call    GetShaderDefinition
0x7D1348: mov     ebx, [eax+4]
0x7D134B: add     eax, 4
0x7D134E: push    0Dh; a1
0x7D1350: call    GetShaderDefinition
0x7D1355: mov     ebp, [eax+4]
0x7D1358: add     eax, 4
0x7D135B: mov     eax, [esp+38h+arg_0]
0x7D135F: add     eax, 0FFFFFE74h
0x7D1364: add     esp, 10h
0x7D1367: cmp     ax, 3
0x7D136B: ja      loc_7D1402
0x7D1371: test    esi, esi
0x7D1373: jz      short loc_7D1393
0x7D1375: lea     ecx, [esi+8Ch]
0x7D137B: push    ecx
0x7D137C: lea     ecx, [esi+2Ch]
0x7D137F: call    sub_55E2A0
0x7D1384: lea     edx, [esi+90h]
0x7D138A: push    edx
0x7D138B: lea     ecx, [esi+30h]
0x7D138E: call    sub_55E2A0
0x7D1393: test    edi, edi
0x7D1395: jz      short loc_7D13B5
0x7D1397: lea     eax, [edi+8Ch]
0x7D139D: push    eax
0x7D139E: lea     ecx, [edi+2Ch]
0x7D13A1: call    sub_55E2A0
0x7D13A6: lea     ecx, [edi+90h]
0x7D13AC: push    ecx
0x7D13AD: lea     ecx, [edi+30h]
0x7D13B0: call    sub_55E2A0
0x7D13B5: test    ebx, ebx
0x7D13B7: jz      short loc_7D13D7
0x7D13B9: lea     edx, [ebx+8Ch]
0x7D13BF: push    edx
0x7D13C0: lea     ecx, [ebx+2Ch]
0x7D13C3: call    sub_55E2A0
0x7D13C8: lea     eax, [ebx+90h]
0x7D13CE: push    eax
0x7D13CF: lea     ecx, [ebx+30h]
0x7D13D2: call    sub_55E2A0
0x7D13D7: test    ebp, ebp
0x7D13D9: jz      loc_7D14B2
0x7D13DF: lea     ecx, [ebp+8Ch]
0x7D13E5: push    ecx
0x7D13E6: lea     ecx, [ebp+2Ch]
0x7D13E9: call    sub_55E2A0
0x7D13EE: lea     edx, [ebp+90h]
0x7D13F4: push    edx
0x7D13F5: lea     ecx, [ebp+30h]
0x7D13F8: call    sub_55E2A0
0x7D13FD: jmp     loc_7D14B2
0x7D1402: test    esi, esi
0x7D1404: jz      short loc_7D1424
0x7D1406: lea     eax, [esi+94h]
0x7D140C: push    eax
0x7D140D: lea     ecx, [esi+2Ch]
0x7D1410: call    sub_55E2A0
0x7D1415: lea     ecx, [esi+98h]
0x7D141B: push    ecx
0x7D141C: lea     ecx, [esi+30h]
0x7D141F: call    sub_55E2A0
0x7D1424: test    edi, edi
0x7D1426: jz      short loc_7D1446
0x7D1428: lea     edx, [edi+94h]
0x7D142E: push    edx
0x7D142F: lea     ecx, [edi+2Ch]
0x7D1432: call    sub_55E2A0
0x7D1437: lea     eax, [edi+98h]
0x7D143D: push    eax
0x7D143E: lea     ecx, [edi+30h]
0x7D1441: call    sub_55E2A0
0x7D1446: test    ebx, ebx
0x7D1448: jz      short loc_7D1468
0x7D144A: lea     ecx, [ebx+94h]
0x7D1450: push    ecx
0x7D1451: lea     ecx, [ebx+2Ch]
0x7D1454: call    sub_55E2A0
0x7D1459: lea     edx, [ebx+98h]
0x7D145F: push    edx
0x7D1460: lea     ecx, [ebx+30h]
0x7D1463: call    sub_55E2A0
0x7D1468: test    ebp, ebp
0x7D146A: jz      short loc_7D148A
0x7D146C: lea     eax, [ebp+94h]
0x7D1472: push    eax
0x7D1473: lea     ecx, [ebp+2Ch]
0x7D1476: call    sub_55E2A0
0x7D147B: lea     ecx, [ebp+98h]
0x7D1481: push    ecx
0x7D1482: lea     ecx, [ebp+30h]
0x7D1485: call    sub_55E2A0
0x7D148A: mov     eax, ds:0B42F48h
0x7D148F: cmp     eax, 2
0x7D1492: jl      short loc_7D14A0
0x7D1494: mov     edx, [esp+28h+arg_0]
0x7D1498: push    edx
0x7D1499: call    sub_83AC70
0x7D149E: jmp     short loc_7D14AF
0x7D14A0: cmp     eax, 1
0x7D14A3: jnz     short loc_7D14B2
0x7D14A5: mov     eax, [esp+28h+arg_0]
0x7D14A9: push    eax
0x7D14AA: call    sub_849020
0x7D14AF: add     esp, 4
0x7D14B2: mov     eax, [esp+28h+arg_0]
0x7D14B6: cmp     ax, 1A3h
0x7D14BA: jnb     loc_7D1706
0x7D14C0: movzx   ebx, ax
0x7D14C3: mov     esi, ds:0B455A0h[ebx*4]
0x7D14CA: cmp     dword ptr [esi+30h], 0
0x7D14CE: jnz     short loc_7D14D8
0x7D14D0: call    sub_772DF0
0x7D14D5: mov     [esi+30h], eax
0x7D14D8: mov     ecx, [esi+30h]
0x7D14DB: push    0
0x7D14DD: push    0
0x7D14DF: push    1Ch
0x7D14E1: call    sub_772CD0
0x7D14E6: mov     edi, [esp+28h+arg_0]
0x7D14EA: cmp     di, 160h
0x7D14EF: jb      short loc_7D14F8
0x7D14F1: cmp     di, 164h
0x7D14F6: jbe     short loc_7D1504
0x7D14F8: lea     ecx, [edi-165h]
0x7D14FE: cmp     cx, 2
0x7D1502: ja      short loc_7D1522
0x7D1504: mov     esi, ds:0B455A0h[ebx*4]
0x7D150B: cmp     dword ptr [esi+30h], 0
0x7D150F: jnz     short loc_7D1519
0x7D1511: call    sub_772DF0
0x7D1516: mov     [esi+30h], eax
0x7D1519: push    0
0x7D151B: push    0Fh
0x7D151D: jmp     loc_7D15A2
0x7D1522: lea     edx, [edi-10Fh]
0x7D1528: cmp     dx, 1Ah
0x7D152C: ja      short loc_7D1534
0x7D152E: push    0
0x7D1530: push    0Fh
0x7D1532: jmp     short loc_7D1558
0x7D1534: cmp     di, 19Eh
0x7D1539: jz      short loc_7D1589
0x7D153B: cmp     di, 19Fh
0x7D1540: jz      short loc_7D1589
0x7D1542: cmp     di, 0Ah
0x7D1546: jz      short loc_7D1589
0x7D1548: cmp     di, 0Bh
0x7D154C: jz      short loc_7D1589
0x7D154E: cmp     di, 2
0x7D1552: push    0
0x7D1554: ja      short loc_7D156B
0x7D1556: push    0
0x7D1558: mov     ecx, ds:0B455A0h[ebx*4]
0x7D155F: push    0A8h ; '¨'
0x7D1564: call    sub_76C730
0x7D1569: jmp     short loc_7D15AF
0x7D156B: cmp     di, 3
0x7D156F: jnz     short loc_7D1585
0x7D1571: mov     ecx, ds:0B455ACh
0x7D1577: push    0
0x7D1579: push    0A8h ; '¨'
0x7D157E: call    sub_76C730
0x7D1583: jmp     short loc_7D15AF
0x7D1585: push    7
0x7D1587: jmp     short loc_7D1558
0x7D1589: mov     esi, ds:0B455A0h[ebx*4]
0x7D1590: cmp     dword ptr [esi+30h], 0
0x7D1594: jnz     short loc_7D159E
0x7D1596: call    sub_772DF0
0x7D159B: mov     [esi+30h], eax
0x7D159E: push    0
0x7D15A0: push    8
0x7D15A2: mov     ecx, [esi+30h]
0x7D15A5: push    0A8h ; '¨'
0x7D15AA: call    sub_772CD0
0x7D15AF: cmp     word ptr ds:0B42EACh, 4
0x7D15B7: mov     esi, ds:0B455A0h[ebx*4]
0x7D15BE: jnz     loc_7D1666
0x7D15C4: cmp     dword ptr [esi+30h], 0
0x7D15C8: jnz     short loc_7D15D2
0x7D15CA: call    sub_772DF0
0x7D15CF: mov     [esi+30h], eax
0x7D15D2: mov     ecx, [esi+30h]
0x7D15D5: push    0
0x7D15D7: push    1
0x7D15D9: push    34h ; '4'
0x7D15DB: call    sub_772CD0
0x7D15E0: mov     esi, ds:0B455A0h[ebx*4]
0x7D15E7: cmp     dword ptr [esi+30h], 0
0x7D15EB: jnz     short loc_7D15F5
0x7D15ED: call    sub_772DF0
0x7D15F2: mov     [esi+30h], eax
0x7D15F5: mov     ecx, [esi+30h]
0x7D15F8: push    0
0x7D15FA: push    8
0x7D15FC: push    38h ; '8'
0x7D15FE: call    sub_772CD0
0x7D1603: mov     esi, ds:0B455A0h[ebx*4]
0x7D160A: cmp     dword ptr [esi+30h], 0
0x7D160E: jnz     short loc_7D1618
0x7D1610: call    sub_772DF0
0x7D1615: mov     [esi+30h], eax
0x7D1618: mov     ecx, [esi+30h]
0x7D161B: push    0
0x7D161D: push    7
0x7D161F: push    37h ; '7'
0x7D1621: call    sub_772CD0
0x7D1626: mov     esi, ds:0B455A0h[ebx*4]
0x7D162D: cmp     dword ptr [esi+30h], 0
0x7D1631: jnz     short loc_7D163B
0x7D1633: call    sub_772DF0
0x7D1638: mov     [esi+30h], eax
0x7D163B: mov     ecx, [esi+30h]
0x7D163E: push    0
0x7D1640: push    1
0x7D1642: push    35h ; '5'
0x7D1644: call    sub_772CD0
0x7D1649: mov     esi, ds:0B455A0h[ebx*4]
0x7D1650: cmp     dword ptr [esi+30h], 0
0x7D1654: jnz     short loc_7D165E
0x7D1656: call    sub_772DF0
0x7D165B: mov     [esi+30h], eax
0x7D165E: push    0
0x7D1660: push    1
0x7D1662: push    36h ; '6'
0x7D1664: jmp     short loc_7D167A
0x7D1666: cmp     dword ptr [esi+30h], 0
0x7D166A: jnz     short loc_7D1674
0x7D166C: call    sub_772DF0
0x7D1671: mov     [esi+30h], eax
0x7D1674: push    0
0x7D1676: push    0
0x7D1678: push    34h ; '4'
0x7D167A: mov     ecx, [esi+30h]
0x7D167D: call    sub_772CD0
0x7D1682: cmp     di, 17Bh
0x7D1687: jz      short loc_7D1706
0x7D1689: mov     eax, ds:0B455A0h[ebx*4]
0x7D1690: xor     ebp, ebp
0x7D1692: cmp     [eax+18h], ebp
0x7D1695: jbe     short loc_7D1706
0x7D1697: mov     eax, [eax+24h]
0x7D169A: mov     edi, [eax+ebp*4]
0x7D169D: test    edi, edi
0x7D169F: jz      short loc_7D16F7
0x7D16A1: lea     ecx, [esp+28h+var_18]
0x7D16A5: push    ecx
0x7D16A6: mov     ecx, edi
0x7D16A8: call    sub_75FB10
0x7D16AD: mov     edx, [eax]
0x7D16AF: mov     eax, [esp+28h+var_18]
0x7D16B3: test    eax, eax
0x7D16B5: mov     [esp+28h+var_14], edx
0x7D16B9: jz      short loc_7D16D9
0x7D16BB: mov     esi, eax
0x7D16BD: add     eax, 4
0x7D16C0: push    eax; lpAddend
0x7D16C1: call    dword ptr ds:0A2807Ch
0x7D16C7: test    eax, eax
0x7D16C9: jnz     short loc_7D16D9
0x7D16CB: test    esi, esi
0x7D16CD: jz      short loc_7D16D9
0x7D16CF: mov     eax, [esi]
0x7D16D1: mov     edx, [eax]
0x7D16D3: push    1
0x7D16D5: mov     ecx, esi
0x7D16D7: call    edx
0x7D16D9: mov     eax, [esp+28h+var_14]
0x7D16DD: test    eax, eax
0x7D16DF: jz      short loc_7D16F7
0x7D16E1: cmp     eax, ds:0B43110h
0x7D16E7: jz      short loc_7D16F7
0x7D16E9: cmp     ebp, 7
0x7D16EC: jz      short loc_7D16F7
0x7D16EE: push    3
0x7D16F0: mov     ecx, edi
0x7D16F2: call    sub_7715E0
0x7D16F7: mov     eax, ds:0B455A0h[ebx*4]
0x7D16FE: add     ebp, 1
0x7D1701: cmp     ebp, [eax+18h]
0x7D1704: jb      short loc_7D1697
0x7D1706: mov     eax, [esp+28h+arg_0]
0x7D170A: cmp     ax, 77h ; 'w'
0x7D170E: jz      short loc_7D171A
0x7D1710: cmp     ax, 85h ; '…'
0x7D1714: jnz     loc_7D17B1
0x7D171A: fld     dword ptr ds:0B4313Ch
0x7D1720: sub     esp, 10h
0x7D1723: fsub    dword ptr ds:0B3F92Ch
0x7D1729: mov     eax, esp
0x7D172B: push    20h ; ' '
0x7D172D: fstp    [esp+3Ch+var_10]
0x7D1731: mov     ecx, [esp+3Ch+var_10]
0x7D1735: fld     dword ptr ds:0B43140h
0x7D173B: mov     [eax], ecx
0x7D173D: fsub    dword ptr ds:0B3F930h
0x7D1743: fstp    [esp+3Ch+var_C]
0x7D1747: mov     edx, [esp+3Ch+var_C]
0x7D174B: fld     dword ptr ds:0B43144h
0x7D1751: mov     [eax+4], edx
0x7D1754: fld     qword ptr ds:0A492F0h
0x7D175A: fsub    st(1), st
0x7D175C: fxch    st(1)
0x7D175E: fstp    [esp+3Ch+var_8]
0x7D1762: mov     ecx, [esp+3Ch+var_8]
0x7D1766: mov     [eax+8], ecx
0x7D1769: fsubr   dword ptr ds:0B43148h
0x7D176F: fstp    [esp+3Ch+var_4]
0x7D1773: mov     edx, [esp+3Ch+var_4]
0x7D1777: mov     [eax+0Ch], edx
0x7D177A: call    sub_7ECAE0
0x7D177F: mov     ecx, ds:0B2C718h
0x7D1785: mov     edx, ds:0B2C71Ch
0x7D178B: add     esp, 4
0x7D178E: mov     eax, esp
0x7D1790: mov     [eax], ecx
0x7D1792: mov     ecx, ds:0B2C720h
0x7D1798: mov     [eax+4], edx
0x7D179B: mov     edx, ds:0B2C724h
0x7D17A1: mov     [eax+8], ecx
0x7D17A4: push    22h ; '"'
0x7D17A6: mov     [eax+0Ch], edx
0x7D17A9: call    sub_7ECAE0
0x7D17AE: add     esp, 14h
0x7D17B1: cmp     word ptr [esp+28h+arg_0], 17Bh
0x7D17B8: jnz     short loc_7D17EC
0x7D17BA: mov     ecx, ds:0B2C728h
0x7D17C0: mov     edx, ds:0B2C72Ch
0x7D17C6: sub     esp, 10h
0x7D17C9: mov     eax, esp
0x7D17CB: mov     [eax], ecx
0x7D17CD: mov     ecx, ds:0B2C730h
0x7D17D3: mov     [eax+4], edx
0x7D17D6: mov     edx, ds:0B2C734h
0x7D17DC: mov     [eax+8], ecx
0x7D17DF: push    21h ; '!'
0x7D17E1: mov     [eax+0Ch], edx
0x7D17E4: call    sub_7ECAE0
0x7D17E9: add     esp, 14h
0x7D17EC: pop     edi
0x7D17ED: pop     esi
0x7D17EE: pop     ebp
0x7D17EF: pop     ebx
0x7D17F0: add     esp, 18h
0x7D17F3: retn
