0x534000: mov     eax, [ecx+8]
0x534003: test    eax, eax
0x534005: jz      short loc_534015
0x534007: mov     al, [eax+24h]
0x53400A: mov     ecx, [esp+arg_0]
0x53400E: mov     [ecx], al
0x534010: mov     eax, ecx
0x534012: retn    4
0x534015: mov     eax, [esp+arg_0]
0x534019: xor     cl, cl
0x53401B: mov     [eax], cl
0x53401D: retn    4
