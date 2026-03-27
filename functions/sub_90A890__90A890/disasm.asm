0x90A890: mov     eax, [ecx+10h]
0x90A893: test    eax, eax
0x90A895: jz      short locret_90A89E
0x90A897: mov     ecx, eax
0x90A899: mov     eax, [ecx]
0x90A89B: jmp     dword ptr [eax+30h]
0x90A89E: retn    4
