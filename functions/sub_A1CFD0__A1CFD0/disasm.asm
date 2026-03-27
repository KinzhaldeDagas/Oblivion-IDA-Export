0xA1CFD0: push    offset off_B11BAC; "1.0, 1.0"
0xA1CFD5: mov     ecx, offset unk_B11D4C
0xA1CFDA: call    BSSimpleList_Remove
0xA1CFDF: mov     eax, off_B11BB0; "sRFoot:DEFAULT"
0xA1CFE4: test    eax, eax
0xA1CFE6: jz      short locret_A1CFF4
0xA1CFE8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CFEB: jnz     short locret_A1CFF4
0xA1CFED: push    eax
0xA1CFEE: call    FormHeapFree
0xA1CFF3: pop     ecx
0xA1CFF4: retn
