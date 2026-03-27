0x57AF10: push    1; arg1
0x57AF12: push    0; canCreate
0x57AF14: call    InterfaceManager_GetSingleton
0x57AF19: add     esp, 8
0x57AF1C: test    eax, eax
0x57AF1E: jz      locret_57AFA6
0x57AF24: push    1; arg1
0x57AF26: push    0; canCreate
0x57AF28: call    InterfaceManager_GetSingleton
0x57AF2D: add     esp, 8
0x57AF30: cmp     dword ptr [eax+1Ch], 0
0x57AF34: jz      short locret_57AFA6
0x57AF36: push    1; arg1
0x57AF38: push    0; canCreate
0x57AF3A: call    InterfaceManager_GetSingleton
0x57AF3F: add     esp, 8
0x57AF42: cmp     dword ptr [eax+68h], 0
0x57AF46: jz      short locret_57AFA6
0x57AF48: push    1; arg1
0x57AF4A: push    0; canCreate
0x57AF4C: call    InterfaceManager_GetSingleton
0x57AF51: mov     eax, [eax+68h]
0x57AF54: add     esp, 8
0x57AF57: push    0FAEh
0x57AF5C: mov     ecx, eax
0x57AF5E: call    Tile_GetFloat
0x57AF63: fcomp   dword ptr ds:0A379B4h
0x57AF69: fnstsw  ax
0x57AF6B: test    ah, 44h
0x57AF6E: jp      short locret_57AFA6
0x57AF70: push    0; int
0x57AF72: push    offset ??_R0?AVHUDSubtitleMenu@@@8; struct TypeDescriptor *
0x57AF77: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57AF7C: push    0; int
0x57AF7E: push    3F2h
0x57AF83: call    Menu_GetOpenMenuTile
0x57AF88: add     esp, 4
0x57AF8B: mov     ecx, eax
0x57AF8D: call    Tile_GetParentMenu
0x57AF92: push    eax; void *
0x57AF93: call    OblivionDynamicCast
0x57AF98: add     esp, 14h
0x57AF9B: test    eax, eax
0x57AF9D: jz      short locret_57AFA6
0x57AF9F: mov     ecx, eax
0x57AFA1: jmp     sub_5A8F30
0x57AFA6: retn
