0xA18740: push    offset unk_B068D8
0xA18745: mov     ecx, offset dword_B07CFC
0xA1874A: call    BSSimpleList_Remove
0xA1874F: mov     eax, off_B068DC; "fOD:HAVOK"
0xA18754: test    eax, eax
0xA18756: jz      short locret_A18764
0xA18758: cmp     byte ptr [eax], 53h ; 'S'
0xA1875B: jnz     short locret_A18764
0xA1875D: push    eax
0xA1875E: call    FormHeapFree
0xA18763: pop     ecx
0xA18764: retn
