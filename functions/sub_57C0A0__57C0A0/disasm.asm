0x57C0A0: push    1; arg1
0x57C0A2: push    0; canCreate
0x57C0A4: call    InterfaceManager_GetSingleton
0x57C0A9: add     esp, 8
0x57C0AC: test    eax, eax
0x57C0AE: jz      short loc_57C12E
0x57C0B0: push    1; arg1
0x57C0B2: push    0; canCreate
0x57C0B4: call    InterfaceManager_GetSingleton
0x57C0B9: add     esp, 8
0x57C0BC: cmp     dword ptr [eax+1Ch], 0
0x57C0C0: jz      short loc_57C12E
0x57C0C2: push    1
0x57C0C4: push    1; arg1
0x57C0C6: push    0; canCreate
0x57C0C8: call    InterfaceManager_GetSingleton
0x57C0CD: add     esp, 8
0x57C0D0: mov     ecx, eax
0x57C0D2: call    sub_57CDE0
0x57C0D7: push    1
0x57C0D9: push    1; arg1
0x57C0DB: push    0; canCreate
0x57C0DD: call    InterfaceManager_GetSingleton
0x57C0E2: add     esp, 8
0x57C0E5: mov     ecx, eax
0x57C0E7: call    sub_57CE20
0x57C0EC: push    1
0x57C0EE: push    1; arg1
0x57C0F0: push    0; canCreate
0x57C0F2: call    InterfaceManager_GetSingleton
0x57C0F7: add     esp, 8
0x57C0FA: mov     ecx, eax
0x57C0FC: call    sub_57CE60
0x57C101: push    4
0x57C103: push    1; arg1
0x57C105: push    0; canCreate
0x57C107: call    InterfaceManager_GetSingleton
0x57C10C: add     esp, 8
0x57C10F: mov     ecx, eax
0x57C111: call    sub_57CEA0
0x57C116: push    3EBh
0x57C11B: push    1; arg1
0x57C11D: push    0; canCreate
0x57C11F: call    InterfaceManager_GetSingleton
0x57C124: add     esp, 8
0x57C127: mov     ecx, eax
0x57C129: call    sub_57D530
0x57C12E: mov     byte ptr ds:0B14500h, 1
0x57C135: retn
