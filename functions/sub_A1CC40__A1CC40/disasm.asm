0xA1CC40: push    offset off_B11B14; "1.0, 1.0"
0xA1CC45: mov     ecx, offset unk_B11D4C
0xA1CC4A: call    BSSimpleList_Remove
0xA1CC4F: mov     eax, off_B11B18; "sSpine2:QUADHIT"
0xA1CC54: test    eax, eax
0xA1CC56: jz      short locret_A1CC64
0xA1CC58: cmp     byte ptr [eax], 53h ; 'S'
0xA1CC5B: jnz     short locret_A1CC64
0xA1CC5D: push    eax
0xA1CC5E: call    FormHeapFree
0xA1CC63: pop     ecx
0xA1CC64: retn
