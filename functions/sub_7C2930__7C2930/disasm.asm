0x7C2930: mov     eax, [esp+arg_0]
0x7C2934: test    eax, eax
0x7C2936: jz      short loc_7C294C
0x7C2938: jle     short locret_7C2956
0x7C293A: cmp     eax, 3
0x7C293D: jg      short locret_7C2956
0x7C293F: mov     dword ptr [ecx+0A8h], 1
0x7C2949: retn    4
0x7C294C: mov     dword ptr [ecx+0A8h], 3
0x7C2956: retn    4
