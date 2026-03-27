0x578FA0: push    1; arg1
0x578FA2: push    0; canCreate
0x578FA4: call    InterfaceManager_GetSingleton
0x578FA9: add     esp, 8
0x578FAC: test    eax, eax
0x578FAE: jz      short loc_578FDA
0x578FB0: push    1; arg1
0x578FB2: push    0; canCreate
0x578FB4: call    InterfaceManager_GetSingleton
0x578FB9: add     esp, 8
0x578FBC: cmp     dword ptr [eax+1Ch], 0
0x578FC0: jz      short loc_578FDA
0x578FC2: push    1; arg1
0x578FC4: push    0; canCreate
0x578FC6: call    InterfaceManager_GetSingleton
0x578FCB: xor     ecx, ecx
0x578FCD: add     esp, 8
0x578FD0: cmp     byte ptr [eax+8], 3
0x578FD4: setz    cl
0x578FD7: mov     al, cl
0x578FD9: retn
0x578FDA: xor     al, al
0x578FDC: retn
