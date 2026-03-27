0xA1CD60: push    offset off_B11B44; "1.0, 1.0"
0xA1CD65: mov     ecx, offset unk_B11D4C
0xA1CD6A: call    BSSimpleList_Remove
0xA1CD6F: mov     eax, off_B11B48; "sSpine1:DEFAULT"
0xA1CD74: test    eax, eax
0xA1CD76: jz      short locret_A1CD84
0xA1CD78: cmp     byte ptr [eax], 53h ; 'S'
0xA1CD7B: jnz     short locret_A1CD84
0xA1CD7D: push    eax
0xA1CD7E: call    FormHeapFree
0xA1CD83: pop     ecx
0xA1CD84: retn
