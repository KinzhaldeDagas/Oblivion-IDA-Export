0x65C010: mov     al, [esp+arg_0]
0x65C014: movsx   edx, al
0x65C017: push    esi
0x65C018: xor     esi, esi
0x65C01A: cmp     edx, 38h; switch 57 cases
0x65C01D: ja      AVCollection_GetNode___def_65C02A; jumptable 0065C02A default case, cases 1-3,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C023: movzx   edx, ds:byte_65C1D8[edx]
0x65C02A: jmp     ds:jpt_65C02A[edx*4]; switch jump
0x65C031: mov     eax, [ecx+8]; jumptable 0065C02A case 9
0x65C034: pop     esi
0x65C035: retn    4
0x65C038: mov     eax, [ecx+0Ch]; jumptable 0065C02A case 10
0x65C03B: pop     esi
0x65C03C: retn    4
0x65C03F: mov     ecx, [ecx+10h]; jumptable 0065C02A case 8
0x65C042: test    ecx, ecx
0x65C044: jz      short AVCollection_GetNode___Return_0
0x65C046: mov     eax, [ecx]
0x65C048: pop     esi
0x65C049: retn    4
