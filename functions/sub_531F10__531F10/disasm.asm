0x531F10: mov     ecx, [ecx]
0x531F12: xor     eax, eax
0x531F14: test    ecx, ecx
0x531F16: jz      short locret_531F2C
0x531F18: mov     eax, [ecx]
0x531F1A: mov     edx, [eax+58h]
0x531F1D: call    edx
0x531F1F: test    eax, eax
0x531F21: jz      short loc_531F2A
0x531F23: mov     eax, [eax+2B0h]
0x531F29: retn
0x531F2A: xor     eax, eax
0x531F2C: retn
