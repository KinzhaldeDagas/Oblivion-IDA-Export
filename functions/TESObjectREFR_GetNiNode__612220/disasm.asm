0x612220: cmp     ecx, ds:0B333C4h
0x612226: mov     eax, [ecx+3Ch]
0x612229: jz      short locret_612237
0x61222B: test    eax, eax
0x61222D: jz      short locret_612237
0x61222F: test    byte ptr [eax+18h], 1
0x612233: jz      short locret_612237
0x612235: xor     eax, eax
0x612237: retn
