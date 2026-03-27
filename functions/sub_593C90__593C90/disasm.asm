0x593C90: push    esi
0x593C91: mov     esi, ecx
0x593C93: mov     ecx, [esi+0A0h]
0x593C99: call    sub_57D2F0
0x593C9E: test    al, al
0x593CA0: jz      short loc_593CC6
0x593CA2: mov     eax, [esp+4+arg_0]
0x593CA6: mov     ecx, [esi+0A0h]
0x593CAC: push    eax
0x593CAD: call    sub_57FF50
0x593CB2: mov     ecx, esi
0x593CB4: call    sub_593710
0x593CB9: mov     byte ptr [esi+0A4h], 2
0x593CC0: mov     al, 1
0x593CC2: pop     esi
0x593CC3: retn    4
0x593CC6: xor     al, al
0x593CC8: pop     esi
0x593CC9: retn    4
