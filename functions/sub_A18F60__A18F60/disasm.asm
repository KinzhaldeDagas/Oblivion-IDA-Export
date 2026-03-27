0xA18F60: push    offset iMultiSample
0xA18F65: mov     ecx, offset dword_B07CFC
0xA18F6A: call    BSSimpleList_Remove
0xA18F6F: mov     eax, off_B06D10; "iMultiSample:Display"
0xA18F74: test    eax, eax
0xA18F76: jz      short locret_A18F84
0xA18F78: cmp     byte ptr [eax], 53h ; 'S'
0xA18F7B: jnz     short locret_A18F84
0xA18F7D: push    eax
0xA18F7E: call    FormHeapFree
0xA18F83: pop     ecx
0xA18F84: retn
