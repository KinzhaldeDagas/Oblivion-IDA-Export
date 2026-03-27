0x8E14E0: sub     esp, 18h
0x8E14E3: mov     eax, ds:0BA9DE4h
0x8E14E8: push    ebx
0x8E14E9: push    ebp
0x8E14EA: push    esi
0x8E14EB: mov     esi, ecx
0x8E14ED: mov     ebx, [esi+44h]
0x8E14F0: mov     ecx, large fs:2Ch
0x8E14F7: mov     eax, [ecx+eax*4]
0x8E14FA: mov     ecx, [eax+19Ch]
0x8E1500: mov     ebp, [ecx+2Ch]
0x8E1503: mov     edx, ebx
0x8E1505: sar     edx, 5
0x8E1508: mov     [esp+24h+var_4], eax
0x8E150C: lea     eax, ds:30h[edx*4]
0x8E1513: push    edi
0x8E1514: mov     edi, [ecx+20h]
0x8E1517: and     eax, 0FFFFFFF0h
0x8E151A: lea     edx, [edi+eax]
0x8E151D: cmp     edx, ebp
0x8E151F: ja      short loc_8E152A
0x8E1521: mov     [ecx+20h], edx
0x8E1524: mov     [esp+28h+var_10], edi
0x8E1528: jmp     short loc_8E1536
0x8E152A: mov     edx, [ecx]
0x8E152C: push    eax
0x8E152D: call    dword ptr [edx+0Ch]
0x8E1530: mov     [esp+28h+var_10], eax
0x8E1534: mov     edi, eax
0x8E1536: mov     eax, [esp+28h+arg_0]
0x8E153A: mov     eax, [eax]
0x8E153C: mov     ecx, [esi+40h]
0x8E153F: mov     edx, [esi+4Ch]
0x8E1542: mov     ebp, eax
0x8E1544: shl     ebp, 4
0x8E1547: add     ebp, ecx
0x8E1549: movzx   ecx, word ptr [ebp+8]
0x8E154D: push    edi
0x8E154E: push    eax
0x8E154F: movzx   eax, word ptr [edx+ecx*4]
0x8E1553: push    ebp
0x8E1554: push    eax
0x8E1555: push    ebx
0x8E1556: mov     ecx, esi
0x8E1558: mov     [esp+3Ch+var_14], edi
0x8E155C: mov     [esp+3Ch+var_C], ebp
0x8E1560: call    sub_8E0E90
0x8E1565: mov     ecx, [esi+40h]
0x8E1568: mov     edx, [esi+44h]
0x8E156B: sar     edx, 5
0x8E156E: mov     [esp+28h+var_18], ecx
0x8E1572: lea     ecx, [edi+edx*4+4]
0x8E1576: cmp     edi, ecx
0x8E1578: mov     [esp+28h+var_8], ecx
0x8E157C: jnb     loc_8E1634
0x8E1582: mov     edi, [esp+28h+arg_4]
0x8E1586: mov     eax, [esp+28h+var_14]
0x8E158A: mov     ebx, [eax]
0x8E158C: test    ebx, ebx
0x8E158E: mov     esi, [esp+28h+var_18]
0x8E1592: jz      short loc_8E160F
0x8E1594: test    bl, bl
0x8E1596: jnz     short loc_8E15A3
0x8E1598: add     esi, 80h ; '€'
0x8E159E: shr     ebx, 8
0x8E15A1: jmp     short loc_8E1607
0x8E15A3: test    bl, 1
0x8E15A6: jz      short loc_8E1602
0x8E15A8: mov     edx, [esi]
0x8E15AA: mov     ecx, [ebp+4]
0x8E15AD: mov     eax, [ebp+0]
0x8E15B0: sub     ecx, edx
0x8E15B2: mov     edx, [esi+4]
0x8E15B5: sub     edx, eax
0x8E15B7: or      ecx, edx
0x8E15B9: test    ecx, 80008000h
0x8E15BF: jnz     short loc_8E1602
0x8E15C1: mov     eax, [esi+0Ch]
0x8E15C4: test    al, 1
0x8E15C6: mov     [esp+28h+arg_4], eax
0x8E15CA: jnz     short loc_8E1602
0x8E15CC: mov     ecx, [edi+8]
0x8E15CF: mov     edx, [edi+4]
0x8E15D2: and     ecx, 3FFFFFFFh
0x8E15D8: cmp     edx, ecx
0x8E15DA: jnz     short loc_8E15EB
0x8E15DC: push    8
0x8E15DE: push    edi
0x8E15DF: call    sub_8A6EE0
0x8E15E4: mov     eax, [esp+30h+arg_4]
0x8E15E8: add     esp, 8
0x8E15EB: mov     edx, [edi+4]
0x8E15EE: mov     ecx, [edi]
0x8E15F0: mov     ebp, [esp+28h+arg_0]
0x8E15F4: mov     [ecx+edx*8], ebp
0x8E15F7: mov     ebp, [esp+28h+var_C]
0x8E15FB: mov     [ecx+edx*8+4], eax
0x8E15FF: inc     dword ptr [edi+4]
0x8E1602: add     esi, 10h
0x8E1605: shr     ebx, 1
0x8E1607: test    ebx, ebx
0x8E1609: jnz     short loc_8E1594
0x8E160B: mov     ecx, [esp+28h+var_8]
0x8E160F: mov     eax, [esp+28h+var_14]
0x8E1613: mov     ebx, [esp+28h+var_18]
0x8E1617: add     eax, 4
0x8E161A: add     ebx, 200h
0x8E1620: cmp     eax, ecx
0x8E1622: mov     [esp+28h+var_18], ebx
0x8E1626: mov     [esp+28h+var_14], eax
0x8E162A: jb      loc_8E1586
0x8E1630: mov     edi, [esp+28h+var_10]
0x8E1634: mov     edx, [esp+28h+var_4]
0x8E1638: mov     ecx, [edx+19Ch]
0x8E163E: cmp     edi, [ecx+28h]
0x8E1641: mov     [ecx+20h], edi
0x8E1644: jnz     short loc_8E164C
0x8E1646: mov     eax, [ecx]
0x8E1648: push    edi
0x8E1649: call    dword ptr [eax+10h]
0x8E164C: pop     edi
0x8E164D: pop     esi
0x8E164E: pop     ebp
0x8E164F: pop     ebx
0x8E1650: add     esp, 18h
0x8E1653: retn    8
