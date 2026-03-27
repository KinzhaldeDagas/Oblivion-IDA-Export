0xA26520: push    offset dword_B162B4
0xA26525: mov     ecx, offset dword_B07CFC
0xA2652A: call    BSSimpleList_Remove
0xA2652F: mov     eax, off_B162B8; "fClothLargeMassMin:Audio"
0xA26534: test    eax, eax
0xA26536: jz      short locret_A26544
0xA26538: cmp     byte ptr [eax], 53h ; 'S'
0xA2653B: jnz     short locret_A26544
0xA2653D: push    eax
0xA2653E: call    FormHeapFree
0xA26543: pop     ecx
0xA26544: retn
