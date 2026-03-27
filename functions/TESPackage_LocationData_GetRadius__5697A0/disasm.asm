0x5697A0: mov     al, [ecx]
0x5697A2: cmp     al, 0FFh
0x5697A4: jz      short loc_5697AE
0x5697A6: cmp     al, 1
0x5697A8: jz      short loc_5697AE
0x5697AA: mov     eax, [ecx+4]
0x5697AD: retn
0x5697AE: xor     eax, eax
0x5697B0: retn
