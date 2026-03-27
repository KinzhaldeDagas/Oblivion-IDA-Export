0x57A180: push    1; arg1
0x57A182: push    0; canCreate
0x57A184: call    InterfaceManager_GetSingleton
0x57A189: add     esp, 8
0x57A18C: test    eax, eax
0x57A18E: jz      short loc_57A1B9
0x57A190: push    1; arg1
0x57A192: push    0; canCreate
0x57A194: call    InterfaceManager_GetSingleton
0x57A199: add     esp, 8
0x57A19C: cmp     dword ptr [eax+1Ch], 0
0x57A1A0: jz      short loc_57A1B9
0x57A1A2: push    1; arg1
0x57A1A4: push    0; canCreate
0x57A1A6: call    InterfaceManager_GetSingleton
0x57A1AB: add     esp, 8
0x57A1AE: cmp     dword ptr [eax+60h], 0
0x57A1B2: jz      short loc_57A1B9
0x57A1B4: jmp     sub_5B3760
0x57A1B9: xor     eax, eax
0x57A1BB: retn
