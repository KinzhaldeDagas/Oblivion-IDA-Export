0xA1C7F0: push    offset flt_B11A5C
0xA1C7F5: mov     ecx, offset unk_B11D4C
0xA1C7FA: call    BSSimpleList_Remove
0xA1C7FF: mov     eax, off_B11A60; "fBFMax:HIT"
0xA1C804: test    eax, eax
0xA1C806: jz      short locret_A1C814
0xA1C808: cmp     byte ptr [eax], 53h ; 'S'
0xA1C80B: jnz     short locret_A1C814
0xA1C80D: push    eax
0xA1C80E: call    FormHeapFree
0xA1C813: pop     ecx
0xA1C814: retn
