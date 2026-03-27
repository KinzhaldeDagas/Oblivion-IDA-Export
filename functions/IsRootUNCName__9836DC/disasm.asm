0x9836DC: push    esi; Str
0x9836DD: call    _strlen
0x9836E2: cmp     eax, 5
0x9836E5: pop     ecx
0x9836E6: jb      short loc_983751
0x9836E8: mov     al, [esi]
0x9836EA: cmp     al, 5Ch ; '\'
0x9836EC: jz      short loc_9836F2
0x9836EE: cmp     al, 2Fh ; '/'
0x9836F0: jnz     short loc_983751
0x9836F2: mov     al, [esi+1]
0x9836F5: cmp     al, 5Ch ; '\'
0x9836F7: jz      short loc_9836FD
0x9836F9: cmp     al, 2Fh ; '/'
0x9836FB: jnz     short loc_983751
0x9836FD: mov     al, [esi+2]
0x983700: cmp     al, 5Ch ; '\'
0x983702: jz      short loc_983751
0x983704: cmp     al, 2Fh ; '/'
0x983706: jz      short loc_983751
0x983708: lea     eax, [esi+3]
0x98370B: mov     cl, [eax]
0x98370D: xor     dl, dl
0x98370F: cmp     cl, dl
0x983711: jz      short loc_983751
0x983713: cmp     cl, 5Ch ; '\'
0x983716: jz      short loc_983724
0x983718: cmp     cl, 2Fh ; '/'
0x98371B: jz      short loc_983724
0x98371D: inc     eax
0x98371E: mov     cl, [eax]
0x983720: cmp     cl, dl
0x983722: jnz     short loc_983713
0x983724: cmp     [eax], dl
0x983726: jz      short loc_983751
0x983728: inc     eax
0x983729: cmp     [eax], dl
0x98372B: jz      short loc_983751
0x98372D: mov     cl, [eax]
0x98372F: cmp     cl, dl
0x983731: jz      short loc_98374D
0x983733: cmp     cl, 5Ch ; '\'
0x983736: jz      short loc_983744
0x983738: cmp     cl, 2Fh ; '/'
0x98373B: jz      short loc_983744
0x98373D: inc     eax
0x98373E: mov     cl, [eax]
0x983740: cmp     cl, dl
0x983742: jnz     short loc_983733
0x983744: cmp     [eax], dl
0x983746: jz      short loc_98374D
0x983748: cmp     [eax+1], dl
0x98374B: jnz     short loc_983751
0x98374D: xor     eax, eax
0x98374F: inc     eax
0x983750: retn
0x983751: xor     eax, eax
0x983753: retn
