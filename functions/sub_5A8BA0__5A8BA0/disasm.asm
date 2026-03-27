0x5A8BA0: mov     eax, ds:0B3B358h
0x5A8BA5: xor     ecx, ecx
0x5A8BA7: cmp     eax, ecx
0x5A8BA9: jz      short loc_5A8BB8
0x5A8BAB: cmp     ds:0B14E90h, cl
0x5A8BB1: jnz     short loc_5A8BB8
0x5A8BB3: fldz
0x5A8BB5: fstp    dword ptr [eax+58h]
0x5A8BB8: mov     ds:0B3B364h, ecx
0x5A8BBE: retn
