0x71BF70: push    ebx
0x71BF71: push    esi
0x71BF72: mov     esi, [esp+8+arg_4]
0x71BF76: mov     edx, [esi+4]
0x71BF79: cmp     edx, 2
0x71BF7C: jz      short loc_71BF83
0x71BF7E: cmp     edx, 3
0x71BF81: jnz     short loc_71BF8B
0x71BF83: cmp     edx, 3
0x71BF86: setz    bl
0x71BF89: jmp     short loc_71BFA7
0x71BF8B: xor     eax, eax
0x71BF8D: lea     ecx, [esi+14h]
0x71BF90: cmp     dword ptr [ecx], 3
0x71BF93: jz      short loc_71BFD1
0x71BF95: add     eax, 1
0x71BF98: add     ecx, 0Ch
0x71BF9B: cmp     eax, 4
0x71BF9E: jb      short loc_71BF90
0x71BFA0: xor     al, al
0x71BFA2: test    al, al
0x71BFA4: setnbe  bl
0x71BFA7: cmp     edx, 4
0x71BFAA: jl      short loc_71BFB3
0x71BFAC: cmp     edx, 6
0x71BFAF: jg      short loc_71BFB3
0x71BFB1: mov     bl, 1
0x71BFB3: mov     ecx, [esp+8+arg_0]
0x71BFB7: mov     eax, [ecx]
0x71BFB9: cmp     eax, 0Dh
0x71BFBC: jz      loc_71C08B
0x71BFC2: cmp     eax, 0Ch
0x71BFC5: jnz     short loc_71BFDA
0x71BFC7: pop     esi
0x71BFC8: mov     eax, offset unk_B260D0
0x71BFCD: pop     ebx
0x71BFCE: retn    0Ch
0x71BFD1: lea     eax, [eax+eax*2]
0x71BFD4: mov     al, [esi+eax*4+1Ch]
0x71BFD8: jmp     short loc_71BFA2
0x71BFDA: cmp     eax, 2
0x71BFDD: jnz     short loc_71BFE9
0x71BFDF: pop     esi
0x71BFE0: mov     eax, offset unk_B265E0
0x71BFE5: pop     ebx
0x71BFE6: retn    0Ch
0x71BFE9: cmp     eax, 1
0x71BFEC: jnz     short loc_71C005
0x71BFEE: test    bl, bl
0x71BFF0: mov     eax, offset unk_B26508
0x71BFF5: jnz     loc_71C0A8
0x71BFFB: pop     esi
0x71BFFC: mov     eax, offset unk_B263E8
0x71C001: pop     ebx
0x71C002: retn    0Ch
0x71C005: test    eax, eax
0x71C007: jz      loc_71C09A
0x71C00D: cmp     eax, 5
0x71C010: jz      loc_71C09A
0x71C016: cmp     eax, 3
0x71C019: jnz     short loc_71C042
0x71C01B: mov     edx, [esp+8+arg_8]
0x71C01F: mov     eax, [edx+4]
0x71C022: cmp     eax, 4
0x71C025: jz      short loc_71C0A3
0x71C027: cmp     eax, 5
0x71C02A: jnz     short loc_71C036
0x71C02C: pop     esi
0x71C02D: mov     eax, offset unk_B25FF8
0x71C032: pop     ebx
0x71C033: retn    0Ch
0x71C036: cmp     eax, 6
0x71C039: mov     eax, offset unk_B26040
0x71C03E: jz      short loc_71C0A8
0x71C040: jmp     short loc_71C09F
0x71C042: cmp     eax, 4
0x71C045: jnz     short loc_71C051
0x71C047: pop     esi
0x71C048: mov     eax, offset unk_B25F68
0x71C04D: pop     ebx
0x71C04E: retn    0Ch
0x71C051: cmp     eax, 6
0x71C054: jnz     short loc_71BFDF
0x71C056: mov     esi, [esp+8+arg_8]
0x71C05A: mov     ecx, esi
0x71C05C: call    sub_71B480
0x71C061: test    al, al
0x71C063: jnz     short loc_71C095
0x71C065: mov     ecx, esi
0x71C067: call    sub_70E240
0x71C06C: test    al, al
0x71C06E: jnz     short loc_71C095
0x71C070: mov     al, [esi+1]
0x71C073: cmp     al, 10h
0x71C075: jz      loc_71BFEE
0x71C07B: cmp     al, 40h ; '@'
0x71C07D: jz      loc_71BFC7
0x71C083: cmp     al, 80h ; '€'
0x71C085: jnz     loc_71BFDF
0x71C08B: pop     esi
0x71C08C: mov     eax, offset unk_B26088
0x71C091: pop     ebx
0x71C092: retn    0Ch
0x71C095: mov     eax, [esi+4]
0x71C098: jmp     short loc_71C022
0x71C09A: mov     eax, offset unk_B26040
0x71C09F: test    bl, bl
0x71C0A1: jnz     short loc_71C0A8
0x71C0A3: mov     eax, offset unk_B25FB0
0x71C0A8: pop     esi
0x71C0A9: pop     ebx
0x71C0AA: retn    0Ch
