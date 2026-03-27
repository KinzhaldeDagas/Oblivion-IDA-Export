0x51CA50: mov     edx, [ecx+28h]
0x51CA53: movzx   eax, word ptr [ecx+108h]
0x51CA5A: shr     edx, 7
0x51CA5D: test    dl, 1
0x51CA60: jz      short locret_51CA9F
0x51CA62: add     ecx, 24h ; '$'
0x51CA65: call    TESActorBaseData_GetLevel
0x51CA6A: movzx   eax, ax
0x51CA6D: cmp     ax, 1
0x51CA71: jg      short loc_51CA79
0x51CA73: mov     eax, 1
0x51CA78: retn
0x51CA79: cmp     ax, 7
0x51CA7D: jge     short loc_51CA85
0x51CA7F: mov     eax, 2
0x51CA84: retn
0x51CA85: cmp     ax, 0Dh
0x51CA89: jge     short loc_51CA91
0x51CA8B: mov     eax, 3
0x51CA90: retn
0x51CA91: xor     ecx, ecx
0x51CA93: cmp     ax, 12h
0x51CA97: setnl   cl
0x51CA9A: add     ecx, 4
0x51CA9D: mov     eax, ecx
0x51CA9F: retn
