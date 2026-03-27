0xA24790: push    offset flt_B135E0
0xA24795: mov     ecx, offset dword_B07CFC
0xA2479A: call    BSSimpleList_Remove
0xA2479F: mov     eax, off_B135E4; "fMenuPlayerLightDiffuseRed:Interface"
0xA247A4: test    eax, eax
0xA247A6: jz      short locret_A247B4
0xA247A8: cmp     byte ptr [eax], 53h ; 'S'
0xA247AB: jnz     short locret_A247B4
0xA247AD: push    eax
0xA247AE: call    FormHeapFree
0xA247B3: pop     ecx
0xA247B4: retn
