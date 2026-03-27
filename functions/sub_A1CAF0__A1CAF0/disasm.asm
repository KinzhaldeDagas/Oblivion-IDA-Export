0xA1CAF0: push    offset off_B11ADC; "1.0, 1.0"
0xA1CAF5: mov     ecx, offset unk_B11D4C
0xA1CAFA: call    BSSimpleList_Remove
0xA1CAFF: mov     eax, off_B11AE0; "sRThigh:QUADHIT"
0xA1CB04: test    eax, eax
0xA1CB06: jz      short locret_A1CB14
0xA1CB08: cmp     byte ptr [eax], 53h ; 'S'
0xA1CB0B: jnz     short locret_A1CB14
0xA1CB0D: push    eax
0xA1CB0E: call    FormHeapFree
0xA1CB13: pop     ecx
0xA1CB14: retn
