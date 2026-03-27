0x517EA0: mov     eax, [esp+a2]
0x517EA4: push    0; a3
0x517EA6: push    eax; a2
0x517EA7: add     ecx, 30h ; '0'; this
0x517EAA: call    BSStringT_Set
0x517EAF: mov     al, 1
0x517EB1: retn    4
