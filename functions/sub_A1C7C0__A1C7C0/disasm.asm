0xA1C7C0: push    offset flt_B11A54
0xA1C7C5: mov     ecx, offset unk_B11D4C
0xA1C7CA: call    BSSimpleList_Remove
0xA1C7CF: mov     eax, off_B11A58; "fBFMin:HIT"
0xA1C7D4: test    eax, eax
0xA1C7D6: jz      short locret_A1C7E4
0xA1C7D8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C7DB: jnz     short locret_A1C7E4
0xA1C7DD: push    eax
0xA1C7DE: call    FormHeapFree
0xA1C7E3: pop     ecx
0xA1C7E4: retn
