0xA1CA00: push    offset off_B11AB4; "1.0, 1.0"
0xA1CA05: mov     ecx, offset unk_B11D4C
0xA1CA0A: call    BSSimpleList_Remove
0xA1CA0F: mov     eax, off_B11AB8; "sBody:HIT"
0xA1CA14: test    eax, eax
0xA1CA16: jz      short locret_A1CA24
0xA1CA18: cmp     byte ptr [eax], 53h ; 'S'
0xA1CA1B: jnz     short locret_A1CA24
0xA1CA1D: push    eax
0xA1CA1E: call    FormHeapFree
0xA1CA23: pop     ecx
0xA1CA24: retn
