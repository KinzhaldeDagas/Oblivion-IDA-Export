0x90D210: mov     eax, [esp+arg_4]
0x90D214: test    eax, eax
0x90D216: jz      short loc_90D223
0x90D218: cmp     eax, ecx
0x90D21A: jz      short loc_90D22D
0x90D21C: mov     eax, [eax+4]
0x90D21F: test    eax, eax
0x90D221: jnz     short loc_90D218
0x90D223: mov     eax, [esp+arg_0]
0x90D227: mov     byte ptr [eax], 0
0x90D22A: retn    8
0x90D22D: mov     eax, [esp+arg_0]
0x90D231: mov     byte ptr [eax], 1
0x90D234: retn    8
