0x90F950: push    esi
0x90F951: mov     esi, ecx
0x90F953: mov     eax, [esi+124h]
0x90F959: test    eax, eax
0x90F95B: jnz     short loc_90F9C8
0x90F95D: mov     eax, [esi+128h]
0x90F963: test    eax, eax
0x90F965: js      short loc_90F99E
0x90F967: mov     ecx, ds:0BA9DE4h
0x90F96D: mov     edx, large fs:2Ch
0x90F974: mov     ecx, [edx+ecx*4]
0x90F977: mov     ecx, [ecx+19Ch]
0x90F97D: test    ecx, ecx
0x90F97F: jnz     short loc_90F987
0x90F981: mov     ecx, ds:0BA7D9Ch
0x90F987: mov     edx, [esi+120h]
0x90F98D: and     eax, 3FFFFFFFh
0x90F992: push    14h
0x90F994: shl     eax, 3
0x90F997: push    eax
0x90F998: push    edx
0x90F999: call    sub_8A75D0
0x90F99E: mov     eax, [esi+128h]
0x90F9A4: and     eax, 0C0000000h
0x90F9A9: or      eax, 80000000h
0x90F9AE: mov     dword ptr [esi+120h], 0
0x90F9B8: mov     dword ptr [esi+124h], 0
0x90F9C2: mov     [esi+128h], eax
0x90F9C8: mov     ecx, esi
0x90F9CA: pop     esi
0x90F9CB: jmp     sub_8ABA30
