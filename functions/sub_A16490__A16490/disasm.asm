0xA16490: push    offset bBackgroundMouse
0xA16495: mov     ecx, offset dword_B07CFC
0xA1649A: call    BSSimpleList_Remove
0xA1649F: mov     eax, off_B02C40; "bBackground Mouse:Controls"
0xA164A4: test    eax, eax
0xA164A6: jz      short locret_A164B4
0xA164A8: cmp     byte ptr [eax], 53h ; 'S'
0xA164AB: jnz     short locret_A164B4
0xA164AD: push    eax
0xA164AE: call    FormHeapFree
0xA164B3: pop     ecx
0xA164B4: retn
