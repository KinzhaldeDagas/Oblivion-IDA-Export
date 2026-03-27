0x578DA0: push    3E9h
0x578DA5: call    Menu_GetOpenMenuTile
0x578DAA: add     esp, 4
0x578DAD: test    eax, eax
0x578DAF: jz      short locret_578DBB
0x578DB1: mov     edx, [eax]
0x578DB3: mov     ecx, eax
0x578DB5: mov     eax, [edx]
0x578DB7: push    1
0x578DB9: call    eax
0x578DBB: retn
