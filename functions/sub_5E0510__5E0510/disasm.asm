0x5E0510: cmp     dword ptr [ecx+58h], 0
0x5E0514: jz      short loc_5E052C
0x5E0516: mov     ecx, [ecx+58h]
0x5E0519: mov     eax, [ecx]
0x5E051B: mov     edx, [eax+2C0h]
0x5E0521: call    edx
0x5E0523: test    ax, 200h
0x5E0527: jz      short loc_5E052C
0x5E0529: mov     al, 1
0x5E052B: retn
0x5E052C: xor     al, al
0x5E052E: retn
