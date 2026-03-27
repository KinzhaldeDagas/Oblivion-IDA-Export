0xA17330: push    offset dword_B0314C
0xA17335: mov     ecx, offset dword_B07CFC
0xA1733A: call    BSSimpleList_Remove
0xA1733F: mov     eax, off_B03150; "iAutoViewLowFrameRate:Display"
0xA17344: test    eax, eax
0xA17346: jz      short locret_A17354
0xA17348: cmp     byte ptr [eax], 53h ; 'S'
0xA1734B: jnz     short locret_A17354
0xA1734D: push    eax
0xA1734E: call    FormHeapFree
0xA17353: pop     ecx
0xA17354: retn
