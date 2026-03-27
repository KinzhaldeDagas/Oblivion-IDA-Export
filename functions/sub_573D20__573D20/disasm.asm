0x573D20: mov     edx, [esp+arg_0]
0x573D24: lea     eax, [ecx+20h]
0x573D27: xor     ecx, ecx
0x573D29: test    edx, edx
0x573D2B: jle     short loc_573D3E
0x573D2D: lea     ecx, [ecx+0]
0x573D30: test    eax, eax
0x573D32: jz      short loc_573D47
0x573D34: mov     eax, [eax+4]
0x573D37: add     ecx, 1
0x573D3A: cmp     ecx, edx
0x573D3C: jl      short loc_573D30
0x573D3E: test    eax, eax
0x573D40: jz      short loc_573D47
0x573D42: mov     eax, [eax]
0x573D44: retn    4
0x573D47: or      eax, 0FFFFFFFFh
0x573D4A: retn    4
