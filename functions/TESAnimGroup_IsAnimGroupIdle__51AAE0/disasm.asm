0x51AAE0: mov     eax, [esp+arg_0]
0x51AAE4: and     eax, 0FFh
0x51AAE9: cmp     eax, 21h; switch 34 cases
0x51AAEC: ja      short TESAnimGroup_IsAnimGroupIdle___def_51AAF5; jumptable 0051AAF5 default case, cases 2-26,28-32
0x51AAEE: movzx   eax, ds:byte_51AB0C[eax]
0x51AAF5: jmp     ds:jpt_51AAF5[eax*4]; switch jump
0x51AAFC: mov     al, 1; jumptable 0051AAF5 cases 0,1,27,33
0x51AAFE: retn
0x51AAFF: xor     al, al; jumptable 0051AAF5 default case, cases 2-26,28-32
0x51AB01: retn
