0x57C200: push    1; arg1
0x57C202: push    0; canCreate
0x57C204: call    InterfaceManager_GetSingleton
0x57C209: add     esp, 8
0x57C20C: test    eax, eax
0x57C20E: jz      short locret_57C238
0x57C210: push    1; arg1
0x57C212: push    0; canCreate
0x57C214: call    InterfaceManager_GetSingleton
0x57C219: add     esp, 8
0x57C21C: cmp     dword ptr [eax+1Ch], 0
0x57C220: jz      short locret_57C238
0x57C222: push    1; arg1
0x57C224: push    0; canCreate
0x57C226: call    InterfaceManager_GetSingleton
0x57C22B: add     esp, 8
0x57C22E: cmp     byte ptr [eax+50h], 0
0x57C232: setz    cl
0x57C235: mov     [eax+50h], cl
0x57C238: retn
