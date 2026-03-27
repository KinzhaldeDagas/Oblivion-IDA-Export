0xA1C880: push    offset off_B11A74; "1.0, 1.0"
0xA1C885: mov     ecx, offset unk_B11D4C
0xA1C88A: call    BSSimpleList_Remove
0xA1C88F: mov     eax, off_B11A78; "sRHand:HIT"
0xA1C894: test    eax, eax
0xA1C896: jz      short locret_A1C8A4
0xA1C898: cmp     byte ptr [eax], 53h ; 'S'
0xA1C89B: jnz     short locret_A1C8A4
0xA1C89D: push    eax
0xA1C89E: call    FormHeapFree
0xA1C8A3: pop     ecx
0xA1C8A4: retn
