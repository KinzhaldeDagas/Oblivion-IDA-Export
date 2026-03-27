0x589390: mov     eax, ecx
0x589392: test    eax, eax
0x589394: jz      short locret_5893A9
0x589396: mov     ecx, [eax+10h]
0x589399: test    ecx, ecx
0x58939B: jz      short locret_5893A9
0x58939D: cmp     dword ptr [ecx+10h], 0
0x5893A1: jz      short locret_5893A9
0x5893A3: mov     eax, ecx
0x5893A5: test    eax, eax
0x5893A7: jnz     short loc_589396
0x5893A9: retn
