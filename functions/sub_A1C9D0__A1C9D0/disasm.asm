0xA1C9D0: push    offset off_B11AAC; "0.6, 0.8"
0xA1C9D5: mov     ecx, offset unk_B11D4C
0xA1C9DA: call    BSSimpleList_Remove
0xA1C9DF: mov     eax, off_B11AB0; "sSpine1:HIT"
0xA1C9E4: test    eax, eax
0xA1C9E6: jz      short locret_A1C9F4
0xA1C9E8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C9EB: jnz     short locret_A1C9F4
0xA1C9ED: push    eax
0xA1C9EE: call    FormHeapFree
0xA1C9F3: pop     ecx
0xA1C9F4: retn
