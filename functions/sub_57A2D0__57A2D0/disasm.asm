0x57A2D0: push    1; arg1
0x57A2D2: push    0; canCreate
0x57A2D4: call    InterfaceManager_GetSingleton
0x57A2D9: add     esp, 8
0x57A2DC: test    eax, eax
0x57A2DE: jz      short loc_57A309
0x57A2E0: push    1; arg1
0x57A2E2: push    0; canCreate
0x57A2E4: call    InterfaceManager_GetSingleton
0x57A2E9: add     esp, 8
0x57A2EC: cmp     dword ptr [eax+1Ch], 0
0x57A2F0: jz      short loc_57A309
0x57A2F2: push    1; arg1
0x57A2F4: push    0; canCreate
0x57A2F6: call    InterfaceManager_GetSingleton
0x57A2FB: add     esp, 8
0x57A2FE: cmp     dword ptr [eax+60h], 0
0x57A302: jz      short loc_57A309
0x57A304: jmp     loc_5AB5A0
0x57A309: xor     eax, eax
0x57A30B: retn
