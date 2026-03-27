0xA26370: push    offset dword_B1626C
0xA26375: mov     ecx, offset dword_B07CFC
0xA2637A: call    BSSimpleList_Remove
0xA2637F: mov     eax, off_B16270; "fEarthMediumMassMin:Audio"
0xA26384: test    eax, eax
0xA26386: jz      short locret_A26394
0xA26388: cmp     byte ptr [eax], 53h ; 'S'
0xA2638B: jnz     short locret_A26394
0xA2638D: push    eax
0xA2638E: call    FormHeapFree
0xA26393: pop     ecx
0xA26394: retn
