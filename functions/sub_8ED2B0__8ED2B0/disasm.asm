0x8ED2B0: push    esi
0x8ED2B1: mov     esi, ecx
0x8ED2B3: mov     eax, [esi+124h]
0x8ED2B9: test    eax, eax
0x8ED2BB: jnz     short loc_8ED328
0x8ED2BD: mov     eax, [esi+128h]
0x8ED2C3: test    eax, eax
0x8ED2C5: js      short loc_8ED2FE
0x8ED2C7: mov     ecx, ds:0BA9DE4h
0x8ED2CD: mov     edx, large fs:2Ch
0x8ED2D4: mov     ecx, [edx+ecx*4]
0x8ED2D7: mov     ecx, [ecx+19Ch]
0x8ED2DD: test    ecx, ecx
0x8ED2DF: jnz     short loc_8ED2E7
0x8ED2E1: mov     ecx, ds:0BA7D9Ch
0x8ED2E7: mov     edx, [esi+120h]
0x8ED2ED: and     eax, 3FFFFFFFh
0x8ED2F2: push    14h
0x8ED2F4: shl     eax, 2
0x8ED2F7: push    eax
0x8ED2F8: push    edx
0x8ED2F9: call    sub_8A75D0
0x8ED2FE: mov     eax, [esi+128h]
0x8ED304: and     eax, 0C0000000h
0x8ED309: or      eax, 80000000h
0x8ED30E: mov     dword ptr [esi+120h], 0
0x8ED318: mov     dword ptr [esi+124h], 0
0x8ED322: mov     [esi+128h], eax
0x8ED328: mov     ecx, esi
0x8ED32A: pop     esi
0x8ED32B: jmp     sub_8ABA30
