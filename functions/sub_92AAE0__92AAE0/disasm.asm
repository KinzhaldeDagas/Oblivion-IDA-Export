0x92AAE0: mov     ecx, [ecx+10h]
0x92AAE3: mov     eax, [esp+arg_0]
0x92AAE7: mov     edx, [ecx+24h]
0x92AAEA: add     edx, [ecx+18h]
0x92AAED: inc     eax
0x92AAEE: cmp     eax, edx
0x92AAF0: jl      short locret_92AAF5
0x92AAF2: or      eax, 0FFFFFFFFh
0x92AAF5: retn    4
