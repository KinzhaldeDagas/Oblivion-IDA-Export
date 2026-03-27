0x41B8C0: mov     eax, [esp+arg_0]
0x41B8C4: add     eax, 0FFFFFFFFh; switch 8 cases
0x41B8C7: cmp     eax, 7
0x41B8CA: ja      short Magic_CompareShieldType___def_41B8CC; jumptable 0041B8CC default case, cases 3,5-7
0x41B8CC: jmp     ds:jpt_41B8CC[eax*4]; switch jump
0x41B8D3: xor     eax, eax; jumptable 0041B8CC case 1
0x41B8D5: cmp     [esp+arg_4], 48534946h
0x41B8DD: setz    al
0x41B8E0: retn
0x41B8E1: xor     eax, eax; jumptable 0041B8CC case 2
0x41B8E3: cmp     [esp+arg_4], 48535246h
0x41B8EB: setz    al
0x41B8EE: retn
0x41B8EF: xor     eax, eax; jumptable 0041B8CC case 4
0x41B8F1: cmp     [esp+arg_4], 4853494Ch
0x41B8F9: setz    al
0x41B8FC: retn
0x41B8FD: mov     eax, [esp+arg_4]; jumptable 0041B8CC case 8
0x41B901: cmp     eax, 444C4853h
0x41B906: jz      short loc_41B919
0x41B908: cmp     eax, 574E5352h
0x41B90D: jz      short loc_41B919
0x41B90F: cmp     eax, 47444552h
0x41B914: jz      short loc_41B919
0x41B916: xor     eax, eax
0x41B918: retn
0x41B919: mov     eax, 1
0x41B91E: retn
0x41B91F: xor     al, al; jumptable 0041B8CC default case, cases 3,5-7
0x41B921: retn
