0xA1BB30: push    offset flt_B097C0
0xA1BB35: mov     ecx, offset dword_B07CFC
0xA1BB3A: call    BSSimpleList_Remove
0xA1BB3F: mov     eax, off_B097C4; "fMaxTime:HAVOK"
0xA1BB44: test    eax, eax
0xA1BB46: jz      short locret_A1BB54
0xA1BB48: cmp     byte ptr [eax], 53h ; 'S'
0xA1BB4B: jnz     short locret_A1BB54
0xA1BB4D: push    eax
0xA1BB4E: call    FormHeapFree
0xA1BB53: pop     ecx
0xA1BB54: retn
