0x5793B0: push    1; arg1
0x5793B2: push    0; canCreate
0x5793B4: call    InterfaceManager_GetSingleton
0x5793B9: add     esp, 8
0x5793BC: test    eax, eax
0x5793BE: jz      short locret_5793F9
0x5793C0: push    1; arg1
0x5793C2: push    0; canCreate
0x5793C4: call    InterfaceManager_GetSingleton
0x5793C9: add     esp, 8
0x5793CC: cmp     dword ptr [eax+1Ch], 0
0x5793D0: jz      short locret_5793F9
0x5793D2: push    ebx
0x5793D3: push    1; arg1
0x5793D5: push    0; canCreate
0x5793D7: call    InterfaceManager_GetSingleton
0x5793DC: cmp     byte ptr [eax+0A8h], 0
0x5793E3: push    1; arg1
0x5793E5: push    0; canCreate
0x5793E7: setz    bl
0x5793EA: call    InterfaceManager_GetSingleton
0x5793EF: add     esp, 10h
0x5793F2: mov     [eax+0A8h], bl
0x5793F8: pop     ebx
0x5793F9: retn
