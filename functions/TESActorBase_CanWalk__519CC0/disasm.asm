0x519CC0: cmp     byte ptr [ecx+4], 24h ; '$'
0x519CC4: mov     al, 1
0x519CC6: jnz     short locret_519CD9
0x519CC8: mov     edx, [ecx+28h]
0x519CCB: shr     edx, 6
0x519CCE: test    al, dl
0x519CD0: jnz     short locret_519CD9
0x519CD2: test    [ecx+28h], al
0x519CD5: jnz     short locret_519CD9
0x519CD7: xor     al, al
0x519CD9: retn
