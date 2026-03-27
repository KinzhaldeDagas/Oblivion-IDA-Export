0x54E820: mov     eax, [esp+arg_0]
0x54E824: cmp     eax, [ecx+10h]
0x54E827: jnb     short loc_54E84E
0x54E829: mov     ecx, [ecx+0Ch]
0x54E82C: fldz
0x54E82E: fcomp   dword ptr [ecx+eax*4]
0x54E831: lea     ecx, [ecx+eax*4]
0x54E834: fnstsw  ax
0x54E836: test    ah, 41h
0x54E839: jp      short loc_54E84E
0x54E83B: fld1
0x54E83D: fcomp   dword ptr [ecx]
0x54E83F: fnstsw  ax
0x54E841: test    ah, 1
0x54E844: jnz     short loc_54E84E
0x54E846: mov     eax, 1
0x54E84B: retn    4
0x54E84E: xor     eax, eax
0x54E850: retn    4
