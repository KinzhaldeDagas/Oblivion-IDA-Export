0x739200: push    ebx
0x739201: mov     ebx, [esp+4+a2]
0x739205: push    edi
0x739206: push    ebx; a2
0x739207: mov     edi, ecx
0x739209: call    sub_700650
0x73920E: test    al, al
0x739210: jnz     short loc_739217
0x739212: pop     edi
0x739213: pop     ebx
0x739214: retn    4
0x739217: push    esi
0x739218: mov     esi, 8
0x73921D: lea     ecx, [ecx+0]
0x739220: mov     eax, [edi+8]
0x739223: mov     ecx, [esi+eax]
0x739226: mov     edx, [ecx]
0x739228: mov     eax, [edx+24h]
0x73922B: push    ebx
0x73922C: call    eax
0x73922E: add     esi, 4
0x739231: cmp     esi, 30h ; '0'
0x739234: jb      short loc_739220
0x739236: pop     esi
0x739237: pop     edi
0x739238: mov     al, 1
0x73923A: pop     ebx
0x73923B: retn    4
