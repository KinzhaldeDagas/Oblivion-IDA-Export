0xA18660: push    offset bLoadHelmentsBackground
0xA18665: mov     ecx, offset dword_B07CFC
0xA1866A: call    BSSimpleList_Remove
0xA1866F: mov     eax, off_B0660C; "bLoadHelmetsInBackground:BackgroundLoad"
0xA18674: test    eax, eax
0xA18676: jz      short locret_A18684
0xA18678: cmp     byte ptr [eax], 53h ; 'S'
0xA1867B: jnz     short locret_A18684
0xA1867D: push    eax
0xA1867E: call    FormHeapFree
0xA18683: pop     ecx
0xA18684: retn
