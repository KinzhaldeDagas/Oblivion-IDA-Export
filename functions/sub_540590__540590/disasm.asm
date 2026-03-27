0x540590: push    esi
0x540591: mov     esi, [ecx+0E0h]
0x540597: test    esi, esi
0x540599: jz      short loc_5405B4
0x54059B: jmp     short loc_5405A0
0x54059D: align 10h
0x5405A0: mov     eax, [esi]
0x5405A2: test    eax, eax
0x5405A4: jz      short loc_5405B4
0x5405A6: mov     ecx, [eax]
0x5405A8: call    sub_6B7240
0x5405AD: mov     esi, [esi+4]
0x5405B0: test    esi, esi
0x5405B2: jnz     short loc_5405A0
0x5405B4: pop     esi
0x5405B5: retn
