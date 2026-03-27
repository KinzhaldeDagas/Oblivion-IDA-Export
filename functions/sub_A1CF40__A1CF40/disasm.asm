0xA1CF40: push    offset off_B11B94; "1.0f, 1.0"
0xA1CF45: mov     ecx, offset unk_B11D4C
0xA1CF4A: call    BSSimpleList_Remove
0xA1CF4F: mov     eax, off_B11B98; "sRHand:DEFAULT"
0xA1CF54: test    eax, eax
0xA1CF56: jz      short locret_A1CF64
0xA1CF58: cmp     byte ptr [eax], 53h ; 'S'
0xA1CF5B: jnz     short locret_A1CF64
0xA1CF5D: push    eax
0xA1CF5E: call    FormHeapFree
0xA1CF63: pop     ecx
0xA1CF64: retn
