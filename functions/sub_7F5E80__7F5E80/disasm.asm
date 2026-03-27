0x7F5E80: movzx   ecx, [esp+arg_0]
0x7F5E85: xor     eax, eax
0x7F5E87: cmp     ecx, 11Bh
0x7F5E8D: jg      short loc_7F5EE2
0x7F5E8F: jz      loc_7F5F20; jumptable 007F5EF4 cases 290,297,364
0x7F5E95: sub     ecx, 18h; switch 253 cases
0x7F5E98: cmp     ecx, 0FCh
0x7F5E9E: ja      def_7F5EAB; jumptable 007F5EAB default case, cases 25-46,49,50,52-71,74-83,85-94,96-105,107-116,119-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x7F5EA4: movzx   ecx, ds:byte_7F5F4C[ecx]
0x7F5EAB: jmp     ds:jpt_7F5EAB[ecx*4]; switch jump
0x7F5EB2: mov     eax, 30h ; '0'; jumptable 007F5EAB cases 72,73,106,117
0x7F5EB7: retn    4
0x7F5EBA: mov     eax, 8; jumptable 007F5EAB cases 47,48,230,275,276
0x7F5EBF: retn    4
0x7F5EC2: mov     eax, 18h; jumptable 007F5EAB cases 51,238
0x7F5EC7: retn    4
0x7F5ECA: mov     eax, 10h; jumptable 007F5EAB cases 84,95
0x7F5ECF: retn    4
0x7F5ED2: mov     eax, 100h; jumptable 007F5EAB cases 118,130,144,197
0x7F5ED7: retn    4
0x7F5EDA: mov     eax, 110h; jumptable 007F5EAB cases 157,170,184,210,223
0x7F5EDF: retn    4
0x7F5EE2: sub     ecx, 122h; switch 115 cases
0x7F5EE8: cmp     ecx, 72h
0x7F5EEB: ja      short def_7F5EAB; jumptable 007F5EAB default case, cases 25-46,49,50,52-71,74-83,85-94,96-105,107-116,119-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x7F5EED: movzx   edx, ds:byte_7F6070[ecx]
0x7F5EF4: jmp     ds:jpt_7F5EF4[edx*4]; switch jump
0x7F5EFB: xor     eax, eax; jumptable 007F5EAB cases 24,231,267
0x7F5EFD: retn    4
0x7F5F00: mov     eax, 38h ; '8'; jumptable 007F5EAB case 252
0x7F5F05: retn    4
0x7F5F08: mov     eax, 0BCh ; '¼'; jumptable 007F5EF4 case 370
0x7F5F0D: retn    4
0x7F5F10: mov     eax, 130h; jumptable 007F5EF4 cases 363,371,373
0x7F5F15: retn    4
0x7F5F18: mov     eax, 138h; jumptable 007F5EF4 case 372
0x7F5F1D: retn    4
0x7F5F20: mov     eax, 108h; jumptable 007F5EF4 cases 290,297,364
0x7F5F25: retn    4; jumptable 007F5EAB default case, cases 25-46,49,50,52-71,74-83,85-94,96-105,107-116,119-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
