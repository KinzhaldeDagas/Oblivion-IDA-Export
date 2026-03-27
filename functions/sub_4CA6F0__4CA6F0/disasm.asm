0x4CA6F0: mov     al, [ecx+24h]
0x4CA6F3: test    al, 1
0x4CA6F5: jz      short loc_4CA6FD
0x4CA6F7: shr     al, 3
0x4CA6FA: and     al, 1
0x4CA6FC: retn
0x4CA6FD: mov     ecx, [ecx+50h]
0x4CA700: test    ecx, ecx
0x4CA702: jz      short loc_4CA709
0x4CA704: jmp     sub_4EF150
0x4CA709: xor     al, al
0x4CA70B: retn
