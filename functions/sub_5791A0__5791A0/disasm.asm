0x5791A0: push    1; arg1
0x5791A2: push    0; canCreate
0x5791A4: call    InterfaceManager_GetSingleton
0x5791A9: add     esp, 8
0x5791AC: test    eax, eax
0x5791AE: jz      short locret_5791D5
0x5791B0: push    1; arg1
0x5791B2: push    0; canCreate
0x5791B4: call    InterfaceManager_GetSingleton
0x5791B9: add     esp, 8
0x5791BC: cmp     dword ptr [eax+1Ch], 0
0x5791C0: jz      short locret_5791D5
0x5791C2: push    1; arg1
0x5791C4: push    0; canCreate
0x5791C6: call    InterfaceManager_GetSingleton
0x5791CB: add     esp, 8
0x5791CE: mov     ecx, eax
0x5791D0: jmp     sub_583E60
0x5791D5: retn
