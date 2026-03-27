0xA1CBB0: push    offset off_B11AFC; "1.0, 1.0"
0xA1CBB5: mov     ecx, offset unk_B11D4C
0xA1CBBA: call    BSSimpleList_Remove
0xA1CBBF: mov     eax, off_B11B00; "sLThigh:QUADHIT"
0xA1CBC4: test    eax, eax
0xA1CBC6: jz      short locret_A1CBD4
0xA1CBC8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CBCB: jnz     short locret_A1CBD4
0xA1CBCD: push    eax
0xA1CBCE: call    FormHeapFree
0xA1CBD3: pop     ecx
0xA1CBD4: retn
