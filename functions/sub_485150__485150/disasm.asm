0x485150: mov     eax, [ecx+8]
0x485153: movzx   eax, byte ptr [eax+4]
0x485157: add     eax, 0FFFFFFEDh; switch 22 cases
0x48515A: cmp     eax, 15h
0x48515D: ja      short def_485166; jumptable 00485166 default case, cases 21,23,24,26-32,35-39
0x48515F: movzx   ecx, ds:byte_485198[eax]
0x485166: jmp     ds:jpt_485166[ecx*4]; switch jump
0x48516D: mov     eax, 1; jumptable 00485166 cases 33,34
0x485172: retn
0x485173: mov     eax, 2; jumptable 00485166 cases 20,22
0x485178: retn
0x485179: mov     eax, 4; jumptable 00485166 cases 19,25,40
0x48517E: retn
0x48517F: mov     eax, 8; jumptable 00485166 default case, cases 21,23,24,26-32,35-39
0x485184: retn
