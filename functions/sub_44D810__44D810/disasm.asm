0x44D810: push    esi
0x44D811: push    offset stru_B33F00; lpCriticalSection
0x44D816: call    dword ptr ds:0A2806Ch
0x44D81C: call    dword ptr ds:0A2808Ch
0x44D822: mov     esi, ds:0B33EACh
0x44D828: add     dword ptr ds:0B33F7Ch, 1
0x44D82F: test    esi, esi
0x44D831: mov     ds:0B33F78h, eax
0x44D836: jnz     short loc_44D843
0x44D838: call    sub_44D770
0x44D83D: mov     esi, ds:0B33EACh
0x44D843: mov     eax, [esi]
0x44D845: mov     ds:0B33EACh, eax
0x44D84A: mov     dword ptr [esi+8], 0
0x44D851: mov     dword ptr [esi], 0
0x44D857: mov     dword ptr [esi+4], 0
0x44D85E: sub     dword ptr ds:0B33F7Ch, 1
0x44D865: jnz     short loc_44D871
0x44D867: mov     dword ptr ds:0B33F78h, 0
0x44D871: push    offset stru_B33F00; lpCriticalSection
0x44D876: call    dword ptr ds:0A28074h
0x44D87C: mov     eax, esi
0x44D87E: pop     esi
0x44D87F: retn
