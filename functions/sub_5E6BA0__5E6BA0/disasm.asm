0x5E6BA0: mov     eax, [ecx+58h]
0x5E6BA3: mov     eax, [eax+8]
0x5E6BA6: test    eax, eax
0x5E6BA8: jz      short loc_5E6BB3
0x5E6BAA: cmp     byte ptr [eax+20h], 0Fh
0x5E6BAE: jnz     short loc_5E6BB3
0x5E6BB0: mov     al, 1
0x5E6BB2: retn
0x5E6BB3: xor     al, al
0x5E6BB5: retn
