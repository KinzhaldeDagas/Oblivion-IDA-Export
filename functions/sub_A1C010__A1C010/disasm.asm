0xA1C010: push    offset externalLodFiles
0xA1C015: mov     ecx, offset dword_B07CFC
0xA1C01A: call    BSSimpleList_Remove
0xA1C01F: mov     eax, off_B09DB4; "bExternalLODDataFiles:General"
0xA1C024: test    eax, eax
0xA1C026: jz      short locret_A1C034
0xA1C028: cmp     byte ptr [eax], 53h ; 'S'
0xA1C02B: jnz     short locret_A1C034
0xA1C02D: push    eax
0xA1C02E: call    FormHeapFree
0xA1C033: pop     ecx
0xA1C034: retn
