0x6A1590: push    ebx
0x6A1591: push    ebp
0x6A1592: push    esi
0x6A1593: mov     esi, ecx
0x6A1595: mov     edx, [esi+1Ch]
0x6A1598: xor     ebp, ebp
0x6A159A: cmp     edx, ebp
0x6A159C: push    edi
0x6A159D: jz      short loc_6A15CF
0x6A159F: mov     eax, [esi+34h]
0x6A15A2: cmp     eax, ebp
0x6A15A4: jz      short loc_6A15CF
0x6A15A6: mov     eax, [eax+0Ch]
0x6A15A9: cmp     eax, 852FEh
0x6A15AE: jz      short loc_6A15B7
0x6A15B0: cmp     eax, 84A51h
0x6A15B5: jnz     short loc_6A15CF
0x6A15B7: mov     eax, ds:0B33398h
0x6A15BC: mov     ecx, [eax+24h]
0x6A15BF: cmp     ecx, ebp
0x6A15C1: jz      short loc_6A15CF
0x6A15C3: fld1
0x6A15C5: push    ecx
0x6A15C6: fstp    [esp+14h+var_14]; float
0x6A15C9: push    edx; int
0x6A15CA: call    sub_6AC420
0x6A15CF: cmp     [esi+48h], ebp
0x6A15D2: jz      short loc_6A1630
0x6A15D4: mov     eax, [esi+1Ch]
0x6A15D7: mov     ecx, ds:0B333C4h
0x6A15DD: cmp     eax, ecx
0x6A15DF: jnz     short loc_6A160F
0x6A15E1: push    1
0x6A15E3: call    PlayerCharacter_GetPlayerNode
0x6A15E8: cmp     eax, ebp
0x6A15EA: jz      short loc_6A15F9
0x6A15EC: mov     ecx, [esi+48h]
0x6A15EF: push    ecx
0x6A15F0: mov     ecx, [esi+34h]
0x6A15F3: push    eax
0x6A15F4: call    sub_4ADAD0
0x6A15F9: mov     ecx, ds:0B333C4h
0x6A15FF: push    ebp
0x6A1600: call    PlayerCharacter_GetPlayerNode
0x6A1605: cmp     eax, ebp
0x6A1607: jz      short loc_6A1630
0x6A1609: mov     edx, [esi+48h]
0x6A160C: push    edx
0x6A160D: jmp     short loc_6A1627
0x6A160F: cmp     eax, ebp
0x6A1611: jz      short loc_6A1630
0x6A1613: mov     edx, [eax]
0x6A1615: mov     ecx, eax
0x6A1617: mov     eax, [edx+154h]
0x6A161D: call    eax
0x6A161F: cmp     eax, ebp
0x6A1621: jz      short loc_6A1630
0x6A1623: mov     ecx, [esi+48h]
0x6A1626: push    ecx
0x6A1627: mov     ecx, [esi+34h]
0x6A162A: push    eax
0x6A162B: call    sub_4ADAD0
0x6A1630: mov     eax, [esi+40h]
0x6A1633: cmp     eax, ebp
0x6A1635: jz      short loc_6A1644
0x6A1637: mov     edx, [esi+3Ch]
0x6A163A: mov     ecx, [esi+34h]
0x6A163D: push    edx
0x6A163E: push    eax
0x6A163F: call    sub_4AC740
0x6A1644: mov     edi, [esi+3Ch]
0x6A1647: cmp     edi, ebp
0x6A1649: mov     ebx, ds:0A2807Ch
0x6A164F: jz      short loc_6A166C
0x6A1651: lea     eax, [edi+4]
0x6A1654: push    eax; lpAddend
0x6A1655: call    ebx ; InterlockedDecrement
0x6A1657: test    eax, eax
0x6A1659: jnz     short loc_6A1669
0x6A165B: cmp     edi, ebp
0x6A165D: jz      short loc_6A1669
0x6A165F: mov     edx, [edi]
0x6A1661: mov     eax, [edx]
0x6A1663: push    1
0x6A1665: mov     ecx, edi
0x6A1667: call    eax
0x6A1669: mov     [esi+3Ch], ebp
0x6A166C: mov     ecx, [esi+40h]
0x6A166F: cmp     ecx, ebp
0x6A1671: jz      short loc_6A1679
0x6A1673: push    ebp
0x6A1674: call    sub_7074B0
0x6A1679: mov     edi, [esi+40h]
0x6A167C: cmp     edi, ebp
0x6A167E: jz      short loc_6A169B
0x6A1680: lea     ecx, [edi+4]
0x6A1683: push    ecx; lpAddend
0x6A1684: call    ebx ; InterlockedDecrement
0x6A1686: test    eax, eax
0x6A1688: jnz     short loc_6A1698
0x6A168A: cmp     edi, ebp
0x6A168C: jz      short loc_6A1698
0x6A168E: mov     edx, [edi]
0x6A1690: mov     eax, [edx]
0x6A1692: push    1
0x6A1694: mov     ecx, edi
0x6A1696: call    eax
0x6A1698: mov     [esi+40h], ebp
0x6A169B: mov     edi, [esi+48h]
0x6A169E: cmp     edi, ebp
0x6A16A0: jz      short loc_6A16BD
0x6A16A2: lea     ecx, [edi+4]
0x6A16A5: push    ecx; lpAddend
0x6A16A6: call    ebx ; InterlockedDecrement
0x6A16A8: test    eax, eax
0x6A16AA: jnz     short loc_6A16BA
0x6A16AC: cmp     edi, ebp
0x6A16AE: jz      short loc_6A16BA
0x6A16B0: mov     edx, [edi]
0x6A16B2: mov     eax, [edx]
0x6A16B4: push    1
0x6A16B6: mov     ecx, edi
0x6A16B8: call    eax
0x6A16BA: mov     [esi+48h], ebp
0x6A16BD: pop     edi
0x6A16BE: mov     [esi+1Ch], ebp
0x6A16C1: pop     esi
0x6A16C2: pop     ebp
0x6A16C3: pop     ebx
0x6A16C4: retn
