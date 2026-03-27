0x98D830: mov     ecx, [esp+arg_0]
0x98D834: cmp     word ptr [ecx], 5A4Dh
0x98D839: jz      short loc_98D83E
0x98D83B: xor     eax, eax
0x98D83D: retn
0x98D83E: mov     eax, [ecx+3Ch]
0x98D841: add     eax, ecx
0x98D843: cmp     dword ptr [eax], 4550h
0x98D849: jnz     short loc_98D83B
0x98D84B: xor     ecx, ecx
0x98D84D: cmp     word ptr [eax+18h], 10Bh
0x98D853: setz    cl
0x98D856: mov     eax, ecx
0x98D858: retn
