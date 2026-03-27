0x6286B0: mov     eax, [ecx+2BCh]
0x6286B6: cmp     eax, 1
0x6286B9: jz      short loc_6286C0
0x6286BB: cmp     eax, 3
0x6286BE: jnz     short locret_6286DB
0x6286C0: fld1
0x6286C2: mov     dword ptr [ecx+2BCh], 0
0x6286CC: fstp    dword ptr [ecx+2C0h]
0x6286D2: mov     ecx, [esp+a1]; a1
0x6286D6: call    sub_5EE1B0
0x6286DB: retn    4
