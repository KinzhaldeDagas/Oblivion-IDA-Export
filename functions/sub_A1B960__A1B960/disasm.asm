0xA1B960: push    offset dword_B08B74
0xA1B965: mov     ecx, offset dword_B07CFC
0xA1B96A: call    BSSimpleList_Remove
0xA1B96F: mov     eax, off_B08B78; "iLandBorder1R:Landscape"
0xA1B974: test    eax, eax
0xA1B976: jz      short locret_A1B984
0xA1B978: cmp     byte ptr [eax], 53h ; 'S'
0xA1B97B: jnz     short locret_A1B984
0xA1B97D: push    eax
0xA1B97E: call    FormHeapFree
0xA1B983: pop     ecx
0xA1B984: retn
