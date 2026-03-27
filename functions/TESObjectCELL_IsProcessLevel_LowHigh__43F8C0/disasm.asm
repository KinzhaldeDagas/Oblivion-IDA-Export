0x43F8C0: mov     eax, [esp+a1]
0x43F8C4: test    eax, eax
0x43F8C6: jz      short def_43F8D4; jumptable 0043F8D4 default case
0x43F8C8: movsx   eax, byte ptr [eax+26h]
0x43F8CC: add     eax, 0FFFFFFFEh; switch 5 cases
0x43F8CF: cmp     eax, 4
0x43F8D2: ja      short def_43F8D4; jumptable 0043F8D4 default case
0x43F8D4: jmp     ds:jpt_43F8D4[eax*4]; switch jump
0x43F8DB: cmp     [esp+a2], 0; jumptable 0043F8D4 cases 2-4
0x43F8E0: jnz     short def_43F8D4; jumptable 0043F8D4 default case
0x43F8E2: mov     al, 1; jumptable 0043F8D4 cases 5,6
0x43F8E4: retn    8
0x43F8E7: xor     al, al; jumptable 0043F8D4 default case
0x43F8E9: retn    8
