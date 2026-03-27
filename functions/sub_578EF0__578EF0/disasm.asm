0x578EF0: push    1; arg1
0x578EF2: push    0; canCreate
0x578EF4: call    InterfaceManager_GetSingleton
0x578EF9: add     esp, 8
0x578EFC: test    eax, eax
0x578EFE: jz      short locret_578F17
0x578F00: push    1; arg1
0x578F02: push    0; canCreate
0x578F04: call    InterfaceManager_GetSingleton
0x578F09: add     esp, 8
0x578F0C: cmp     dword ptr [eax+1Ch], 0
0x578F10: jz      short locret_578F17
0x578F12: jmp     loc_583E30
0x578F17: retn
