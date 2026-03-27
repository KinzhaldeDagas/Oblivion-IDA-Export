0x587440: mov     eax, [esp+arg_0]
0x587444: push    eax
0x587445: call    Menu_GetOpenMenuTile
0x58744A: add     esp, 4
0x58744D: test    eax, eax
0x58744F: jz      short loc_587460
0x587451: mov     edx, [eax]
0x587453: mov     ecx, eax
0x587455: mov     eax, [edx]
0x587457: push    1
0x587459: call    eax
0x58745B: mov     al, 1
0x58745D: retn    4
0x587460: xor     al, al
0x587462: retn    4
