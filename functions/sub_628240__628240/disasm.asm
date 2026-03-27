0x628240: movsx   eax, word ptr [ecx+1F4h]
0x628247: add     eax, 1; switch 8 cases
0x62824A: cmp     eax, 7
0x62824D: ja      short def_628256; jumptable 00628256 default case, cases 0,1
0x62824F: movzx   eax, ds:byte_62829C[eax]
0x628256: jmp     ds:jpt_628256[eax*4]; switch jump
0x62825D: mov     cl, [ecx+11Dh]; jumptable 00628256 cases -1,6
0x628263: test    cl, cl
0x628265: jz      short loc_628271
0x628267: cmp     cl, 4
0x62826A: jz      short loc_628271
0x62826C: cmp     cl, 9
0x62826F: jnz     short def_628256; jumptable 00628256 default case, cases 0,1
0x628271: mov     al, 1
0x628273: retn    4
0x628276: mov     ecx, [esp+arg_0]; jumptable 00628256 cases 2-5
0x62827A: cmp     ecx, ds:0B333C4h
0x628280: jnz     short def_628256; jumptable 00628256 default case, cases 0,1
0x628282: mov     byte ptr ds:0B3BAEBh, 1
0x628289: xor     al, al; jumptable 00628256 default case, cases 0,1
0x62828B: retn    4
