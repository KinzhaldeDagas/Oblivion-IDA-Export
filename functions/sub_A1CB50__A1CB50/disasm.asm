0xA1CB50: push    offset off_B11AEC; "1.0, 1.0"
0xA1CB55: mov     ecx, offset unk_B11D4C
0xA1CB5A: call    BSSimpleList_Remove
0xA1CB5F: mov     eax, off_B11AF0; "sRUpperArm:QUADHIT"
0xA1CB64: test    eax, eax
0xA1CB66: jz      short locret_A1CB74
0xA1CB68: cmp     byte ptr [eax], 53h ; 'S'
0xA1CB6B: jnz     short locret_A1CB74
0xA1CB6D: push    eax
0xA1CB6E: call    FormHeapFree
0xA1CB73: pop     ecx
0xA1CB74: retn
