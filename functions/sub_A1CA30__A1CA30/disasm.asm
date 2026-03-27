0xA1CA30: push    offset off_B11ABC; "0.4, 0.6"
0xA1CA35: mov     ecx, offset unk_B11D4C
0xA1CA3A: call    BSSimpleList_Remove
0xA1CA3F: mov     eax, off_B11AC0; "sHead:HIT"
0xA1CA44: test    eax, eax
0xA1CA46: jz      short locret_A1CA54
0xA1CA48: cmp     byte ptr [eax], 53h ; 'S'
0xA1CA4B: jnz     short locret_A1CA54
0xA1CA4D: push    eax
0xA1CA4E: call    FormHeapFree
0xA1CA53: pop     ecx
0xA1CA54: retn
