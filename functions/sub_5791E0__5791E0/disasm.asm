0x5791E0: push    1; arg1
0x5791E2: push    0; canCreate
0x5791E4: call    InterfaceManager_GetSingleton
0x5791E9: add     esp, 8
0x5791EC: test    eax, eax
0x5791EE: jz      short locret_579215
0x5791F0: push    1; arg1
0x5791F2: push    0; canCreate
0x5791F4: call    InterfaceManager_GetSingleton
0x5791F9: add     esp, 8
0x5791FC: cmp     dword ptr [eax+1Ch], 0
0x579200: jz      short locret_579215
0x579202: push    1; arg1
0x579204: push    0; canCreate
0x579206: call    InterfaceManager_GetSingleton
0x57920B: add     esp, 8
0x57920E: mov     ecx, eax
0x579210: jmp     sub_5821F0
0x579215: retn
