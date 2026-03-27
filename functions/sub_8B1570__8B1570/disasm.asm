0x8B1570: push    ebx
0x8B1571: mov     ebx, [esp+4+arg_0]
0x8B1575: mov     eax, ebx
0x8B1577: shr     eax, 4
0x8B157A: imul    eax, 9E3779B1h
0x8B1580: push    esi
0x8B1581: mov     esi, [ecx+8]
0x8B1584: push    edi
0x8B1585: mov     edi, [ecx]
0x8B1587: and     eax, esi
0x8B1589: mov     edx, [edi+eax*4]
0x8B158C: test    edx, edx
0x8B158E: jz      short loc_8B159E
0x8B1590: cmp     edx, ebx
0x8B1592: jz      short loc_8B15A1
0x8B1594: inc     eax
0x8B1595: and     eax, esi
0x8B1597: mov     edx, [edi+eax*4]
0x8B159A: test    edx, edx
0x8B159C: jnz     short loc_8B1590
0x8B159E: lea     eax, [esi+1]
0x8B15A1: pop     edi
0x8B15A2: cmp     eax, esi
0x8B15A4: pop     esi
0x8B15A5: pop     ebx
0x8B15A6: jg      short loc_8B15B3
0x8B15A8: push    eax
0x8B15A9: call    sub_8B0FA0
0x8B15AE: xor     eax, eax
0x8B15B0: retn    4
0x8B15B3: mov     eax, 1
0x8B15B8: retn    4
