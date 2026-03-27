0x6E1A80: mov     edx, [esp+arg_0]
0x6E1A84: push    ebx
0x6E1A85: xor     ebx, ebx
0x6E1A87: cmp     edx, ebx
0x6E1A89: jz      short loc_6E1AAE
0x6E1A8B: mov     eax, [esp+4+arg_4]
0x6E1A8F: cmp     eax, ebx
0x6E1A91: jz      short loc_6E1AAE
0x6E1A93: mov     [ecx+0Ah], ax
0x6E1A97: mov     eax, [esp+4+arg_8]
0x6E1A9B: mov     [ecx+24h], edx
0x6E1A9E: mov     [ecx+14h], eax
0x6E1AA1: mov     al, ds:byte_B3D3EE[eax]
0x6E1AA7: mov     [ecx+1Dh], al
0x6E1AAA: pop     ebx
0x6E1AAB: retn    0Ch
0x6E1AAE: mov     [ecx+0Ah], bx
0x6E1AB2: mov     [ecx+24h], ebx
0x6E1AB5: mov     [ecx+14h], ebx
0x6E1AB8: mov     [ecx+1Dh], bl
0x6E1ABB: pop     ebx
0x6E1ABC: retn    0Ch
