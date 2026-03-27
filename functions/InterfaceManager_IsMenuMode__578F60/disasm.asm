0x578F60: push    1; arg1
0x578F62: push    0; canCreate
0x578F64: call    InterfaceManager_GetSingleton
0x578F69: add     esp, 8
0x578F6C: test    eax, eax
0x578F6E: jz      short InterfaceManager_IsMenuMode___Return_0
0x578F70: push    1; arg1
0x578F72: push    0; canCreate
0x578F74: call    InterfaceManager_GetSingleton
0x578F79: add     esp, 8
0x578F7C: cmp     dword ptr [eax+1Ch], 0
0x578F80: jz      short InterfaceManager_IsMenuMode___Return_0
0x578F82: push    1; arg1
0x578F84: push    0; canCreate
0x578F86: call    InterfaceManager_GetSingleton
0x578F8B: xor     ecx, ecx
0x578F8D: add     esp, 8
0x578F90: cmp     byte ptr [eax+8], 1
0x578F94: setnz   cl
0x578F97: mov     al, cl
0x578F99: retn
