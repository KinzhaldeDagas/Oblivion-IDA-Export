0xA1CB20: push    offset off_B11AE4; "1.0, 1.0"
0xA1CB25: mov     ecx, offset unk_B11D4C
0xA1CB2A: call    BSSimpleList_Remove
0xA1CB2F: mov     eax, off_B11AE8; "sRForeArm:QUADHIT"
0xA1CB34: test    eax, eax
0xA1CB36: jz      short locret_A1CB44
0xA1CB38: cmp     byte ptr [eax], 53h ; 'S'
0xA1CB3B: jnz     short locret_A1CB44
0xA1CB3D: push    eax
0xA1CB3E: call    FormHeapFree
0xA1CB43: pop     ecx
0xA1CB44: retn
