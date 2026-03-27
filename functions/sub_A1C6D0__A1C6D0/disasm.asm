0xA1C6D0: push    offset flt_B11A2C
0xA1C6D5: mov     ecx, offset unk_B11D4C
0xA1C6DA: call    BSSimpleList_Remove
0xA1C6DF: mov     eax, off_B11A30; "fKnockDownTime:HIT"
0xA1C6E4: test    eax, eax
0xA1C6E6: jz      short locret_A1C6F4
0xA1C6E8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C6EB: jnz     short locret_A1C6F4
0xA1C6ED: push    eax
0xA1C6EE: call    FormHeapFree
0xA1C6F3: pop     ecx
0xA1C6F4: retn
