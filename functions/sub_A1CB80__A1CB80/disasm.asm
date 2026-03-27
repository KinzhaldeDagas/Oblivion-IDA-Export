0xA1CB80: push    offset off_B11AF4; "1.0, 1.0"
0xA1CB85: mov     ecx, offset unk_B11D4C
0xA1CB8A: call    BSSimpleList_Remove
0xA1CB8F: mov     eax, off_B11AF8; "sLCalf:QUADHIT"
0xA1CB94: test    eax, eax
0xA1CB96: jz      short locret_A1CBA4
0xA1CB98: cmp     byte ptr [eax], 53h ; 'S'
0xA1CB9B: jnz     short locret_A1CBA4
0xA1CB9D: push    eax
0xA1CB9E: call    FormHeapFree
0xA1CBA3: pop     ecx
0xA1CBA4: retn
