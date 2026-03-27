0xA18440: push    offset byte_B05BBC
0xA18445: mov     ecx, offset dword_B07CFC
0xA1844A: call    BSSimpleList_Remove
0xA1844F: mov     eax, off_B05BC0; "bDisplayMissingContentDialogue:General"
0xA18454: test    eax, eax
0xA18456: jz      short locret_A18464
0xA18458: cmp     byte ptr [eax], 53h ; 'S'
0xA1845B: jnz     short locret_A18464
0xA1845D: push    eax
0xA1845E: call    FormHeapFree
0xA18463: pop     ecx
0xA18464: retn
