0x499E20: mov     eax, ds:0B35234h
0x499E25: test    eax, eax
0x499E27: mov     byte ptr ds:0B35229h, 0
0x499E2E: jz      short locret_499E35
0x499E30: or      word ptr [eax+18h], 1
0x499E35: retn
