0x4688B0: cmp     dword ptr [ecx+8], 0
0x4688B4: jnz     short loc_4688BF
0x4688B6: cmp     dword ptr [ecx+4], 0
0x4688BA: jnz     short loc_4688BF
0x4688BC: xor     al, al
0x4688BE: retn
0x4688BF: mov     al, 1
0x4688C1: retn
