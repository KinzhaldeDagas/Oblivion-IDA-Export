0x4A2A30: mov     eax, [esp+arg_0]
0x4A2A34: movzx   eax, byte ptr [eax+4]
0x4A2A38: add     eax, 0FFFFFFEDh; switch 24 cases
0x4A2A3B: cmp     eax, 17h
0x4A2A3E: ja      short def_4A2A47; jumptable 004A2A47 default case, cases 23,24,26,28-32,37,41
0x4A2A40: movzx   ecx, ds:byte_4A2A6C[eax]
0x4A2A47: jmp     ds:jpt_4A2A47[ecx*4]; switch jump
0x4A2A4E: mov     eax, 3; jumptable 004A2A47 cases 35,36
0x4A2A53: retn
0x4A2A54: mov     eax, 2; jumptable 004A2A47 cases 19-22,25,27,33,34,38-40,42
0x4A2A59: retn
0x4A2A5A: mov     eax, 1; jumptable 004A2A47 default case, cases 23,24,26,28-32,37,41
0x4A2A5F: retn
