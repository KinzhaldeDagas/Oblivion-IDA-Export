0x51C030: mov     edx, [ecx+38h]
0x51C033: push    ebx
0x51C034: push    esi
0x51C035: mov     esi, [ecx+3Ch]
0x51C038: cmp     edx, esi
0x51C03A: push    edi
0x51C03B: mov     al, 1
0x51C03D: jnz     short loc_51C041
0x51C03F: xor     al, al
0x51C041: cmp     edx, 7
0x51C044: ja      short loc_51C04B
0x51C046: cmp     esi, 7
0x51C049: jbe     short loc_51C04D
0x51C04B: xor     al, al
0x51C04D: mov     esi, 1
0x51C052: lea     edi, [ecx+44h]
0x51C055: test    al, al
0x51C057: jz      short loc_51C088
0x51C059: cmp     esi, 7
0x51C05C: mov     ecx, esi
0x51C05E: jge     short loc_51C07A
0x51C060: lea     edx, [edi+4]
0x51C063: test    al, al
0x51C065: jz      short loc_51C07A
0x51C067: mov     ebx, [edx]
0x51C069: cmp     ebx, [edi]
0x51C06B: jnz     short loc_51C06F
0x51C06D: xor     al, al
0x51C06F: add     ecx, 1
0x51C072: add     edx, 4
0x51C075: cmp     ecx, 7
0x51C078: jl      short loc_51C063
0x51C07A: add     esi, 1
0x51C07D: lea     ecx, [esi-1]
0x51C080: add     edi, 4
0x51C083: cmp     ecx, 7
0x51C086: jl      short loc_51C055
0x51C088: pop     edi
0x51C089: pop     esi
0x51C08A: pop     ebx
0x51C08B: retn
