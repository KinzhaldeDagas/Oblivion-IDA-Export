0x753080: push    esi
0x753081: push    edi
0x753082: mov     edi, [esp+8+arg_0]
0x753086: push    edi
0x753087: mov     esi, ecx
0x753089: call    sub_74F160
0x75308E: test    al, al
0x753090: jnz     short loc_753099
0x753092: pop     edi
0x753093: xor     al, al
0x753095: pop     esi
0x753096: retn    4
0x753099: mov     eax, [esi+50h]
0x75309C: test    eax, eax
0x75309E: jz      short loc_7530AA
0x7530A0: cmp     dword ptr [edi+50h], 0
0x7530A4: jz      short loc_753092
0x7530A6: test    eax, eax
0x7530A8: jnz     short loc_7530B0
0x7530AA: cmp     dword ptr [edi+50h], 0
0x7530AE: jnz     short loc_753092
0x7530B0: pop     edi
0x7530B1: mov     al, 1
0x7530B3: pop     esi
0x7530B4: retn    4
