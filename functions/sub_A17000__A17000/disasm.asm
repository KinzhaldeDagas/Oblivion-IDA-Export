0xA17000: push    offset iDebugTextTopBottomOffset
0xA17005: mov     ecx, offset dword_B07CFC
0xA1700A: call    BSSimpleList_Remove
0xA1700F: mov     eax, off_B02E20; "iDebugTextTopBottomOffset:Display"
0xA17014: test    eax, eax
0xA17016: jz      short locret_A17024
0xA17018: cmp     byte ptr [eax], 53h ; 'S'
0xA1701B: jnz     short locret_A17024
0xA1701D: push    eax
0xA1701E: call    FormHeapFree
0xA17023: pop     ecx
0xA17024: retn
