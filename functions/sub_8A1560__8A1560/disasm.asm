0x8A1560: push    esi
0x8A1561: push    edi
0x8A1562: mov     edi, [esp+8+arg_0]
0x8A1566: cmp     edi, 0FFFFFFFFh
0x8A1569: mov     esi, ecx
0x8A156B: jz      short loc_8A15AF
0x8A156D: test    esi, esi
0x8A156F: jz      short loc_8A1581
0x8A1571: mov     ecx, [esi+8]
0x8A1574: test    ecx, ecx
0x8A1576: jz      short loc_8A1581
0x8A1578: mov     eax, [ecx]
0x8A157A: mov     edx, [eax+1Ch]
0x8A157D: call    edx
0x8A157F: jmp     short loc_8A1583
0x8A1581: xor     eax, eax
0x8A1583: cmp     edi, eax
0x8A1585: ja      short loc_8A15AF
0x8A1587: test    esi, esi
0x8A1589: jz      short loc_8A15A1
0x8A158B: mov     eax, [esi+8]
0x8A158E: test    eax, eax
0x8A1590: jz      short loc_8A15A1
0x8A1592: mov     eax, [eax+10h]
0x8A1595: mov     eax, [eax+edi*8]
0x8A1598: test    eax, eax
0x8A159A: jz      short loc_8A15A1
0x8A159C: mov     eax, [eax+8]
0x8A159F: jmp     short loc_8A15A3
0x8A15A1: xor     eax, eax
0x8A15A3: test    eax, eax
0x8A15A5: jz      short loc_8A15AF
0x8A15A7: mov     eax, [eax+10h]
0x8A15AA: pop     edi
0x8A15AB: pop     esi
0x8A15AC: retn    4
0x8A15AF: mov     eax, [esi+10h]
0x8A15B2: pop     edi
0x8A15B3: pop     esi
0x8A15B4: retn    4
