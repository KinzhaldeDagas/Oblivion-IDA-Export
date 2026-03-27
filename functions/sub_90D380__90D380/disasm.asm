0x90D380: mov     eax, [ecx+4]
0x90D383: test    eax, eax
0x90D385: jz      short loc_90D390
0x90D387: mov     ecx, eax
0x90D389: mov     eax, [ecx+4]
0x90D38C: test    eax, eax
0x90D38E: jnz     short loc_90D387
0x90D390: mov     eax, [ecx+0Ch]
0x90D393: test    eax, eax
0x90D395: mov     eax, [esp+arg_0]
0x90D399: setnz   cl
0x90D39C: mov     [eax], cl
0x90D39E: retn    4
