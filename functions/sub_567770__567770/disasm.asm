0x567770: movsx   ecx, byte ptr [ecx+20h]
0x567774: add     ecx, 0FFFFFFF4h; switch 21 cases
0x567777: xor     al, al
0x567779: cmp     ecx, 14h
0x56777C: ja      short def_567785; jumptable 00567785 default case, cases 21,25,26,29,31
0x56777E: movzx   ecx, ds:byte_567798[ecx]
0x567785: jmp     ds:jpt_567785[ecx*4]; switch jump
0x56778C: mov     al, 1; jumptable 00567785 cases 12-20,22-24,27,28,30,32
0x56778E: retn; jumptable 00567785 default case, cases 21,25,26,29,31
