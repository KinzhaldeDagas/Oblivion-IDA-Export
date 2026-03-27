0xA1A510: push    offset unk_B070C8
0xA1A515: mov     ecx, offset dword_B07CFC
0xA1A51A: call    BSSimpleList_Remove
0xA1A51F: mov     eax, off_B070CC; "fNearWaterUnderwaterVolume:Water"
0xA1A524: test    eax, eax
0xA1A526: jz      short locret_A1A534
0xA1A528: cmp     byte ptr [eax], 53h ; 'S'
0xA1A52B: jnz     short locret_A1A534
0xA1A52D: push    eax
0xA1A52E: call    FormHeapFree
0xA1A533: pop     ecx
0xA1A534: retn
