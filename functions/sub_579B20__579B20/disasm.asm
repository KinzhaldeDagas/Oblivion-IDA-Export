0x579B20: push    1; arg1
0x579B22: push    0; canCreate
0x579B24: call    InterfaceManager_GetSingleton
0x579B29: add     esp, 8
0x579B2C: test    eax, eax
0x579B2E: jz      short locret_579B55
0x579B30: push    1; arg1
0x579B32: push    0; canCreate
0x579B34: call    InterfaceManager_GetSingleton
0x579B39: add     esp, 8
0x579B3C: cmp     dword ptr [eax+1Ch], 0
0x579B40: jz      short locret_579B55
0x579B42: push    1; arg1
0x579B44: push    0; canCreate
0x579B46: call    InterfaceManager_GetSingleton
0x579B4B: add     esp, 8
0x579B4E: mov     ecx, eax
0x579B50: jmp     loc_57DA60
0x579B55: retn
