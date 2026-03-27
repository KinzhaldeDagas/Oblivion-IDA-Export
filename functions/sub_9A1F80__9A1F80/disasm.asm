0x9A1F80: mov     eax, [esp+index]
0x9A1F84: mov     eax, [ecx+eax*4+8]
0x9A1F88: test    eax, eax
0x9A1F8A: jz      short loc_9A1F9D
0x9A1F8C: mov     ecx, [eax+10h]
0x9A1F8F: test    ecx, ecx
0x9A1F91: jz      short loc_9A1F9D
0x9A1F93: mov     edx, [ecx]
0x9A1F95: mov     eax, [edx+0Ch]
0x9A1F98: call    eax
0x9A1F9A: retn    4
0x9A1F9D: xor     eax, eax
0x9A1F9F: retn    4
