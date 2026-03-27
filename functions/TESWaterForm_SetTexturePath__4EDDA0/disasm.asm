0x4EDDA0: mov     eax, [esp+a2]
0x4EDDA4: push    0; a3
0x4EDDA6: push    eax; a2
0x4EDDA7: add     ecx, 24h ; '$'; this
0x4EDDAA: call    BSStringT_Set
0x4EDDAF: retn    4
