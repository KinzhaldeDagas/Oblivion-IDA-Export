0xA1CCD0: push    offset off_B11B2C; "0.3, 0.9"
0xA1CCD5: mov     ecx, offset unk_B11D4C
0xA1CCDA: call    BSSimpleList_Remove
0xA1CCDF: mov     eax, off_B11B30; "sHead:QUADHIT"
0xA1CCE4: test    eax, eax
0xA1CCE6: jz      short locret_A1CCF4
0xA1CCE8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CCEB: jnz     short locret_A1CCF4
0xA1CCED: push    eax
0xA1CCEE: call    FormHeapFree
0xA1CCF3: pop     ecx
0xA1CCF4: retn
