0xA1CBE0: push    offset off_B11B04; "1.0, 1.0"
0xA1CBE5: mov     ecx, offset unk_B11D4C
0xA1CBEA: call    BSSimpleList_Remove
0xA1CBEF: mov     eax, off_B11B08; "sLForeArm:QUADHIT"
0xA1CBF4: test    eax, eax
0xA1CBF6: jz      short locret_A1CC04
0xA1CBF8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CBFB: jnz     short locret_A1CC04
0xA1CBFD: push    eax
0xA1CBFE: call    FormHeapFree
0xA1CC03: pop     ecx
0xA1CC04: retn
