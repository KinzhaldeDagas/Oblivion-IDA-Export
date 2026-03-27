0x772400: push    esi
0x772401: mov     esi, ecx
0x772403: mov     eax, [esi]
0x772405: mov     ecx, [esi+0Ch]
0x772408: push    eax
0x772409: call    sub_773440
0x77240E: test    eax, eax
0x772410: jz      short loc_772416
0x772412: xor     al, al
0x772414: pop     esi
0x772415: retn
0x772416: mov     ecx, esi
0x772418: call    sub_7721E0
0x77241D: mov     al, 1
0x77241F: pop     esi
0x772420: retn
