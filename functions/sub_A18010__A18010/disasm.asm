0xA18010: push    offset unk_B05254
0xA18015: mov     ecx, offset dword_B07CFC
0xA1801A: call    BSSimpleList_Remove
0xA1801F: mov     eax, off_B05258; "iThreads:OPENMP"
0xA18024: test    eax, eax
0xA18026: jz      short locret_A18034
0xA18028: cmp     byte ptr [eax], 53h ; 'S'
0xA1802B: jnz     short locret_A18034
0xA1802D: push    eax
0xA1802E: call    FormHeapFree
0xA18033: pop     ecx
0xA18034: retn
