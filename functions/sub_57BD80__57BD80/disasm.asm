0x57BD80: push    1; arg1
0x57BD82: push    0; canCreate
0x57BD84: call    InterfaceManager_GetSingleton
0x57BD89: add     esp, 8
0x57BD8C: test    eax, eax
0x57BD8E: jz      short locret_57BDA7
0x57BD90: push    1; arg1
0x57BD92: push    0; canCreate
0x57BD94: call    InterfaceManager_GetSingleton
0x57BD99: add     esp, 8
0x57BD9C: cmp     dword ptr [eax+1Ch], 0
0x57BDA0: jz      short locret_57BDA7
0x57BDA2: jmp     sub_5B3E50
0x57BDA7: retn
