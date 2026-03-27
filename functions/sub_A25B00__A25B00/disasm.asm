0xA25B00: push    offset flt_B14EF8
0xA25B05: mov     ecx, offset dword_B07CFC
0xA25B0A: call    BSSimpleList_Remove
0xA25B0F: mov     eax, off_B14EFC; "fJoystickMoveLRMult:Controls"
0xA25B14: test    eax, eax
0xA25B16: jz      short locret_A25B24
0xA25B18: cmp     byte ptr [eax], 53h ; 'S'
0xA25B1B: jnz     short locret_A25B24
0xA25B1D: push    eax
0xA25B1E: call    FormHeapFree
0xA25B23: pop     ecx
0xA25B24: retn
