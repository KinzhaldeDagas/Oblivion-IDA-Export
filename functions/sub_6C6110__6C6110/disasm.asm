0x6C6110: mov     eax, [esp+arg_0]
0x6C6114: mov     eax, [eax+58h]
0x6C6117: test    eax, eax
0x6C6119: jz      short loc_6C612B
0x6C611B: jmp     short loc_6C6120
0x6C611D: align 10h
0x6C6120: cmp     eax, ecx
0x6C6122: jz      short loc_6C6130
0x6C6124: mov     eax, [eax+58h]
0x6C6127: test    eax, eax
0x6C6129: jnz     short loc_6C6120
0x6C612B: mov     al, 1
0x6C612D: retn    4
0x6C6130: xor     al, al
0x6C6132: retn    4
