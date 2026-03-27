0x579F80: push    1; arg1
0x579F82: push    0; canCreate
0x579F84: call    InterfaceManager_GetSingleton
0x579F89: add     esp, 8
0x579F8C: test    eax, eax
0x579F8E: jz      short loc_579FB9
0x579F90: push    1; arg1
0x579F92: push    0; canCreate
0x579F94: call    InterfaceManager_GetSingleton
0x579F99: add     esp, 8
0x579F9C: cmp     dword ptr [eax+1Ch], 0
0x579FA0: jz      short loc_579FB9
0x579FA2: push    1; arg1
0x579FA4: push    0; canCreate
0x579FA6: call    InterfaceManager_GetSingleton
0x579FAB: add     esp, 8
0x579FAE: cmp     dword ptr [eax+60h], 0
0x579FB2: jz      short loc_579FB9
0x579FB4: jmp     loc_5BB6C0
0x579FB9: xor     eax, eax
0x579FBB: retn
