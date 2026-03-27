0x4C9300: push    ebx
0x4C9301: push    esi
0x4C9302: mov     esi, ds:0B33A98h
0x4C9308: xor     bl, bl
0x4C930A: add     esi, 4Ch ; 'L'
0x4C930D: jz      short loc_4C932F
0x4C930F: nop
0x4C9310: cmp     dword ptr [esi+4], 0
0x4C9314: jnz     short loc_4C931B
0x4C9316: cmp     dword ptr [esi], 0
0x4C9319: jz      short loc_4C932F
0x4C931B: mov     ecx, [esi]
0x4C931D: call    sub_4C9230
0x4C9322: test    al, al
0x4C9324: jz      short loc_4C9328
0x4C9326: mov     bl, 1
0x4C9328: mov     esi, [esi+4]
0x4C932B: test    esi, esi
0x4C932D: jnz     short loc_4C9310
0x4C932F: pop     esi
0x4C9330: mov     al, bl
0x4C9332: pop     ebx
0x4C9333: retn
