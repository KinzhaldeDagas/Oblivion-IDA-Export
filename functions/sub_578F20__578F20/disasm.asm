0x578F20: push    1; arg1
0x578F22: push    0; canCreate
0x578F24: call    InterfaceManager_GetSingleton
0x578F29: add     esp, 8
0x578F2C: test    eax, eax
0x578F2E: jz      short locret_578F55
0x578F30: push    1; arg1
0x578F32: push    0; canCreate
0x578F34: call    InterfaceManager_GetSingleton
0x578F39: add     esp, 8
0x578F3C: cmp     dword ptr [eax+1Ch], 0
0x578F40: jz      short locret_578F55
0x578F42: push    1; arg1
0x578F44: push    0; canCreate
0x578F46: call    InterfaceManager_GetSingleton
0x578F4B: add     esp, 8
0x578F4E: mov     ecx, eax
0x578F50: jmp     sub_57E150
0x578F55: retn
