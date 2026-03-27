0x7A14E0: push    0FFFFFFFFh
0x7A14E2: push    offset SEH_7A14E0
0x7A14E7: mov     eax, large fs:0
0x7A14ED: push    eax
0x7A14EE: push    ecx
0x7A14EF: push    ebx
0x7A14F0: push    esi
0x7A14F1: push    edi
0x7A14F2: mov     eax, ds:0B30AACh
0x7A14F7: xor     eax, esp
0x7A14F9: push    eax
0x7A14FA: lea     eax, [esp+20h+var_C]
0x7A14FE: mov     large fs:0, eax
0x7A1504: mov     edi, ecx
0x7A1506: mov     [esp+20h+var_10], edi
0x7A150A: mov     esi, [edi+30h]
0x7A150D: xor     ebx, ebx
0x7A150F: cmp     esi, ebx
0x7A1511: mov     [esp+20h+var_4], 2
0x7A1519: jz      short loc_7A152B
0x7A151B: mov     ecx, esi
0x7A151D: call    sub_784B60
0x7A1522: push    esi
0x7A1523: call    FormHeapFree
0x7A1528: add     esp, 4
0x7A152B: lea     esi, [edi+40h]
0x7A152E: mov     [edi+30h], ebx
0x7A1531: mov     eax, [esi+4]
0x7A1534: cmp     eax, ebx
0x7A1536: jz      short loc_7A1554
0x7A1538: mov     ecx, [esp+20h+var_10]
0x7A153C: mov     edx, [esi+8]
0x7A153F: push    ecx
0x7A1540: push    esi
0x7A1541: push    edx
0x7A1542: push    eax
0x7A1543: call    sub_79B120
0x7A1548: mov     eax, [esi+4]
0x7A154B: push    eax
0x7A154C: call    FormHeapFree
0x7A1551: add     esp, 14h
0x7A1554: mov     [esi+4], ebx
0x7A1557: mov     [esi+8], ebx
0x7A155A: mov     [esi+0Ch], ebx
0x7A155D: mov     eax, [edi+1Ch]
0x7A1560: cmp     eax, ebx
0x7A1562: lea     esi, [edi+18h]
0x7A1565: jz      short loc_7A1583
0x7A1567: mov     ecx, [esp+20h+var_10]
0x7A156B: mov     edx, [esi+8]
0x7A156E: push    ecx
0x7A156F: push    esi
0x7A1570: push    edx
0x7A1571: push    eax
0x7A1572: call    sub_7A0CD0
0x7A1577: mov     eax, [esi+4]
0x7A157A: push    eax
0x7A157B: call    FormHeapFree
0x7A1580: add     esp, 14h
0x7A1583: mov     [esi+4], ebx
0x7A1586: mov     [esi+8], ebx
0x7A1589: mov     [esi+0Ch], ebx
0x7A158C: mov     eax, [edi+0Ch]
0x7A158F: cmp     eax, ebx
0x7A1591: lea     esi, [edi+8]
0x7A1594: jz      short loc_7A15B2
0x7A1596: mov     ecx, [esp+20h+var_10]
0x7A159A: mov     edx, [esi+8]
0x7A159D: push    ecx
0x7A159E: push    esi
0x7A159F: push    edx
0x7A15A0: push    eax
0x7A15A1: call    sub_79E150
0x7A15A6: mov     eax, [esi+4]
0x7A15A9: push    eax
0x7A15AA: call    FormHeapFree
0x7A15AF: add     esp, 14h
0x7A15B2: mov     [esi+4], ebx
0x7A15B5: mov     [esi+8], ebx
0x7A15B8: mov     [esi+0Ch], ebx
0x7A15BB: mov     ecx, [esp+20h+var_C]
0x7A15BF: mov     large fs:0, ecx
0x7A15C6: pop     ecx
0x7A15C7: pop     edi
0x7A15C8: pop     esi
0x7A15C9: pop     ebx
0x7A15CA: add     esp, 10h
0x7A15CD: retn
