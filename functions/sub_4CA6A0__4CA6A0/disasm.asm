0x4CA6A0: mov     al, 1
0x4CA6A2: test    [ecx+24h], al
0x4CA6A5: jz      short loc_4CA6B3
0x4CA6A7: test    dword ptr [ecx+8], 80000h
0x4CA6AE: jnz     short locret_4CA6B2
0x4CA6B0: xor     al, al
0x4CA6B2: retn
0x4CA6B3: mov     ecx, [ecx+50h]
0x4CA6B6: test    ecx, ecx
0x4CA6B8: jz      short loc_4CA6B0
0x4CA6BA: jmp     sub_4D7000
