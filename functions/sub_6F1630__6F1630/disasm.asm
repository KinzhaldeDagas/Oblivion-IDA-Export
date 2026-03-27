0x6F1630: sub     esp, 8
0x6F1633: push    ebx
0x6F1634: push    esi
0x6F1635: mov     esi, ecx
0x6F1637: mov     ebx, [esi+8]
0x6F163A: cmp     [esi+4], ebx
0x6F163D: push    edi
0x6F163E: jbe     short loc_6F1645
0x6F1640: call    __invalid_parameter_noinfo
0x6F1645: mov     edi, [esi+4]
0x6F1648: cmp     edi, [esi+8]
0x6F164B: jbe     short loc_6F1652
0x6F164D: call    __invalid_parameter_noinfo
0x6F1652: push    ebx
0x6F1653: push    esi
0x6F1654: push    edi
0x6F1655: push    esi
0x6F1656: lea     eax, [esp+24h+var_8]
0x6F165A: push    eax
0x6F165B: mov     ecx, esi
0x6F165D: call    sub_6F1470
0x6F1662: pop     edi
0x6F1663: pop     esi
0x6F1664: pop     ebx
0x6F1665: add     esp, 8
0x6F1668: retn
