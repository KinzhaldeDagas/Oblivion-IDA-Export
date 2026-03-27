0xA18F00: push    offset unk_B06CFC
0xA18F05: mov     ecx, offset dword_B07CFC
0xA18F0A: call    BSSimpleList_Remove
0xA18F0F: mov     eax, off_B06D00; "bForceMultiPass:Display"
0xA18F14: test    eax, eax
0xA18F16: jz      short locret_A18F24
0xA18F18: cmp     byte ptr [eax], 53h ; 'S'
0xA18F1B: jnz     short locret_A18F24
0xA18F1D: push    eax
0xA18F1E: call    FormHeapFree
0xA18F23: pop     ecx
0xA18F24: retn
