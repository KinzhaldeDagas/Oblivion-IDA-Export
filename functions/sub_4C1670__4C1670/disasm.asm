0x4C1670: push    ecx
0x4C1671: mov     eax, [ecx+24h]
0x4C1674: test    eax, eax
0x4C1676: push    esi
0x4C1677: mov     esi, [esp+8+arg_0]
0x4C167B: mov     [esp+8+var_4], 0
0x4C1683: mov     [esi], eax
0x4C1685: jz      short loc_4C1691
0x4C1687: add     eax, 4
0x4C168A: push    eax; lpAddend
0x4C168B: call    dword ptr ds:0A28078h
0x4C1691: mov     eax, esi
0x4C1693: pop     esi
0x4C1694: pop     ecx
0x4C1695: retn    4
