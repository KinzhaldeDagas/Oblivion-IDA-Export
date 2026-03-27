0x8C6820: mov     edx, [esp+arg_0]
0x8C6824: cmp     edx, 0FFFFFFFFh
0x8C6827: jnz     short loc_8C682F
0x8C6829: mov     eax, [ecx+10h]
0x8C682C: retn    4
0x8C682F: test    ecx, ecx
0x8C6831: jz      short loc_8C6845
0x8C6833: mov     eax, [ecx+8]
0x8C6836: test    eax, eax
0x8C6838: jz      short loc_8C6845
0x8C683A: mov     eax, [eax+28h]
0x8C683D: shr     edx, 14h
0x8C6840: lea     eax, [eax+edx*8]
0x8C6843: jmp     short loc_8C684A
0x8C6845: mov     eax, offset dword_BA8138
0x8C684A: mov     eax, [eax]
0x8C684C: test    eax, eax
0x8C684E: jz      short loc_8C685D
0x8C6850: movzx   eax, word ptr [eax+2Ch]
0x8C6854: shr     eax, 6
0x8C6857: and     eax, 3Fh
0x8C685A: retn    4
0x8C685D: xor     eax, eax
0x8C685F: retn    4
