0xA244F0: push    offset byte_B13230
0xA244F5: mov     ecx, offset dword_B07CFC
0xA244FA: call    BSSimpleList_Remove
0xA244FF: mov     eax, off_B13234; "bSaveOnInteriorExteriorSwitch:GamePlay"
0xA24504: test    eax, eax
0xA24506: jz      short locret_A24514
0xA24508: cmp     byte ptr [eax], 53h ; 'S'
0xA2450B: jnz     short locret_A24514
0xA2450D: push    eax
0xA2450E: call    FormHeapFree
0xA24513: pop     ecx
0xA24514: retn
