0x6F1530: push    ebp
0x6F1531: mov     ebp, [esp+4+arg_4]
0x6F1535: test    ebp, ebp
0x6F1537: push    esi
0x6F1538: push    edi
0x6F1539: mov     edi, ecx
0x6F153B: jz      short loc_6F1543
0x6F153D: cmp     ebp, [esp+0Ch+arg_C]
0x6F1541: jz      short loc_6F1548
0x6F1543: call    __invalid_parameter_noinfo
0x6F1548: mov     esi, [esp+0Ch+arg_8]
0x6F154C: mov     eax, [esp+0Ch+arg_10]
0x6F1550: cmp     esi, eax
0x6F1552: jz      short loc_6F158B
0x6F1554: mov     ecx, [edi+8]
0x6F1557: mov     edx, ecx
0x6F1559: sub     edx, eax
0x6F155B: sar     edx, 3
0x6F155E: cmp     eax, ecx
0x6F1560: push    ebx
0x6F1561: lea     ebx, [esi+edx*8]
0x6F1564: jz      short loc_6F1587
0x6F1566: mov     edx, esi
0x6F1568: sub     edx, eax
0x6F156A: lea     ebx, [ebx+0]
0x6F1570: mov     ebp, [eax]
0x6F1572: mov     [edx+eax], ebp
0x6F1575: mov     ebp, [eax+4]
0x6F1578: mov     [edx+eax+4], ebp
0x6F157C: add     eax, 8
0x6F157F: cmp     eax, ecx
0x6F1581: jnz     short loc_6F1570
0x6F1583: mov     ebp, [esp+10h+arg_4]
0x6F1587: mov     [edi+8], ebx
0x6F158A: pop     ebx
0x6F158B: mov     eax, [esp+0Ch+arg_0]
0x6F158F: pop     edi
0x6F1590: mov     [eax+4], esi
0x6F1593: pop     esi
0x6F1594: mov     [eax], ebp
0x6F1596: pop     ebp
0x6F1597: retn    14h
