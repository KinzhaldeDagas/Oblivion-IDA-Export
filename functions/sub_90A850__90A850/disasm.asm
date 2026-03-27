0x90A850: mov     eax, [ecx+10h]
0x90A853: test    eax, eax
0x90A855: jz      short locret_90A85E
0x90A857: mov     ecx, eax
0x90A859: mov     eax, [ecx]
0x90A85B: jmp     dword ptr [eax+28h]
0x90A85E: retn    4
