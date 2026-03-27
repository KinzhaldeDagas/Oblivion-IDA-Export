0xA17030: push    offset iDebugTextLeftRightOffset
0xA17035: mov     ecx, offset dword_B07CFC
0xA1703A: call    BSSimpleList_Remove
0xA1703F: mov     eax, off_B02E28; "iDebugTextLeftRightOffset:Display"
0xA17044: test    eax, eax
0xA17046: jz      short locret_A17054
0xA17048: cmp     byte ptr [eax], 53h ; 'S'
0xA1704B: jnz     short locret_A17054
0xA1704D: push    eax
0xA1704E: call    FormHeapFree
0xA17053: pop     ecx
0xA17054: retn
