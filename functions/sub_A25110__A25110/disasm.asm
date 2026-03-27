0xA25110: push    offset flt_B14864
0xA25115: mov     ecx, offset dword_B07CFC
0xA2511A: call    BSSimpleList_Remove
0xA2511F: mov     eax, off_B14868; "fGammaMax:Display"
0xA25124: test    eax, eax
0xA25126: jz      short locret_A25134
0xA25128: cmp     byte ptr [eax], 53h ; 'S'
0xA2512B: jnz     short locret_A25134
0xA2512D: push    eax
0xA2512E: call    FormHeapFree
0xA25133: pop     ecx
0xA25134: retn
