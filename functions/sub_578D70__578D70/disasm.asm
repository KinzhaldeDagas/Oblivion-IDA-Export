0x578D70: push    ebx; Verified aPortable: returns InterfaceManager+0xB0 and resets to FF. Use actual selected index, not script last-button global B09E24, in native callbacks.
0x578D71: push    1; arg1
0x578D73: push    0; canCreate
0x578D75: call    InterfaceManager_GetSingleton
0x578D7A: mov     bl, [eax+0B0h]
0x578D80: push    1; arg1
0x578D82: push    0; canCreate
0x578D84: call    InterfaceManager_GetSingleton
0x578D89: add     esp, 10h
0x578D8C: mov     byte ptr [eax+0B0h], 0FFh
0x578D93: mov     al, bl
0x578D95: pop     ebx
0x578D96: retn
