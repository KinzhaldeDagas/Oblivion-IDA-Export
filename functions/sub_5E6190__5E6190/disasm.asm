0x5E6190: mov     eax, [ecx+58h]
0x5E6193: test    eax, eax
0x5E6195: jz      short loc_5E61A4
0x5E6197: mov     eax, [eax+8]
0x5E619A: test    eax, eax
0x5E619C: jz      short loc_5E61A4
0x5E619E: cmp     byte ptr [eax+20h], 0Ch
0x5E61A2: jz      short locret_5E61A6
0x5E61A4: xor     eax, eax
0x5E61A6: retn
