0xA1BB00: push    offset havokDebug
0xA1BB05: mov     ecx, offset dword_B07CFC
0xA1BB0A: call    BSSimpleList_Remove
0xA1BB0F: mov     eax, off_B097BC; "bHavokDebug:HAVOK"
0xA1BB14: test    eax, eax
0xA1BB16: jz      short locret_A1BB24
0xA1BB18: cmp     byte ptr [eax], 53h ; 'S'
0xA1BB1B: jnz     short locret_A1BB24
0xA1BB1D: push    eax
0xA1BB1E: call    FormHeapFree
0xA1BB23: pop     ecx
0xA1BB24: retn
