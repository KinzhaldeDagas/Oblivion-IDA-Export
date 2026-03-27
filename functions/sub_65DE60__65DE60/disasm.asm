0x65DE60: test    ecx, ecx
0x65DE62: jz      short loc_65DE70
0x65DE64: mov     eax, [ecx+8]
0x65DE67: test    eax, eax
0x65DE69: jz      short loc_65DE70
0x65DE6B: mov     eax, [eax+18h]
0x65DE6E: jmp     short loc_65DE72
0x65DE70: xor     eax, eax
0x65DE72: test    eax, eax
0x65DE74: jz      short loc_65DE7A
0x65DE76: mov     eax, [eax+0Ch]
0x65DE79: retn
0x65DE7A: xor     eax, eax
0x65DE7C: retn
