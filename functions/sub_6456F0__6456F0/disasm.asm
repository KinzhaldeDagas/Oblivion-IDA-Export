0x6456F0: mov     eax, [ecx+8]
0x6456F3: test    eax, eax
0x6456F5: jz      short loc_64570D
0x6456F7: mov     eax, [eax+18h]
0x6456FA: mov     ecx, [ecx+4]
0x6456FD: mov     edx, ds:0B152B0h[eax*4]
0x645704: cmp     dword ptr [edx+ecx*4], 1
0x645708: jnz     short loc_64570D
0x64570A: mov     al, 1
0x64570C: retn
0x64570D: xor     al, al
0x64570F: retn
