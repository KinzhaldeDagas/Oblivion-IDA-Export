0xA1C790: push    offset flt_B11A4C
0xA1C795: mov     ecx, offset unk_B11D4C
0xA1C79A: call    BSSimpleList_Remove
0xA1C79F: mov     eax, off_B11A50; "fHFMax:HIT"
0xA1C7A4: test    eax, eax
0xA1C7A6: jz      short locret_A1C7B4
0xA1C7A8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C7AB: jnz     short locret_A1C7B4
0xA1C7AD: push    eax
0xA1C7AE: call    FormHeapFree
0xA1C7B3: pop     ecx
0xA1C7B4: retn
