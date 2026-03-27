0x4F1510: mov     eax, [esp+arg_0]
0x4F1514: push    ebx
0x4F1515: push    edi
0x4F1516: push    0; int
0x4F1518: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4F151D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F1522: push    0; int
0x4F1524: push    eax; void *
0x4F1525: mov     ebx, ecx
0x4F1527: call    OblivionDynamicCast
0x4F152C: mov     edi, eax
0x4F152E: add     esp, 14h
0x4F1531: test    edi, edi
0x4F1533: jnz     short loc_4F153C
0x4F1535: pop     edi
0x4F1536: mov     al, 1
0x4F1538: pop     ebx
0x4F1539: retn    4
0x4F153C: push    edi; a2
0x4F153D: mov     ecx, ebx; this
0x4F153F: call    TESForm_CompareAllComponentsTo
0x4F1544: test    al, al
0x4F1546: jnz     short loc_4F1535
0x4F1548: mov     cl, [ebx+5Ch]
0x4F154B: cmp     cl, [edi+5Ch]
0x4F154E: jnz     short loc_4F1535
0x4F1550: mov     edx, [ebx+7Ch]
0x4F1553: cmp     edx, [edi+7Ch]
0x4F1556: jnz     short loc_4F1535
0x4F1558: mov     ecx, edi
0x4F155A: call    sub_4EF7A0
0x4F155F: mov     ecx, ebx
0x4F1561: mov     edx, eax
0x4F1563: call    sub_4EF7A0
0x4F1568: cmp     eax, edx
0x4F156A: jnz     short loc_4F1535
0x4F156C: mov     ecx, edi; a1
0x4F156E: call    TESWorldSpace__GetWaterFormParents
0x4F1573: mov     ecx, ebx; a1
0x4F1575: mov     edx, eax
0x4F1577: call    TESWorldSpace__GetWaterFormParents
0x4F157C: cmp     eax, edx
0x4F157E: jnz     short loc_4F1535
0x4F1580: push    ebp
0x4F1581: mov     eax, 10h
0x4F1586: lea     ecx, [edi+84h]
0x4F158C: lea     edx, [ebx+84h]
0x4F1592: push    esi
0x4F1593: mov     esi, [edx]
0x4F1595: cmp     esi, [ecx]
0x4F1597: jnz     short loc_4F15AB
0x4F1599: sub     eax, 4
0x4F159C: add     ecx, 4
0x4F159F: add     edx, 4
0x4F15A2: cmp     eax, 4
0x4F15A5: jnb     short loc_4F1593
0x4F15A7: test    eax, eax
0x4F15A9: jz      short loc_4F1608
0x4F15AB: movzx   esi, byte ptr [edx]
0x4F15AE: movzx   ebp, byte ptr [ecx]
0x4F15B1: sub     esi, ebp
0x4F15B3: jnz     short loc_4F15FA
0x4F15B5: sub     eax, 1
0x4F15B8: add     ecx, 1
0x4F15BB: add     edx, 1
0x4F15BE: test    eax, eax
0x4F15C0: jz      short loc_4F1608
0x4F15C2: movzx   esi, byte ptr [edx]
0x4F15C5: movzx   ebp, byte ptr [ecx]
0x4F15C8: sub     esi, ebp
0x4F15CA: jnz     short loc_4F15FA
0x4F15CC: sub     eax, 1
0x4F15CF: add     ecx, 1
0x4F15D2: add     edx, 1
0x4F15D5: test    eax, eax
0x4F15D7: jz      short loc_4F1608
0x4F15D9: movzx   esi, byte ptr [edx]
0x4F15DC: movzx   ebp, byte ptr [ecx]
0x4F15DF: sub     esi, ebp
0x4F15E1: jnz     short loc_4F15FA
0x4F15E3: sub     eax, 1
0x4F15E6: add     ecx, 1
0x4F15E9: add     edx, 1
0x4F15EC: test    eax, eax
0x4F15EE: jz      short loc_4F1608
0x4F15F0: movzx   esi, byte ptr [edx]
0x4F15F3: movzx   eax, byte ptr [ecx]
0x4F15F6: sub     esi, eax
0x4F15F8: jz      short loc_4F1608
0x4F15FA: test    esi, esi
0x4F15FC: mov     eax, 1
0x4F1601: jg      short loc_4F160A
0x4F1603: or      eax, 0FFFFFFFFh
0x4F1606: jmp     short loc_4F160A
0x4F1608: xor     eax, eax
0x4F160A: test    eax, eax
0x4F160C: pop     esi
0x4F160D: pop     ebp
0x4F160E: jnz     loc_4F1535
0x4F1614: mov     ecx, [ebx+94h]
0x4F161A: cmp     ecx, [edi+94h]
0x4F1620: pop     edi
0x4F1621: setnz   al
0x4F1624: pop     ebx
0x4F1625: retn    4
