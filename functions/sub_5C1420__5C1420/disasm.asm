0x5C1420: sub     esp, 18h
0x5C1423: mov     ecx, ds:0B33B00h
0x5C1429: push    ebx
0x5C142A: push    esi
0x5C142B: xor     ebx, ebx
0x5C142D: push    edi
0x5C142E: mov     [esp+24h+var_14], ebx
0x5C1432: mov     [esp+24h+a1], ebx
0x5C1436: call    sub_45A170
0x5C143B: test    al, al
0x5C143D: jz      loc_5C14E0
0x5C1443: mov     ecx, ds:0B33B00h
0x5C1449: push    4; Size
0x5C144B: lea     eax, [esp+28h+Dst]
0x5C144F: push    eax; Dst
0x5C1450: call    SaveLoad_LoadData
0x5C1455: cmp     [esp+24h+Dst], 4B4F4C42h
0x5C145D: jz      short loc_5C14C7
0x5C145F: mov     eax, ds:0B33B00h
0x5C1464: mov     esi, [eax+80h]
0x5C146A: cmp     esi, ebx
0x5C146C: jz      short loc_5C14AB
0x5C146E: mov     ecx, [esi]
0x5C1470: push    ecx; a1
0x5C1471: call    TESForm_LookupByFormID
0x5C1476: mov     edx, [esi+5]
0x5C1479: movzx   ecx, byte ptr [esi+9]
0x5C147D: add     esp, 4
0x5C1480: push    edx
0x5C1481: mov     edx, [eax]
0x5C1483: push    ecx
0x5C1484: mov     ecx, eax
0x5C1486: mov     eax, [edx+0D4h]
0x5C148C: call    eax
0x5C148E: mov     ecx, [esi]
0x5C1490: push    eax
0x5C1491: push    ecx
0x5C1492: push    38Fh
0x5C1497: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C149C: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x5C14A1: call    PrintError
0x5C14A6: add     esp, 1Ch
0x5C14A9: jmp     short loc_5C14C7
0x5C14AB: movzx   edx, byte ptr [eax+7Ch]
0x5C14AF: push    edx
0x5C14B0: push    38Fh
0x5C14B5: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C14BA: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x5C14BF: call    PrintError
0x5C14C4: add     esp, 10h
0x5C14C7: mov     ecx, ds:0B33B00h
0x5C14CD: mov     eax, [ecx+14h]
0x5C14D0: push    2; Size
0x5C14D2: lea     edx, [esp+28h+var_14]
0x5C14D6: push    edx; Dst
0x5C14D7: mov     [esp+2Ch+a1], eax
0x5C14DB: call    SaveLoad_LoadData
0x5C14E0: mov     esi, offset quickKeyList_ptr
0x5C14E5: mov     [esp+24h+var_C], 8
0x5C14ED: push    ebp
0x5C14EE: mov     edi, edi
0x5C14F0: mov     edi, [esi+4]
0x5C14F3: cmp     edi, ebx
0x5C14F5: jz      short loc_5C1509
0x5C14F7: mov     edx, [esi]
0x5C14F9: mov     eax, edi
0x5C14FB: mov     edi, [edi]
0x5C14FD: push    eax
0x5C14FE: mov     eax, [edx+8]
0x5C1501: mov     ecx, esi
0x5C1503: call    eax
0x5C1505: cmp     edi, ebx
0x5C1507: jnz     short loc_5C14F7
0x5C1509: mov     ebp, 1
0x5C150E: push    ebp; Size
0x5C150F: lea     ecx, [esp+30h+anonymous_0+3]
0x5C1513: push    ecx; Dst
0x5C1514: mov     ecx, ds:0B33B00h
0x5C151A: mov     [esi+0Ch], ebx
0x5C151D: mov     [esi+4], ebx
0x5C1520: mov     [esi+8], ebx
0x5C1523: call    SaveLoad_LoadData
0x5C1528: cmp     byte ptr [esp+2Ch+anonymous_0+3], bl
0x5C152C: mov     byte ptr [esp+2Ch+anonymous_0+2], bl
0x5C1530: jbe     short loc_5C1590
0x5C1532: mov     ecx, ds:0B33B00h
0x5C1538: push    4; Size
0x5C153A: lea     edx, [esp+30h+Dst]
0x5C153E: push    edx; Dst
0x5C153F: call    SaveLoad_LoadFormID
0x5C1544: mov     eax, [esp+34h+a1]
0x5C1548: push    eax; a1
0x5C1549: call    TESForm_LookupByFormID
0x5C154E: mov     edi, eax
0x5C1550: add     esp, 4
0x5C1553: cmp     edi, ebx
0x5C1555: jz      short loc_5C1580
0x5C1557: mov     edx, [esi]
0x5C1559: mov     eax, [edx+4]
0x5C155C: mov     ecx, esi
0x5C155E: call    eax
0x5C1560: mov     [eax+8], edi
0x5C1563: mov     [eax+4], ebx
0x5C1566: mov     ecx, [esi+4]
0x5C1569: mov     [eax], ecx
0x5C156B: mov     ecx, [esi+4]
0x5C156E: cmp     ecx, ebx
0x5C1570: jz      short loc_5C1577
0x5C1572: mov     [ecx+4], eax
0x5C1575: jmp     short loc_5C157A
0x5C1577: mov     [esi+8], eax
0x5C157A: add     [esi+0Ch], ebp
0x5C157D: mov     [esi+4], eax
0x5C1580: mov     al, [esp+34h+var_22]
0x5C1584: add     al, 1
0x5C1586: cmp     al, [esp+34h+var_21]
0x5C158A: mov     [esp+34h+var_22], al
0x5C158E: jb      short loc_5C1532
0x5C1590: add     esi, 10h
0x5C1593: sub     [esp+34h+var_18], ebp
0x5C1597: jnz     loc_5C14F0
0x5C159D: mov     ecx, ds:0B33B00h
0x5C15A3: call    sub_45A170
0x5C15A8: test    al, al
0x5C15AA: pop     ebp
0x5C15AB: jz      loc_5C16C3
0x5C15B1: mov     ecx, ds:0B33B00h
0x5C15B7: mov     edi, [ecx+80h]
0x5C15BD: cmp     edi, ebx
0x5C15BF: mov     esi, [ecx+14h]
0x5C15C2: jz      loc_5C1668
0x5C15C8: mov     edx, [edi]
0x5C15CA: push    edx; a1
0x5C15CB: call    TESForm_LookupByFormID
0x5C15D0: mov     ebx, [esp+34h+anonymous_0]
0x5C15D4: mov     ecx, eax
0x5C15D6: movzx   eax, [esp+34h+var_20]
0x5C15DB: add     eax, ebx
0x5C15DD: add     esp, 4
0x5C15E0: cmp     esi, eax
0x5C15E2: jbe     short loc_5C1623
0x5C15E4: mov     edx, [edi+5]
0x5C15E7: movzx   eax, byte ptr [edi+9]
0x5C15EB: push    edx
0x5C15EC: mov     edx, [ecx]
0x5C15EE: push    eax
0x5C15EF: mov     eax, [edx+0D4h]
0x5C15F5: call    eax
0x5C15F7: mov     ecx, [edi]
0x5C15F9: movzx   edx, [esp+38h+var_20]
0x5C15FE: push    eax
0x5C15FF: push    ecx
0x5C1600: push    3A3h
0x5C1605: sub     esi, edx
0x5C1607: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C160C: sub     esi, ebx
0x5C160E: push    esi; ArgList
0x5C160F: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x5C1614: call    PrintError
0x5C1619: add     esp, 20h
0x5C161C: pop     edi
0x5C161D: pop     esi
0x5C161E: pop     ebx
0x5C161F: add     esp, 18h
0x5C1622: retn
0x5C1623: jnb     loc_5C16C3
0x5C1629: mov     eax, [edi+5]
0x5C162C: movzx   edx, byte ptr [edi+9]
0x5C1630: push    eax
0x5C1631: mov     eax, [ecx]
0x5C1633: push    edx
0x5C1634: mov     edx, [eax+0D4h]
0x5C163A: call    edx
0x5C163C: movzx   ecx, [esp+38h+var_20]
0x5C1641: push    eax
0x5C1642: mov     eax, [edi]
0x5C1644: push    eax
0x5C1645: push    3A3h
0x5C164A: sub     ecx, esi
0x5C164C: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C1651: add     ecx, ebx
0x5C1653: push    ecx; ArgList
0x5C1654: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x5C1659: call    PrintError
0x5C165E: add     esp, 20h
0x5C1661: pop     edi
0x5C1662: pop     esi
0x5C1663: pop     ebx
0x5C1664: add     esp, 18h
0x5C1667: retn
0x5C1668: movzx   eax, [esp+30h+var_20]
0x5C166D: mov     edi, [esp+30h+anonymous_0]
0x5C1671: lea     edx, [eax+edi]
0x5C1674: cmp     esi, edx
0x5C1676: jbe     short loc_5C16A0
0x5C1678: movzx   edx, byte ptr [ecx+7Ch]
0x5C167C: push    edx
0x5C167D: push    3A3h
0x5C1682: sub     esi, eax
0x5C1684: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C1689: sub     esi, edi
0x5C168B: push    esi; ArgList
0x5C168C: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x5C1691: call    PrintError
0x5C1696: add     esp, 14h
0x5C1699: pop     edi
0x5C169A: pop     esi
0x5C169B: pop     ebx
0x5C169C: add     esp, 18h
0x5C169F: retn
0x5C16A0: jnb     short loc_5C16C3
0x5C16A2: movzx   ecx, byte ptr [ecx+7Ch]
0x5C16A6: push    ecx
0x5C16A7: push    3A3h
0x5C16AC: sub     eax, esi
0x5C16AE: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C16B3: add     eax, edi
0x5C16B5: push    eax; ArgList
0x5C16B6: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x5C16BB: call    PrintError
0x5C16C0: add     esp, 14h
0x5C16C3: pop     edi
0x5C16C4: pop     esi
0x5C16C5: pop     ebx
0x5C16C6: add     esp, 18h
0x5C16C9: retn
