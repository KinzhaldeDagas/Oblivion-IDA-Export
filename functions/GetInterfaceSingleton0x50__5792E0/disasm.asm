0x5792E0: push    1; arg1
0x5792E2: push    0; canCreate
0x5792E4: call    InterfaceManager_GetSingleton
0x5792E9: add     esp, 8
0x5792EC: test    eax, eax
0x5792EE: jz      short loc_579312
0x5792F0: push    1; arg1
0x5792F2: push    0; canCreate
0x5792F4: call    InterfaceManager_GetSingleton
0x5792F9: add     esp, 8
0x5792FC: cmp     dword ptr [eax+1Ch], 0
0x579300: jz      short loc_579312
0x579302: push    1; arg1
0x579304: push    0; canCreate
0x579306: call    InterfaceManager_GetSingleton
0x57930B: mov     al, [eax+50h]
0x57930E: add     esp, 8
0x579311: retn
0x579312: xor     al, al
0x579314: retn
