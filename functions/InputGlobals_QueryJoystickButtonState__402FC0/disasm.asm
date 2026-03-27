0x402FC0: mov     eax, [esp+a2]
0x402FC4: mov     edx, [esp+a4]
0x402FC8: lea     eax, [eax+eax*4]
0x402FCB: shl     eax, 5
0x402FCE: push    esi
0x402FCF: add     ecx, eax
0x402FD1: xor     esi, esi
0x402FD3: cmp     edx, 3; switch 4 cases
0x402FD6: ja      short def_402FD8; jumptable 00402FD8 default case
0x402FD8: jmp     ds:jpt_402FD8[edx*4]; switch jump
0x402FDF: mov     edx, [esp+4+a3]; jumptable 00402FD8 case 0
0x402FE3: test    byte ptr [ecx+edx+60h], 80h
0x402FE8: jz      short def_402FD8; jumptable 00402FD8 default case
0x402FEA: mov     esi, 1
0x402FEF: mov     eax, esi
0x402FF1: pop     esi
0x402FF2: retn    0Ch
0x402FF5: mov     edx, [esp+4+a3]; jumptable 00402FD8 case 1
0x402FF9: test    byte ptr [ecx+edx+0B0h], 80h
0x403001: jnz     short def_402FD8; jumptable 00402FD8 default case
0x403003: test    byte ptr [ecx+edx+60h], 80h
0x403008: jz      short def_402FD8; jumptable 00402FD8 default case
0x40300A: mov     esi, 1
0x40300F: mov     eax, esi
0x403011: pop     esi
0x403012: retn    0Ch
0x403015: mov     edx, [esp+4+a3]; jumptable 00402FD8 case 2
0x403019: test    byte ptr [ecx+edx+60h], 80h
0x40301E: jnz     short def_402FD8; jumptable 00402FD8 default case
0x403020: test    byte ptr [ecx+edx+0B0h], 80h
0x403028: jz      short def_402FD8; jumptable 00402FD8 default case
0x40302A: mov     esi, 1
0x40302F: mov     eax, esi
0x403031: pop     esi
0x403032: retn    0Ch
0x403035: mov     edx, [esp+4+a3]; jumptable 00402FD8 case 3
0x403039: mov     al, [ecx+edx+0B0h]
0x403040: xor     al, [ecx+edx+60h]
0x403044: test    al, al
0x403046: jns     short def_402FD8; jumptable 00402FD8 default case
0x403048: mov     esi, 1
0x40304D: mov     eax, esi; jumptable 00402FD8 default case
0x40304F: pop     esi
0x403050: retn    0Ch
