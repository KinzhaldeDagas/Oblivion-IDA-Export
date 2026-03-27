0x7F5C40: movzx   ecx, [esp+arg_0]
0x7F5C45: xor     eax, eax
0x7F5C47: cmp     ecx, 11Bh
0x7F5C4D: jg      short loc_7F5C92
0x7F5C4F: jz      short loc_7F5CBB; jumptable 007F5C63 cases 24,47,48,130,144,184,197,230,267,275
0x7F5C51: sub     ecx, 18h; switch 253 cases
0x7F5C54: cmp     ecx, 0FCh
0x7F5C5A: ja      short def_7F5C63; jumptable 007F5C63 default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,119-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x7F5C5C: movzx   ecx, ds:byte_7F5CEC[ecx]
0x7F5C63: jmp     ds:jpt_7F5C63[ecx*4]; switch jump
0x7F5C6A: mov     eax, 82h ; '‚'; jumptable 007F5C63 case 118
0x7F5C6F: retn    4
0x7F5C72: mov     eax, 1012h; jumptable 007F5C63 cases 51,84,95,157,170,210,223
0x7F5C77: retn    4
0x7F5C7A: mov     eax, 3012h; jumptable 007F5C63 cases 106,117
0x7F5C7F: retn    4
0x7F5C82: mov     eax, 1802h; jumptable 007F5C63 case 238
0x7F5C87: retn    4
0x7F5C8A: mov     eax, 3802h; jumptable 007F5C63 case 252
0x7F5C8F: retn    4
0x7F5C92: sub     ecx, 122h; switch 115 cases
0x7F5C98: cmp     ecx, 72h
0x7F5C9B: ja      short def_7F5C63; jumptable 007F5C63 default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,119-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x7F5C9D: movzx   edx, ds:byte_7F5E00[ecx]
0x7F5CA4: jmp     ds:jpt_7F5CA4[edx*4]; switch jump
0x7F5CAB: mov     eax, 800h; jumptable 007F5CA4 cases 360,364,369,372
0x7F5CB0: retn    4
0x7F5CB3: mov     eax, 3800h; jumptable 007F5CA4 cases 361,370
0x7F5CB8: retn    4
0x7F5CBB: mov     eax, 12h; jumptable 007F5C63 cases 24,47,48,130,144,184,197,230,267,275
0x7F5CC0: retn    4
0x7F5CC3: mov     eax, 802h; jumptable 007F5C63 cases 231,276
0x7F5CC8: retn    4; jumptable 007F5C63 default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,119-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
