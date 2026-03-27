0x5792B0: push    1; arg1
0x5792B2: push    0; canCreate
0x5792B4: call    InterfaceManager_GetSingleton
0x5792B9: add     esp, 8
0x5792BC: test    eax, eax
0x5792BE: jz      short locret_5792D7
0x5792C0: push    1; arg1
0x5792C2: push    0; canCreate
0x5792C4: call    InterfaceManager_GetSingleton
0x5792C9: add     esp, 8
0x5792CC: cmp     dword ptr [eax+1Ch], 0
0x5792D0: jz      short locret_5792D7
0x5792D2: jmp     sub_40FDA0
0x5792D7: retn
