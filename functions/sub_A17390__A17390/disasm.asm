0xA17390: push    offset dword_B0315C
0xA17395: mov     ecx, offset dword_B07CFC
0xA1739A: call    BSSimpleList_Remove
0xA1739F: mov     eax, off_B03160; "iAutoViewMinDistance:Display"
0xA173A4: test    eax, eax
0xA173A6: jz      short locret_A173B4
0xA173A8: cmp     byte ptr [eax], 53h ; 'S'
0xA173AB: jnz     short locret_A173B4
0xA173AD: push    eax
0xA173AE: call    FormHeapFree
0xA173B3: pop     ecx
0xA173B4: retn
