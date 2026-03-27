0x579400: push    1; arg1
0x579402: push    0; canCreate
0x579404: call    InterfaceManager_GetSingleton
0x579409: add     esp, 8
0x57940C: test    eax, eax
0x57940E: jz      short loc_579435
0x579410: push    1; arg1
0x579412: push    0; canCreate
0x579414: call    InterfaceManager_GetSingleton
0x579419: add     esp, 8
0x57941C: cmp     dword ptr [eax+1Ch], 0
0x579420: jz      short loc_579435
0x579422: push    1; arg1
0x579424: push    0; canCreate
0x579426: call    InterfaceManager_GetSingleton
0x57942B: mov     al, [eax+0A8h]
0x579431: add     esp, 8
0x579434: retn
0x579435: xor     al, al
0x579437: retn
