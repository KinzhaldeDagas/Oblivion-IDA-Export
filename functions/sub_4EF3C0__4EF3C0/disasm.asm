0x4EF3C0: mov     eax, [esp+a2]
0x4EF3C4: push    0; a3
0x4EF3C6: push    eax; a2
0x4EF3C7: add     ecx, 0C0h ; 'À'; this
0x4EF3CD: call    BSStringT_Set
0x4EF3D2: mov     al, 1
0x4EF3D4: retn    4
