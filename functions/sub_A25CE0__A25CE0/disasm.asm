0xA25CE0: push    offset byte_B14F48
0xA25CE5: mov     ecx, offset dword_B07CFC
0xA25CEA: call    BSSimpleList_Remove
0xA25CEF: mov     eax, off_B14F4C; "bEnableBowZoom:Combat"
0xA25CF4: test    eax, eax
0xA25CF6: jz      short locret_A25D04
0xA25CF8: cmp     byte ptr [eax], 53h ; 'S'
0xA25CFB: jnz     short locret_A25D04
0xA25CFD: push    eax
0xA25CFE: call    FormHeapFree
0xA25D03: pop     ecx
0xA25D04: retn
