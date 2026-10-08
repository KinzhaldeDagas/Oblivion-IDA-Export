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
0x583E30: mov     ecx, ds:0B3A6E0h
0x583E36: test    ecx, ecx
0x583E38: jz      short locret_583E56
0x583E3A: push    esi
0x583E3B: mov     esi, ecx
0x583E3D: call    sub_581A50
0x583E42: push    esi
0x583E43: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x583E48: add     esp, 4
0x583E4B: mov     dword ptr ds:0B3A6E0h, 0
0x583E55: pop     esi
0x583E56: retn
