0x9A1F20: mov     eax, [esp+index]
0x9A1F24: mov     eax, [ecx+eax*4+8]
0x9A1F28: test    eax, eax
0x9A1F2A: jz      short loc_9A1F32
0x9A1F2C: mov     eax, [eax+8]
0x9A1F2F: retn    4
0x9A1F32: xor     eax, eax
0x9A1F34: retn    4
