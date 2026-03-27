0x523D60: mov     eax, [ecx+8]
0x523D63: test    eax, eax
0x523D65: jz      short loc_523D75
0x523D67: mov     eax, [eax+10h]
0x523D6A: test    eax, eax
0x523D6C: jz      short loc_523D75
0x523D6E: mov     eax, [eax+0B8h]
0x523D74: retn
0x523D75: xor     eax, eax
0x523D77: retn
