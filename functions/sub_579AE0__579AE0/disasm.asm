0x579AE0: push    1; arg1
0x579AE2: push    0; canCreate
0x579AE4: call    InterfaceManager_GetSingleton
0x579AE9: add     esp, 8
0x579AEC: test    eax, eax
0x579AEE: jz      short locret_579B1A
0x579AF0: push    1; arg1
0x579AF2: push    0; canCreate
0x579AF4: call    InterfaceManager_GetSingleton
0x579AF9: add     esp, 8
0x579AFC: cmp     dword ptr [eax+1Ch], 0
0x579B00: jz      short locret_579B1A
0x579B02: push    1; arg1
0x579B04: push    0; canCreate
0x579B06: call    InterfaceManager_GetSingleton
0x579B0B: add     esp, 8
0x579B0E: mov     byte ptr [eax+0B8h], 1
0x579B15: jmp     sub_5903E0
0x579B1A: retn
