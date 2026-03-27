0xA25D10: push    offset unk_B14F50
0xA25D15: mov     ecx, offset dword_B07CFC
0xA25D1A: call    BSSimpleList_Remove
0xA25D1F: mov     eax, off_B14F54; "iHoursToSleep:General"
0xA25D24: test    eax, eax
0xA25D26: jz      short locret_A25D34
0xA25D28: cmp     byte ptr [eax], 53h ; 'S'
0xA25D2B: jnz     short locret_A25D34
0xA25D2D: push    eax
0xA25D2E: call    FormHeapFree
0xA25D33: pop     ecx
0xA25D34: retn
