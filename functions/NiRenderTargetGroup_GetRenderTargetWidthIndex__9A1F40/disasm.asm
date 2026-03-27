0x9A1F40: mov     eax, [esp+index]
0x9A1F44: mov     eax, [ecx+eax*4+8]
0x9A1F48: test    eax, eax
0x9A1F4A: jz      short loc_9A1F52
0x9A1F4C: mov     eax, [eax+0Ch]
0x9A1F4F: retn    4
0x9A1F52: xor     eax, eax
0x9A1F54: retn    4
