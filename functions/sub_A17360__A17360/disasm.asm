0xA17360: push    offset dword_B03154
0xA17365: mov     ecx, offset dword_B07CFC
0xA1736A: call    BSSimpleList_Remove
0xA1736F: mov     eax, off_B03158; "iAutoViewHiFrameRate:Display"
0xA17374: test    eax, eax
0xA17376: jz      short locret_A17384
0xA17378: cmp     byte ptr [eax], 53h ; 'S'
0xA1737B: jnz     short locret_A17384
0xA1737D: push    eax
0xA1737E: call    FormHeapFree
0xA17383: pop     ecx
0xA17384: retn
