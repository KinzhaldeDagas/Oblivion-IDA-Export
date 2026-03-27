0x90A870: mov     eax, [ecx+10h]
0x90A873: test    eax, eax
0x90A875: jz      short locret_90A87E
0x90A877: mov     ecx, eax
0x90A879: mov     eax, [ecx]
0x90A87B: jmp     dword ptr [eax+2Ch]
0x90A87E: retn    4
